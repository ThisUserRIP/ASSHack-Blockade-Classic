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
	struct VKNote : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int64_t _id_k__BackingField;
		int64_t _user_id_k__BackingField;
		mscorlib::System::String* _title_k__BackingField;
		mscorlib::System::String* _text_k__BackingField;
		int32_t _comments_k__BackingField;
		int32_t _read_comments_k__BackingField;
		mscorlib::System::String* _view_url_k__BackingField;
		static Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKNote* Deserialize(mscorlib::System::Object* note);
		int64_t get_id();
		void set_id(int64_t value);
		int64_t get_user_id();
		void set_user_id(int64_t value);
		int64_t get_owner_id();
		void set_owner_id(int64_t value);
		mscorlib::System::String* get_title();
		void set_title(mscorlib::System::String* value);
		mscorlib::System::String* get_text();
		void set_text(mscorlib::System::String* value);
		int32_t get_comments();
		void set_comments(int32_t value);
		int32_t get_read_comments();
		void set_read_comments(int32_t value);
		mscorlib::System::String* get_view_url();
		void set_view_url(mscorlib::System::String* value);
		void _ctor();
	};
}

