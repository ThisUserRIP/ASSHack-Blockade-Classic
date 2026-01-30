#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_Data_Mapping_HardwareJoystickMap_MatchingCriteria_Base.h"
#include "Rewired_Data_Mapping_HardwareJoystickMap_Platform_Linux_Base.h"
namespace Rewired_Core::Rewired::Data::Mapping { struct HardwareJoystickMap_Platform_Linux_Base; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Rewired_Core::Rewired::Data::Mapping { struct HardwareJoystickMap_Platform_Linux_Base_MatchingCriteria_ElementCount; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };
namespace Rewired_Core::Rewired { struct BridgedControllerHWInfo; };
namespace Rewired_Core::Rewired::Data::Mapping { struct HardwareJoystickMap_MatchingCriteria_Base_ElementCount_Base; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Rewired_Core::Rewired::Data::Mapping { struct HardwareJoystickMap_MatchingCriteria_Base; };

namespace Rewired_Core::Rewired::Data::Mapping
{
	struct HardwareJoystickMap_Platform_Linux_Base_MatchingCriteria : Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_MatchingCriteria_Base
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t hatCount;
		IL2CPP::Array<Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_Linux_Base_MatchingCriteria_ElementCount*>* alternateElementCounts;
		bool manufacturer_useRegex;
		bool productName_useRegex;
		bool systemName_useRegex;
		IL2CPP::Array<mscorlib::System::String*>* manufacturer;
		IL2CPP::Array<mscorlib::System::String*>* productName;
		IL2CPP::Array<mscorlib::System::String*>* systemName;
		IL2CPP::Array<mscorlib::System::String*>* productGUID;
		bool get_hasData();
		bool get_isAllowed();
		bool Matches(Rewired_Core::Rewired::BridgedControllerHWInfo* bridgedControllerHWInfo, bool strictMatch);
		int32_t get_alternateElementCount();
		Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_MatchingCriteria_Base_ElementCount_Base* GetAlternateElementCount(int32_t index);
		bool ElementCountsMatch(Rewired_Core::Rewired::BridgedControllerHWInfo* bridgedControllerHWInfo, bool& alternateMatched);
		bool AnyNameMatches(Rewired_Core::Rewired::BridgedControllerHWInfo* bridgedControllerHWInfo);
		bool NameMatches(mscorlib::System::String* name, IL2CPP::Array<mscorlib::System::String*>* names, bool useRegex);
		mscorlib::System::Object* DeepClone();
		void CopyVars(Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_MatchingCriteria_Base* destination);
		void _ctor();
	};
}

