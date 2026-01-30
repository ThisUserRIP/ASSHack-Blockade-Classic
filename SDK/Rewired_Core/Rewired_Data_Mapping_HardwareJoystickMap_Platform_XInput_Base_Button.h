#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_Data_Mapping_HardwareJoystickMap_Platform_XInput_Base_Element.h"
#include "Rewired_Data_Mapping_HardwareJoystickMap_Platform_XInput_Base.h"
namespace Rewired_Core::Rewired::Data::Mapping { struct HardwareJoystickMap_Platform_XInput_Base; };
#include "Rewired_Pole.h"
namespace Rewired_Core::Rewired::Data::Mapping { struct HardwareButtonInfo; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
namespace Rewired_Core::Rewired::Data::Mapping { struct HardwareJoystickMap_Platform_XInput_Base_Element; };

namespace Rewired_Core::Rewired::Data::Mapping
{
	struct HardwareJoystickMap_Platform_XInput_Base_Button : Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_XInput_Base_Element
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::Pole sourceAxisPole;
		Rewired_Core::Rewired::Data::Mapping::HardwareButtonInfo* buttonInfo;
		void _ctor();
		mscorlib::System::Object* DeepClone();
		void CopyVars(Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_XInput_Base_Element* destination);
	};
}

