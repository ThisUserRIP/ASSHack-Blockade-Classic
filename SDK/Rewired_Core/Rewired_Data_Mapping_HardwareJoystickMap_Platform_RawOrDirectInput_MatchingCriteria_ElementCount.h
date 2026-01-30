#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_Data_Mapping_HardwareJoystickMap_MatchingCriteria_Base_ElementCount_Base.h"
#include "Rewired_Data_Mapping_HardwareJoystickMap_Platform_RawOrDirectInput_MatchingCriteria.h"
namespace Rewired_Core::Rewired::Data::Mapping { struct HardwareJoystickMap_Platform_RawOrDirectInput_MatchingCriteria; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
namespace Rewired_Core::Rewired::Data::Mapping { struct HardwareJoystickMap_MatchingCriteria_Base_ElementCount_Base; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Rewired_Core::Rewired { struct BridgedControllerHWInfo; };

namespace Rewired_Core::Rewired::Data::Mapping
{
	struct HardwareJoystickMap_Platform_RawOrDirectInput_MatchingCriteria_ElementCount : Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_MatchingCriteria_Base_ElementCount_Base
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t hatCount;
		void _ctor();
		mscorlib::System::Object* DeepClone();
		void CopyVars(Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_MatchingCriteria_Base_ElementCount_Base* A_1);
		bool Matches(Rewired_Core::Rewired::BridgedControllerHWInfo* A_1);
	};
}

