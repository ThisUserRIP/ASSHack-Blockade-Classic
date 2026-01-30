#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
namespace Assembly_CSharp::com::playGenesis::VkUnityPlugin { struct Place; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::com::playGenesis::VkUnityPlugin
{
	struct VKGeo : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* _type_k__BackingField;
		mscorlib::System::String* _coordinates_k__BackingField;
		Assembly_CSharp::com::playGenesis::VkUnityPlugin::Place* _place_k__BackingField;
		static Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKGeo* Deserialize(mscorlib::System::Object* geo);
		mscorlib::System::String* get_type();
		void set_type(mscorlib::System::String* value);
		mscorlib::System::String* get_coordinates();
		void set_coordinates(mscorlib::System::String* value);
		Assembly_CSharp::com::playGenesis::VkUnityPlugin::Place* get_place();
		void set_place(Assembly_CSharp::com::playGenesis::VkUnityPlugin::Place* value);
		void _ctor();
	};
}

