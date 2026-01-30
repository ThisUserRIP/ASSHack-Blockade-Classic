#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Assembly_CSharp::com::playGenesis::VkUnityPlugin { struct VKComments; };
namespace Assembly_CSharp::com::playGenesis::VkUnityPlugin { struct VKLikes; };
namespace Assembly_CSharp::com::playGenesis::VkUnityPlugin { struct VKReposts; };
namespace Assembly_CSharp::com::playGenesis::VkUnityPlugin { struct VKPostSource; };
namespace Assembly_CSharp::com::playGenesis::VkUnityPlugin { struct VKAttachment; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace Assembly_CSharp::com::playGenesis::VkUnityPlugin { struct VKGeo; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::com::playGenesis::VkUnityPlugin
{
	struct VKWallPost : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int64_t _id_k__BackingField;
		int64_t _owner_id_k__BackingField;
		int64_t _from_id_k__BackingField;
		int64_t _date_k__BackingField;
		mscorlib::System::String* _text_k__BackingField;
		int64_t _reply_owner_id_k__BackingField;
		int64_t _reply_post_id_k__BackingField;
		int32_t _friends_only_k__BackingField;
		Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKComments* _comments_k__BackingField;
		Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKLikes* _likes_k__BackingField;
		Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKReposts* _reposts_k__BackingField;
		mscorlib::System::String* _post_type_k__BackingField;
		Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKPostSource* _post_source_k__BackingField;
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKAttachment>* _attachments_k__BackingField;
		Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKGeo* _geo_k__BackingField;
		int64_t _signer_id_k__BackingField;
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKWallPost>* _copy_history_k__BackingField;
		int32_t _can_pin_k__BackingField;
		int32_t _is_pinned_k__BackingField;
		static Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKWallPost* Deserialize(mscorlib::System::Object* WallPost);
		int64_t get_id();
		void set_id(int64_t value);
		int64_t get_owner_id();
		void set_owner_id(int64_t value);
		int64_t get_from_id();
		void set_from_id(int64_t value);
		int64_t get_date();
		void set_date(int64_t value);
		mscorlib::System::String* get_text();
		void set_text(mscorlib::System::String* value);
		int64_t get_reply_owner_id();
		void set_reply_owner_id(int64_t value);
		int64_t get_reply_post_id();
		void set_reply_post_id(int64_t value);
		int32_t get_friends_only();
		void set_friends_only(int32_t value);
		Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKComments* get_comments();
		void set_comments(Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKComments* value);
		Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKLikes* get_likes();
		void set_likes(Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKLikes* value);
		Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKReposts* get_reposts();
		void set_reposts(Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKReposts* value);
		mscorlib::System::String* get_post_type();
		void set_post_type(mscorlib::System::String* value);
		Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKPostSource* get_post_source();
		void set_post_source(Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKPostSource* value);
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKAttachment>* get_attachments();
		void set_attachments(mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKAttachment>* value);
		Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKGeo* get_geo();
		void set_geo(Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKGeo* value);
		int64_t get_signer_id();
		void set_signer_id(int64_t value);
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKWallPost>* get_copy_history();
		void set_copy_history(mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKWallPost>* value);
		int32_t get_can_pin();
		void set_can_pin(int32_t value);
		int32_t get_is_pinned();
		void set_is_pinned(int32_t value);
		void _ctor();
	};
}

