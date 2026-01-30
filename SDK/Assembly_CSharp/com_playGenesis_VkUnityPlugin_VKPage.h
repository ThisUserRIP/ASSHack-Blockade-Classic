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
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::com::playGenesis::VkUnityPlugin
{
	struct VKPage : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int64_t _id_k__BackingField;
		int64_t _group_id_k__BackingField;
		int64_t _creator_id_k__BackingField;
		mscorlib::System::String* _title_k__BackingField;
		int32_t _current_user_can_edit_k__BackingField;
		int32_t _current_user_can_edit_access_k__BackingField;
		int32_t _who_can_view_k__BackingField;
		int32_t _who_can_edit_k__BackingField;
		int32_t _edited_k__BackingField;
		int32_t _created_k__BackingField;
		int64_t _editor_id_k__BackingField;
		int32_t _views_k__BackingField;
		mscorlib::System::String* _parent_k__BackingField;
		mscorlib::System::String* _parent2_k__BackingField;
		mscorlib::System::String* _source_k__BackingField;
		mscorlib::System::String* _html_k__BackingField;
		mscorlib::System::String* _view_url_k__BackingField;
		static Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKPage* Deserialize(mscorlib::System::Object* page);
		int64_t get_id();
		void set_id(int64_t value);
		int64_t get_group_id();
		void set_group_id(int64_t value);
		int64_t get_creator_id();
		void set_creator_id(int64_t value);
		mscorlib::System::String* get_title();
		void set_title(mscorlib::System::String* value);
		int32_t get_current_user_can_edit();
		void set_current_user_can_edit(int32_t value);
		int32_t get_current_user_can_edit_access();
		void set_current_user_can_edit_access(int32_t value);
		int32_t get_who_can_view();
		void set_who_can_view(int32_t value);
		int32_t get_who_can_edit();
		void set_who_can_edit(int32_t value);
		int32_t get_edited();
		void set_edited(int32_t value);
		int32_t get_created();
		void set_created(int32_t value);
		int64_t get_editor_id();
		void set_editor_id(int64_t value);
		int32_t get_views();
		void set_views(int32_t value);
		mscorlib::System::String* get_parent();
		void set_parent(mscorlib::System::String* value);
		mscorlib::System::String* get_parent2();
		void set_parent2(mscorlib::System::String* value);
		mscorlib::System::String* get_source();
		void set_source(mscorlib::System::String* value);
		mscorlib::System::String* get_html();
		void set_html(mscorlib::System::String* value);
		mscorlib::System::String* get_view_url();
		void set_view_url(mscorlib::System::String* value);
		void _ctor();
	};
}

