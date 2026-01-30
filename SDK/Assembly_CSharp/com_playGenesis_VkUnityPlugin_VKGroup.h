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
namespace Assembly_CSharp::com::playGenesis::VkUnityPlugin { struct VKPlace; };
namespace Assembly_CSharp::com::playGenesis::VkUnityPlugin { struct VKCounters; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::com::playGenesis::VkUnityPlugin
{
	struct VKGroup : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int64_t _id_k__BackingField;
		mscorlib::System::String* _name_k__BackingField;
		mscorlib::System::String* _screen_name_k__BackingField;
		int32_t _is_closed_k__BackingField;
		mscorlib::System::String* _deactivated_k__BackingField;
		int32_t _is_admin_k__BackingField;
		int32_t _admin_level_k__BackingField;
		int32_t _is_member_k__BackingField;
		mscorlib::System::String* _type_k__BackingField;
		mscorlib::System::String* _photo_50_k__BackingField;
		mscorlib::System::String* _photo_100_k__BackingField;
		mscorlib::System::String* _photo_200_k__BackingField;
		int64_t _city_k__BackingField;
		int64_t _country_k__BackingField;
		Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKPlace* _place_k__BackingField;
		mscorlib::System::String* _description_k__BackingField;
		mscorlib::System::String* _wiki_page_k__BackingField;
		int32_t _members_count_k__BackingField;
		Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKCounters* _counters_k__BackingField;
		int64_t _start_date_k__BackingField;
		int64_t _finish_date_k__BackingField;
		int32_t _can_post_k__BackingField;
		int32_t _can_see_all_posts_k__BackingField;
		int32_t _can_upload_doc_k__BackingField;
		int32_t _can_create_topic_k__BackingField;
		mscorlib::System::String* _activity_k__BackingField;
		mscorlib::System::String* _status_k__BackingField;
		mscorlib::System::String* _contacts_k__BackingField;
		mscorlib::System::String* _links_k__BackingField;
		int64_t _fixed_post_k__BackingField;
		int32_t _verified_k__BackingField;
		mscorlib::System::String* _site_k__BackingField;
		static Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKGroup* Deserialise(mscorlib::System::Object* group);
		int64_t get_id();
		void set_id(int64_t value);
		mscorlib::System::String* get_name();
		void set_name(mscorlib::System::String* value);
		mscorlib::System::String* get_screen_name();
		void set_screen_name(mscorlib::System::String* value);
		int32_t get_is_closed();
		void set_is_closed(int32_t value);
		mscorlib::System::String* get_deactivated();
		void set_deactivated(mscorlib::System::String* value);
		int32_t get_is_admin();
		void set_is_admin(int32_t value);
		int32_t get_admin_level();
		void set_admin_level(int32_t value);
		int32_t get_is_member();
		void set_is_member(int32_t value);
		mscorlib::System::String* get_type();
		void set_type(mscorlib::System::String* value);
		mscorlib::System::String* get_photo_50();
		void set_photo_50(mscorlib::System::String* value);
		mscorlib::System::String* get_photo_100();
		void set_photo_100(mscorlib::System::String* value);
		mscorlib::System::String* get_photo_200();
		void set_photo_200(mscorlib::System::String* value);
		int64_t get_city();
		void set_city(int64_t value);
		int64_t get_country();
		void set_country(int64_t value);
		Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKPlace* get_place();
		void set_place(Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKPlace* value);
		mscorlib::System::String* get_description();
		void set_description(mscorlib::System::String* value);
		mscorlib::System::String* get_wiki_page();
		void set_wiki_page(mscorlib::System::String* value);
		int32_t get_members_count();
		void set_members_count(int32_t value);
		Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKCounters* get_counters();
		void set_counters(Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKCounters* value);
		int64_t get_start_date();
		void set_start_date(int64_t value);
		int64_t get_finish_date();
		void set_finish_date(int64_t value);
		int32_t get_can_post();
		void set_can_post(int32_t value);
		int32_t get_can_see_all_posts();
		void set_can_see_all_posts(int32_t value);
		int32_t get_can_upload_doc();
		void set_can_upload_doc(int32_t value);
		int32_t get_can_create_topic();
		void set_can_create_topic(int32_t value);
		mscorlib::System::String* get_activity();
		void set_activity(mscorlib::System::String* value);
		mscorlib::System::String* get_status();
		void set_status(mscorlib::System::String* value);
		mscorlib::System::String* get_contacts();
		void set_contacts(mscorlib::System::String* value);
		mscorlib::System::String* get_links();
		void set_links(mscorlib::System::String* value);
		int64_t get_fixed_post();
		void set_fixed_post(int64_t value);
		int32_t get_verified();
		void set_verified(int32_t value);
		mscorlib::System::String* get_site();
		void set_site(mscorlib::System::String* value);
		void _ctor();
	};
}

