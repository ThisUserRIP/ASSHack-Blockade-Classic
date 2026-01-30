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
	struct VKUniversity : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int64_t _id_k__BackingField;
		int64_t _country_k__BackingField;
		int64_t _city_k__BackingField;
		mscorlib::System::String* _name_k__BackingField;
		int64_t _faculty_k__BackingField;
		mscorlib::System::String* _faculty_name_k__BackingField;
		int64_t _chair_k__BackingField;
		mscorlib::System::String* _chair_name_k__BackingField;
		int32_t _graduation_k__BackingField;
		static Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKUniversity* Deserialize(mscorlib::System::Object* University);
		int64_t get_id();
		void set_id(int64_t value);
		int64_t get_country();
		void set_country(int64_t value);
		int64_t get_city();
		void set_city(int64_t value);
		mscorlib::System::String* get_name();
		void set_name(mscorlib::System::String* value);
		int64_t get_faculty();
		void set_faculty(int64_t value);
		mscorlib::System::String* get_faculty_name();
		void set_faculty_name(mscorlib::System::String* value);
		int64_t get_chair();
		void set_chair(int64_t value);
		mscorlib::System::String* get_chair_name();
		void set_chair_name(mscorlib::System::String* value);
		int32_t get_graduation();
		void set_graduation(int32_t value);
		void _ctor();
	};
}

