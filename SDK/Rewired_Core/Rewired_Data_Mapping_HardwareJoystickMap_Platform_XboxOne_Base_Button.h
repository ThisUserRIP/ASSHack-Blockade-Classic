#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_Data_Mapping_HardwareJoystickMap_Platform_Custom_Button.h"
#include "Rewired_Data_Mapping_HardwareJoystickMap_Platform_XboxOne_Base.h"
namespace Rewired_Core::Rewired::Data::Mapping { struct HardwareJoystickMap_Platform_XboxOne_Base; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Rewired_Core::Rewired::Data::Mapping { struct HardwareJoystickMap_Platform_Custom_Element; };

namespace Rewired_Core::Rewired::Data::Mapping
{
	struct HardwareJoystickMap_Platform_XboxOne_Base_Button : Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_Custom_Button
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Object* DeepClone();
		void CopyVars(Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_Custom_Element* destination);
		void _ctor();
	};
}

