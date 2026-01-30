#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
namespace Assembly_CSharp::com::playGenesis::VkUnityPlugin { struct VKAttachment; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace Assembly_CSharp::com::playGenesis::VkUnityPlugin { struct VKGeo; };
namespace Assembly_CSharp::com::playGenesis::VkUnityPlugin { struct VKPushSettings; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::com::playGenesis::VkUnityPlugin
{
	struct VKMessage : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int64_t _id_k__BackingField;
		int64_t _user_id_k__BackingField;
		int64_t _date_k__BackingField;
		int32_t _read_state_k__BackingField;
		int32_t _out_k__BackingField;
		mscorlib::System::String* _title_k__BackingField;
		mscorlib::System::String* _body_k__BackingField;
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKAttachment>* _attachments_k__BackingField;
		Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKGeo* _geo_k__BackingField;
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKMessage>* _fwd_messages_k__BackingField;
		int32_t _emoji_k__BackingField;
		int32_t _important_k__BackingField;
		int32_t _deleted_k__BackingField;
		int64_t _chat_id_k__BackingField;
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::Int64>* _chat_active_k__BackingField;
		int32_t _users_count_k__BackingField;
		int64_t _admin_id_k__BackingField;
		Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKPushSettings* _push_settings_k__BackingField;
		mscorlib::System::String* _action;
		int64_t _action_mid_k__BackingField;
		mscorlib::System::String* _action_email_k__BackingField;
		mscorlib::System::String* _action_text_k__BackingField;
		mscorlib::System::String* _photo_50_k__BackingField;
		mscorlib::System::String* _photo_100_k__BackingField;
		mscorlib::System::String* _photo_200_k__BackingField;
		static Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKMessage* Deserialize(mscorlib::System::Object* message);
		int64_t get_id();
		void set_id(int64_t value);
		int64_t get_user_id();
		void set_user_id(int64_t value);
		int64_t get_date();
		void set_date(int64_t value);
		int32_t get_read_state();
		void set_read_state(int32_t value);
		int32_t get_out();
		void set_out(int32_t value);
		mscorlib::System::String* get_title();
		void set_title(mscorlib::System::String* value);
		mscorlib::System::String* get_body();
		void set_body(mscorlib::System::String* value);
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKAttachment>* get_attachments();
		void set_attachments(mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKAttachment>* value);
		Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKGeo* get_geo();
		void set_geo(Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKGeo* value);
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKMessage>* get_fwd_messages();
		void set_fwd_messages(mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKMessage>* value);
		int32_t get_emoji();
		void set_emoji(int32_t value);
		int32_t get_important();
		void set_important(int32_t value);
		int32_t get_deleted();
		void set_deleted(int32_t value);
		int64_t get_chat_id();
		void set_chat_id(int64_t value);
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::Int64>* get_chat_active();
		void set_chat_active(mscorlib::System::Collections::Generic::List_1<mscorlib::System::Int64>* value);
		int32_t get_users_count();
		void set_users_count(int32_t value);
		int64_t get_admin_id();
		void set_admin_id(int64_t value);
		Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKPushSettings* get_push_settings();
		void set_push_settings(Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKPushSettings* value);
		mscorlib::System::String* get_action();
		void set_action(mscorlib::System::String* value);
		int64_t get_action_mid();
		void set_action_mid(int64_t value);
		mscorlib::System::String* get_action_email();
		void set_action_email(mscorlib::System::String* value);
		mscorlib::System::String* get_action_text();
		void set_action_text(mscorlib::System::String* value);
		mscorlib::System::String* get_photo_50();
		void set_photo_50(mscorlib::System::String* value);
		mscorlib::System::String* get_photo_100();
		void set_photo_100(mscorlib::System::String* value);
		mscorlib::System::String* get_photo_200();
		void set_photo_200(mscorlib::System::String* value);
		void _ctor();
	};
}

