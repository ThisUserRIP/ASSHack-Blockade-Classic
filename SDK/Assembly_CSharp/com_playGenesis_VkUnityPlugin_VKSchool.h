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
	struct VKSchool : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int64_t _id_k__BackingField;
		int64_t _country_k__BackingField;
		int64_t _city_k__BackingField;
		mscorlib::System::String* _name_k__BackingField;
		int32_t _year_from_k__BackingField;
		int32_t _year_to_k__BackingField;
		int32_t _year_graduated_k__BackingField;
		mscorlib::System::String* _class_k__BackingField;
		mscorlib::System::String* _speciality_k__BackingField;
		int64_t _type_k__BackingField;
		mscorlib::System::String* _type_str_k__BackingField;
		static Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKSchool* Deserialize(mscorlib::System::Object* School);
		int64_t get_id();
		void set_id(int64_t value);
		int64_t get_country();
		void set_country(int64_t value);
		int64_t get_city();
		void set_city(int64_t value);
		mscorlib::System::String* get_name();
		void set_name(mscorlib::System::String* value);
		int32_t get_year_from();
		void set_year_from(int32_t value);
		int32_t get_year_to();
		void set_year_to(int32_t value);
		int32_t get_year_graduated();
		void set_year_graduated(int32_t value);
		mscorlib::System::String* get_class();
		void set_class(mscorlib::System::String* value);
		mscorlib::System::String* get_speciality();
		void set_speciality(mscorlib::System::String* value);
		int64_t get_type();
		void set_type(int64_t value);
		mscorlib::System::String* get_type_str();
		void set_type_str(mscorlib::System::String* value);
		void _ctor();
	};
}

