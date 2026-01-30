#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::com::playGenesis::VkUnityPlugin
{
	struct VKUserRelative : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int64_t _id_k__BackingField;
		mscorlib::System::String* _name_k__BackingField;
		mscorlib::System::String* _type_k__BackingField;
		static Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKUserRelative* Deserialize(mscorlib::System::Object* UserRelative);
		int64_t get_id();
		void set_id(int64_t value);
		mscorlib::System::String* get_name();
		void set_name(mscorlib::System::String* value);
		mscorlib::System::String* get_type();
		void set_type(mscorlib::System::String* value);
		void _ctor();
	};
}

