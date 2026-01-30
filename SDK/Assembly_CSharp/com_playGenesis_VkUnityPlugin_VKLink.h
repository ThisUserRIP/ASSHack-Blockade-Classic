#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::com::playGenesis::VkUnityPlugin
{
	struct VKLink : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* _url_k__BackingField;
		mscorlib::System::String* _title_k__BackingField;
		mscorlib::System::String* _description_k__BackingField;
		mscorlib::System::String* _image_src_k__BackingField;
		static Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKLink* Deserialize(mscorlib::System::Object* link);
		mscorlib::System::String* get_url();
		void set_url(mscorlib::System::String* value);
		mscorlib::System::String* get_title();
		void set_title(mscorlib::System::String* value);
		mscorlib::System::String* get_description();
		void set_description(mscorlib::System::String* value);
		mscorlib::System::String* get_image_src();
		void set_image_src(mscorlib::System::String* value);
		void _ctor();
	};
}

