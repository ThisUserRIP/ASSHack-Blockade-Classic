#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::com::playGenesis::VkUnityPlugin
{
	struct VKUserStatus : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int64_t _time_k__BackingField;
		int32_t _platform_k__BackingField;
		static Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKUserStatus* Deserialize(mscorlib::System::Object* UserStatus);
		int64_t get_time();
		void set_time(int64_t value);
		int32_t get_platform();
		void set_platform(int32_t value);
		void _ctor();
	};
}

