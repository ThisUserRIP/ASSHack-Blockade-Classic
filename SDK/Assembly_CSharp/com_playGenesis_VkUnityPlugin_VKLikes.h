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
	struct VKLikes : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t _count_k__BackingField;
		int32_t _user_likes_k__BackingField;
		int32_t _can_like_k__BackingField;
		int32_t _can_publish_k__BackingField;
		static Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKLikes* Deserialize(mscorlib::System::Object* likes);
		int32_t get_count();
		void set_count(int32_t value);
		int32_t get_user_likes();
		void set_user_likes(int32_t value);
		int32_t get_can_like();
		void set_can_like(int32_t value);
		int32_t get_can_publish();
		void set_can_publish(int32_t value);
		void _ctor();
	};
}

