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
	struct VKVideo : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int64_t _id_k__BackingField;
		int64_t _owner_id_k__BackingField;
		mscorlib::System::String* _title_k__BackingField;
		int32_t _duration_k__BackingField;
		mscorlib::System::String* _description_k__BackingField;
		int32_t _date_k__BackingField;
		int32_t _views_k__BackingField;
		mscorlib::System::String* _photo_130_k__BackingField;
		mscorlib::System::String* _photo_320_k__BackingField;
		mscorlib::System::String* _photo_640_k__BackingField;
		mscorlib::System::String* _player_k__BackingField;
		static Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKVideo* Deserialize(mscorlib::System::Object* video);
		int64_t get_id();
		void set_id(int64_t value);
		int64_t get_owner_id();
		void set_owner_id(int64_t value);
		mscorlib::System::String* get_title();
		void set_title(mscorlib::System::String* value);
		int32_t get_duration();
		void set_duration(int32_t value);
		mscorlib::System::String* get_description();
		void set_description(mscorlib::System::String* value);
		int32_t get_date();
		void set_date(int32_t value);
		int32_t get_views();
		void set_views(int32_t value);
		mscorlib::System::String* get_photo_130();
		void set_photo_130(mscorlib::System::String* value);
		mscorlib::System::String* get_photo_320();
		void set_photo_320(mscorlib::System::String* value);
		mscorlib::System::String* get_photo_640();
		void set_photo_640(mscorlib::System::String* value);
		mscorlib::System::String* get_player();
		void set_player(mscorlib::System::String* value);
		void _ctor();
	};
}

