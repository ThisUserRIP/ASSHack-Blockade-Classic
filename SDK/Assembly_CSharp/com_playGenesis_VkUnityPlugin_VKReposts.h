#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::com::playGenesis::VkUnityPlugin
{
	struct VKReposts : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t _count_k__BackingField;
		int32_t _user_reposted_k__BackingField;
		static Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKReposts* Deserialize(mscorlib::System::Object* reposts);
		int32_t get_count();
		void set_count(int32_t value);
		int32_t get_user_reposted();
		void set_user_reposted(int32_t value);
		void _ctor();
	};
}

