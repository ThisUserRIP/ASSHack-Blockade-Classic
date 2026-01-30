#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::com::playGenesis::VkUnityPlugin
{
	struct VKUserOccupation : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* _type_k__BackingField;
		int64_t _id_k__BackingField;
		mscorlib::System::String* _name_k__BackingField;
		struct StaticFields
		{
			mscorlib::System::String* OCCUPATION_TYPE_WORK;
			mscorlib::System::String* OCCUPATION_TYPE_SCHOOL;
			mscorlib::System::String* OCCUPATION_TYPE_UNIVERSITY;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKUserOccupation* Deserialize(mscorlib::System::Object* UserOccupation);
		mscorlib::System::String* get_type();
		void set_type(mscorlib::System::String* value);
		int64_t get_id();
		void set_id(int64_t value);
		mscorlib::System::String* get_name();
		void set_name(mscorlib::System::String* value);
		void _ctor();
		static void _cctor();
	};
}

