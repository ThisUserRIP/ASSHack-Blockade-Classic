#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Assembly_CSharp::com::playGenesis::VkUnityPlugin { struct VKPrivacy; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::com::playGenesis::VkUnityPlugin
{
	struct VKAlbum : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* _id_k__BackingField;
		mscorlib::System::String* _thumb_id_k__BackingField;
		mscorlib::System::String* _owner_id_k__BackingField;
		mscorlib::System::String* _title_k__BackingField;
		mscorlib::System::String* _description_k__BackingField;
		mscorlib::System::String* _created_k__BackingField;
		mscorlib::System::String* _updated_k__BackingField;
		int32_t _size_k__BackingField;
		mscorlib::System::String* _thumb_src_k__BackingField;
		Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKPrivacy* _privacy_view_k__BackingField;
		Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKPrivacy* _privacy_comment_k__BackingField;
		static Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKAlbum* Deserialize(mscorlib::System::Object* Album);
		mscorlib::System::String* get_id();
		void set_id(mscorlib::System::String* value);
		mscorlib::System::String* get_thumb_id();
		void set_thumb_id(mscorlib::System::String* value);
		mscorlib::System::String* get_owner_id();
		void set_owner_id(mscorlib::System::String* value);
		mscorlib::System::String* get_title();
		void set_title(mscorlib::System::String* value);
		mscorlib::System::String* get_description();
		void set_description(mscorlib::System::String* value);
		mscorlib::System::String* get_created();
		void set_created(mscorlib::System::String* value);
		mscorlib::System::String* get_updated();
		void set_updated(mscorlib::System::String* value);
		int32_t get_size();
		void set_size(int32_t value);
		mscorlib::System::String* get_thumb_src();
		void set_thumb_src(mscorlib::System::String* value);
		Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKPrivacy* get_privacy_view();
		void set_privacy_view(Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKPrivacy* value);
		Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKPrivacy* get_privacy_comment();
		void set_privacy_comment(Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKPrivacy* value);
		void _ctor();
	};
}

