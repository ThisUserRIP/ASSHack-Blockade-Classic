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
	struct VKDocument : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int64_t _id_k__BackingField;
		int64_t _owner_id_k__BackingField;
		mscorlib::System::String* _title_k__BackingField;
		int64_t _size_k__BackingField;
		mscorlib::System::String* _ext_k__BackingField;
		mscorlib::System::String* _url_k__BackingField;
		mscorlib::System::String* _photo_100_k__BackingField;
		mscorlib::System::String* _photo_130_k__BackingField;
		static Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKDocument* Deserialize(mscorlib::System::Object* doc);
		int64_t get_id();
		void set_id(int64_t value);
		int64_t get_owner_id();
		void set_owner_id(int64_t value);
		mscorlib::System::String* get_title();
		void set_title(mscorlib::System::String* value);
		int64_t get_size();
		void set_size(int64_t value);
		mscorlib::System::String* get_ext();
		void set_ext(mscorlib::System::String* value);
		mscorlib::System::String* get_url();
		void set_url(mscorlib::System::String* value);
		mscorlib::System::String* get_photo_100();
		void set_photo_100(mscorlib::System::String* value);
		mscorlib::System::String* get_photo_130();
		void set_photo_130(mscorlib::System::String* value);
		void _ctor();
	};
}

