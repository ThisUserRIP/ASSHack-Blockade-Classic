#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_Data_Mapping_HardwareJoystickMap.h"
namespace Rewired_Core::Rewired::Data::Mapping { struct HardwareJoystickMap; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };
namespace Rewired_Core::Rewired { struct BridgedControllerHWInfo; };
namespace Rewired_Core::Rewired::Data::Mapping { struct HardwareJoystickMap_MatchingCriteria_Base_ElementCount_Base; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };

namespace Rewired_Core::Rewired::Data::Mapping
{
	struct HardwareJoystickMap_MatchingCriteria_Base : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t axisCount;
		int32_t buttonCount;
		bool disabled;
		mscorlib::System::String* tag;
		bool get_hasData();
		bool get_isAllowed();
		bool Matches(Rewired_Core::Rewired::BridgedControllerHWInfo* BridgedControllerHWInfo, bool strictMatch);
		int32_t get_alternateElementCount();
		Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_MatchingCriteria_Base_ElementCount_Base* GetAlternateElementCount(int32_t index);
		bool ElementCountsMatch(Rewired_Core::Rewired::BridgedControllerHWInfo* bridgedControllerHWInfo, bool& alternateMatched);
		void CopyVars(Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_MatchingCriteria_Base* destination);
		static bool StringMatches(mscorlib::System::String* searchIn, mscorlib::System::String* searchFor, bool useRegex);
		mscorlib::System::Object* DeepClone();
		void _ctor();
	};
}

