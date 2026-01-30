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
	struct VKPlace : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int64_t _id_k__BackingField;
		mscorlib::System::String* _title_k__BackingField;
		int32_t _latitude_k__BackingField;
		int32_t _longitude_k__BackingField;
		mscorlib::System::String* _type_k__BackingField;
		int64_t _country_k__BackingField;
		int64_t _city_k__BackingField;
		mscorlib::System::String* _address_k__BackingField;
		static Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKPlace* Deserialize(mscorlib::System::Object* place);
		int64_t get_id();
		void set_id(int64_t value);
		mscorlib::System::String* get_title();
		void set_title(mscorlib::System::String* value);
		int32_t get_latitude();
		void set_latitude(int32_t value);
		int32_t get_longitude();
		void set_longitude(int32_t value);
		mscorlib::System::String* get_type();
		void set_type(mscorlib::System::String* value);
		int64_t get_country();
		void set_country(int64_t value);
		int64_t get_city();
		void set_city(int64_t value);
		mscorlib::System::String* get_address();
		void set_address(mscorlib::System::String* value);
		void _ctor();
	};
}

