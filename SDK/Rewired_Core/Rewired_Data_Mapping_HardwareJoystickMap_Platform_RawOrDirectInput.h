#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_Data_Mapping_HardwareJoystickMap_Platform.h"
#include "Rewired_Data_Mapping_HardwareJoystickMap.h"
namespace Rewired_Core::Rewired::Data::Mapping { struct HardwareJoystickMap; };
namespace Rewired_Core::Rewired::Data::Mapping { struct HardwareJoystickMap_Platform_RawOrDirectInput_MatchingCriteria; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Rewired_Core::Rewired::Data::Mapping { struct HardwareJoystickMap_Platform_RawOrDirectInput_Axis_Base; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IEnumerable_1; };
namespace Rewired_Core::Rewired::Data::Mapping { struct HardwareJoystickMap_Platform_RawOrDirectInput_Button_Base; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Rewired_Core::Rewired::Data::Mapping { struct HardwareJoystickMap_Platform; };

namespace Rewired_Core::Rewired::Data::Mapping
{
	struct HardwareJoystickMap_Platform_RawOrDirectInput : Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_RawOrDirectInput_MatchingCriteria* matchingCriteria;
		bool get_hasData();
		bool get_disabled();
		bool get_isAllowed();
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_RawOrDirectInput_Axis_Base>* IterateAxes();
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_RawOrDirectInput_Button_Base>* IterateButtons();
		void CopyVars(Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform* destination);
		void _ctor();
	};
}

