#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
namespace mscorlib::System { struct String; };
namespace Assembly_CSharp::com::playGenesis::VkUnityPlugin { struct VKAttachment; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::com::playGenesis::VkUnityPlugin
{
	struct VKComment : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int64_t _id_k__BackingField;
		int64_t _from_id_k__BackingField;
		int64_t _date_k__BackingField;
		mscorlib::System::String* _text_k__BackingField;
		int64_t _reply_to_user_k__BackingField;
		int64_t _reply_to_comment_k__BackingField;
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKAttachment>* _attachments_k__BackingField;
		static Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKComment* Deserialize(mscorlib::System::Object* Comment);
		int64_t get_id();
		void set_id(int64_t value);
		int64_t get_from_id();
		void set_from_id(int64_t value);
		int64_t get_date();
		void set_date(int64_t value);
		mscorlib::System::String* get_text();
		void set_text(mscorlib::System::String* value);
		int64_t get_reply_to_user();
		void set_reply_to_user(int64_t value);
		int64_t get_reply_to_comment();
		void set_reply_to_comment(int64_t value);
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKAttachment>* get_attachments();
		void set_attachments(mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKAttachment>* value);
		void _ctor();
	};
}

