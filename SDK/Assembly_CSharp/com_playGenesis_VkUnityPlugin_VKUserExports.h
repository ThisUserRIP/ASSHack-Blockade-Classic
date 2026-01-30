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
	struct VKUserExports : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t _twitter_k__BackingField;
		int32_t _facebook_k__BackingField;
		int32_t _livejournal_k__BackingField;
		int32_t _instagram_k__BackingField;
		static Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKUserExports* Deserialize(mscorlib::System::Object* UserExports);
		int32_t get_twitter();
		void set_twitter(int32_t value);
		int32_t get_facebook();
		void set_facebook(int32_t value);
		int32_t get_livejournal();
		void set_livejournal(int32_t value);
		int32_t get_instagram();
		void set_instagram(int32_t value);
		void _ctor();
	};
}

