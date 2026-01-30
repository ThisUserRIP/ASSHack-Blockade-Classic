#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::com::playGenesis::VkUnityPlugin
{
	struct VKChat : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* _type_k__BackingField;
		int64_t _id_k__BackingField;
		mscorlib::System::String* _title_k__BackingField;
		int64_t _admin_id_k__BackingField;
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::Int64>* _users_k__BackingField;
		mscorlib::System::String* _photo_100_k__BackingField;
		mscorlib::System::String* _photo_200_k__BackingField;
		static Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKChat* Deserialize(mscorlib::System::Object* Chat);
		mscorlib::System::String* get_type();
		void set_type(mscorlib::System::String* value);
		int64_t get_id();
		void set_id(int64_t value);
		mscorlib::System::String* get_title();
		void set_title(mscorlib::System::String* value);
		int64_t get_admin_id();
		void set_admin_id(int64_t value);
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::Int64>* get_users();
		void set_users(mscorlib::System::Collections::Generic::List_1<mscorlib::System::Int64>* value);
		mscorlib::System::String* get_photo_100();
		void set_photo_100(mscorlib::System::String* value);
		mscorlib::System::String* get_photo_200();
		void set_photo_200(mscorlib::System::String* value);
		void _ctor();
	};
}

