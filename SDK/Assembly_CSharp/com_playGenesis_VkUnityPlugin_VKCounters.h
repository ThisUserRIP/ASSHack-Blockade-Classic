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
	struct VKCounters : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t _albums_k__BackingField;
		int32_t _videos_k__BackingField;
		int32_t _audios_k__BackingField;
		int32_t _notes_k__BackingField;
		int32_t _groups_k__BackingField;
		int32_t _photos_k__BackingField;
		int32_t _friends_k__BackingField;
		int32_t _online_friends_k__BackingField;
		int32_t _mutual_friends_k__BackingField;
		int32_t _user_videos_k__BackingField;
		int32_t _user_photos_k__BackingField;
		int32_t _followers_k__BackingField;
		int32_t _subscriptions_k__BackingField;
		int32_t _topics_k__BackingField;
		int32_t _docs_k__BackingField;
		int32_t _pages_k__BackingField;
		static Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKCounters* Deserialize(mscorlib::System::Object* Countries);
		int32_t get_albums();
		void set_albums(int32_t value);
		int32_t get_videos();
		void set_videos(int32_t value);
		int32_t get_audios();
		void set_audios(int32_t value);
		int32_t get_notes();
		void set_notes(int32_t value);
		int32_t get_groups();
		void set_groups(int32_t value);
		int32_t get_photos();
		void set_photos(int32_t value);
		int32_t get_friends();
		void set_friends(int32_t value);
		int32_t get_online_friends();
		void set_online_friends(int32_t value);
		int32_t get_mutual_friends();
		void set_mutual_friends(int32_t value);
		int32_t get_user_videos();
		void set_user_videos(int32_t value);
		int32_t get_user_photos();
		void set_user_photos(int32_t value);
		int32_t get_followers();
		void set_followers(int32_t value);
		int32_t get_subscriptions();
		void set_subscriptions(int32_t value);
		int32_t get_topics();
		void set_topics(int32_t value);
		int32_t get_docs();
		void set_docs(int32_t value);
		int32_t get_pages();
		void set_pages(int32_t value);
		void _ctor();
	};
}

