#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_Data_Mapping_HardwareJoystickMap_Platform_Custom_MatchingCriteria.h"
#include "Rewired_Data_Mapping_HardwareJoystickMap_Platform_InternalDriver_Base.h"
namespace Rewired_Core::Rewired::Data::Mapping { struct HardwareJoystickMap_Platform_InternalDriver_Base; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };
namespace Rewired_Core::Rewired::Data::Mapping { struct HardwareJoystickMap_VidPid; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Rewired_Core::Rewired { struct BridgedControllerHWInfo; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Rewired_Core::Rewired::Data::Mapping { struct HardwareJoystickMap_MatchingCriteria_Base; };

namespace Rewired_Core::Rewired::Data::Mapping
{
	struct HardwareJoystickMap_Platform_InternalDriver_Base_MatchingCriteria : Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_Custom_MatchingCriteria
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool productName_useRegex;
		IL2CPP::Array<mscorlib::System::String*>* productName;
		IL2CPP::Array<Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_VidPid*>* vidPid;
		int32_t hatCount;
		bool get_hasData();
		bool get_isAllowed();
		bool Matches(Rewired_Core::Rewired::BridgedControllerHWInfo* bridgedControllerHWInfo, bool strictMatch);
		bool ElementCountsMatch(Rewired_Core::Rewired::BridgedControllerHWInfo* bridgedControllerHWInfo, bool& alternateMatched);
		mscorlib::System::Object* DeepClone();
		void CopyVars(Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_MatchingCriteria_Base* destination);
		bool ProductNameMatches(mscorlib::System::String* name);
		void _ctor();
	};
}

