#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_Data_Mapping_HardwareJoystickMap_Platform_Custom_Axis.h"
#include "Rewired_Data_Mapping_HardwareJoystickMap_Platform_GameCore_Base.h"
namespace Rewired_Core::Rewired::Data::Mapping { struct HardwareJoystickMap_Platform_GameCore_Base; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "Rewired_Data_Mapping_AxisDirection.h"
#include "Rewired_Data_Mapping_HatType.h"
#include "Rewired_AxisRange.h"
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Rewired_Core::Rewired::Data::Mapping { struct HardwareJoystickMap_Platform_Custom_Element; };

namespace Rewired_Core::Rewired::Data::Mapping
{
	struct HardwareJoystickMap_Platform_GameCore_Base_Axis : Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_Custom_Axis
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t sourceHat;
		Rewired_Core::Rewired::Data::Mapping::AxisDirection sourceHatDirection;
		Rewired_Core::Rewired::Data::Mapping::HatType sourceHatType;
		Rewired_Core::Rewired::AxisRange sourceHatRange;
		mscorlib::System::Object* DeepClone();
		void CopyVars(Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_Custom_Element* destination);
		void _ctor();
	};
}

