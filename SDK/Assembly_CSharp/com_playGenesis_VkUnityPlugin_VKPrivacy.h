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
	struct VKPrivacy : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* _type_k__BackingField;
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::Int64>* _users_k__BackingField;
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::Int64>* _lists_k__BackingField;
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::Int64>* _except_lists_k__BackingField;
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::Int64>* _except_users_k__BackingField;
		static Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKPrivacy* Deserialize(mscorlib::System::Object* Privacy);
		mscorlib::System::String* get_type();
		void set_type(mscorlib::System::String* value);
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::Int64>* get_users();
		void set_users(mscorlib::System::Collections::Generic::List_1<mscorlib::System::Int64>* value);
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::Int64>* get_lists();
		void set_lists(mscorlib::System::Collections::Generic::List_1<mscorlib::System::Int64>* value);
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::Int64>* get_except_lists();
		void set_except_lists(mscorlib::System::Collections::Generic::List_1<mscorlib::System::Int64>* value);
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::Int64>* get_except_users();
		void set_except_users(mscorlib::System::Collections::Generic::List_1<mscorlib::System::Int64>* value);
		void _ctor();
	};
}

