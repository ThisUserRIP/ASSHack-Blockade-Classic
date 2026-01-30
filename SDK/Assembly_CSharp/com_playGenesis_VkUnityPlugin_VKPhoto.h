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
	struct VKPhoto : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int64_t _id_k__BackingField;
		int64_t _album_id_k__BackingField;
		int64_t _owner_id_k__BackingField;
		int64_t _user_id_k__BackingField;
		mscorlib::System::String* _photo_75_k__BackingField;
		mscorlib::System::String* _photo_130_k__BackingField;
		mscorlib::System::String* _photo_604_k__BackingField;
		mscorlib::System::String* _photo_807_k__BackingField;
		mscorlib::System::String* _photo_1280_k__BackingField;
		mscorlib::System::String* _photo_2560_k__BackingField;
		int32_t _width_k__BackingField;
		int32_t _height_k__BackingField;
		mscorlib::System::String* _text_k__BackingField;
		int32_t _date_k__BackingField;
		static Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKPhoto* Deserialize(mscorlib::System::Object* photo);
		int64_t get_id();
		void set_id(int64_t value);
		int64_t get_album_id();
		void set_album_id(int64_t value);
		int64_t get_owner_id();
		void set_owner_id(int64_t value);
		int64_t get_user_id();
		void set_user_id(int64_t value);
		mscorlib::System::String* get_photo_75();
		void set_photo_75(mscorlib::System::String* value);
		mscorlib::System::String* get_photo_130();
		void set_photo_130(mscorlib::System::String* value);
		mscorlib::System::String* get_photo_604();
		void set_photo_604(mscorlib::System::String* value);
		mscorlib::System::String* get_photo_807();
		void set_photo_807(mscorlib::System::String* value);
		mscorlib::System::String* get_photo_1280();
		void set_photo_1280(mscorlib::System::String* value);
		mscorlib::System::String* get_photo_2560();
		void set_photo_2560(mscorlib::System::String* value);
		int32_t get_width();
		void set_width(int32_t value);
		int32_t get_height();
		void set_height(int32_t value);
		mscorlib::System::String* get_text();
		void set_text(mscorlib::System::String* value);
		int32_t get_date();
		void set_date(int32_t value);
		void _ctor();
	};
}

