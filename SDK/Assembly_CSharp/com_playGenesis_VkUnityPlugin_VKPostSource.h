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
	struct VKPostSource : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* _platform_k__BackingField;
		mscorlib::System::String* _type_k__BackingField;
		mscorlib::System::String* _data_k__BackingField;
		static Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKPostSource* Deserialize(mscorlib::System::Object* in_data);
		mscorlib::System::String* get_platform();
		void set_platform(mscorlib::System::String* value);
		mscorlib::System::String* get_type();
		void set_type(mscorlib::System::String* value);
		mscorlib::System::String* get_data();
		void set_data(mscorlib::System::String* value);
		void _ctor();
	};
}

