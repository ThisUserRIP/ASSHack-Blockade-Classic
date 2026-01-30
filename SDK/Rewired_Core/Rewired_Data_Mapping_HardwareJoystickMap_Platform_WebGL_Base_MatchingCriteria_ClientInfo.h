#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_Data_Mapping_HardwareJoystickMap_Platform_WebGL_Base_MatchingCriteria.h"
namespace Rewired_Core::Rewired::Data::Mapping { struct HardwareJoystickMap_Platform_WebGL_Base_MatchingCriteria; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Rewired_Core::Rewired::Data::Mapping
{
	struct HardwareJoystickMap_Platform_WebGL_Base_MatchingCriteria_ClientInfo : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t browser;
		mscorlib::System::String* browserVersionMin;
		mscorlib::System::String* browserVersionMax;
		int32_t os;
		mscorlib::System::String* osVersionMin;
		mscorlib::System::String* osVersionMax;
		mscorlib::System::Object* DeepClone();
		void _ctor();
	};
}

