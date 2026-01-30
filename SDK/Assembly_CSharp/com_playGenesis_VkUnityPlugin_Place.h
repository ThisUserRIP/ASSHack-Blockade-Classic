#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Double.h"
namespace mscorlib::System { struct Double; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::com::playGenesis::VkUnityPlugin
{
	struct Place : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* _title_k__BackingField;
		mscorlib::System::String* _address_k__BackingField;
		double _latitude_k__BackingField;
		double _longitude_k__BackingField;
		mscorlib::System::String* _country_k__BackingField;
		mscorlib::System::String* _city_k__BackingField;
		mscorlib::System::String* _icon_k__BackingField;
		mscorlib::System::String* _type_k__BackingField;
		int64_t _group_id_k__BackingField;
		mscorlib::System::String* _group_photo_k__BackingField;
		int32_t _checkins_k__BackingField;
		int64_t _updated_k__BackingField;
		static Assembly_CSharp::com::playGenesis::VkUnityPlugin::Place* Deserialize(mscorlib::System::Object* place);
		mscorlib::System::String* get_title();
		void set_title(mscorlib::System::String* value);
		mscorlib::System::String* get_address();
		void set_address(mscorlib::System::String* value);
		double get_latitude();
		void set_latitude(double value);
		double get_longitude();
		void set_longitude(double value);
		mscorlib::System::String* get_country();
		void set_country(mscorlib::System::String* value);
		mscorlib::System::String* get_city();
		void set_city(mscorlib::System::String* value);
		mscorlib::System::String* get_icon();
		void set_icon(mscorlib::System::String* value);
		mscorlib::System::String* get_type();
		void set_type(mscorlib::System::String* value);
		int64_t get_group_id();
		void set_group_id(int64_t value);
		mscorlib::System::String* get_group_photo();
		void set_group_photo(mscorlib::System::String* value);
		int32_t get_checkins();
		void set_checkins(int32_t value);
		int64_t get_updated();
		void set_updated(int64_t value);
		void _ctor();
	};
}

