#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_Data_Mapping_HardwareJoystickMap_Platform_Custom_MatchingCriteria.h"
#include "Rewired_Data_Mapping_HardwareJoystickMap_Platform_WebGL_Base.h"
namespace Rewired_Core::Rewired::Data::Mapping { struct HardwareJoystickMap_Platform_WebGL_Base; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Rewired_Core::Rewired::Data::Mapping { struct HardwareJoystickMap_MatchingCriteria_Base_ElementCount_Base; };
namespace Rewired_Core::Rewired::Data::Mapping { struct HardwareJoystickMap_Platform_WebGL_Base_MatchingCriteria_ClientInfo; };
namespace Rewired_Core::Rewired { struct BridgedControllerHWInfo; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Rewired_Core::Rewired::Data::Mapping { struct HardwareJoystickMap_MatchingCriteria_Base; };

namespace Rewired_Core::Rewired::Data::Mapping
{
	struct HardwareJoystickMap_Platform_WebGL_Base_MatchingCriteria : Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_Custom_MatchingCriteria
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool productName_useRegex;
		IL2CPP::Array<mscorlib::System::String*>* productName;
		IL2CPP::Array<mscorlib::System::String*>* productGUID;
		IL2CPP::Array<int32_t>* mapping;
		IL2CPP::Array<Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_MatchingCriteria_Base_ElementCount_Base*>* elementCount;
		IL2CPP::Array<Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_WebGL_Base_MatchingCriteria_ClientInfo*>* clientInfo;
		bool get_hasData();
		bool get_isAllowed();
		bool Matches(Rewired_Core::Rewired::BridgedControllerHWInfo* bridgedControllerHWInfo, bool strictMatch);
		static bool CheckBrowserVersion(int32_t browser, mscorlib::System::String* versionMin, mscorlib::System::String* versionMax, IL2CPP::Array<mscorlib::System::String*>* currentVersion);
		static bool CheckOSVersion(mscorlib::System::String* versionMin, mscorlib::System::String* versionMax, IL2CPP::Array<mscorlib::System::String*>* currentVersion);
		mscorlib::System::Object* DeepClone();
		void CopyVars(Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_MatchingCriteria_Base* destination);
		void _ctor();
	};
}

