#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
namespace Assembly_CSharp::com::playGenesis::VkUnityPlugin { struct Error; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { template <typename T> struct Action_1; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::com::playGenesis::VkUnityPlugin
{
	struct VKRequest : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* _url;
		mscorlib::System::String* fullurl;
		mscorlib::System::String* response;
		Assembly_CSharp::com::playGenesis::VkUnityPlugin::Error* error;
		int32_t attempt;
		mscorlib::System::Action_1<Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKRequest>* CallBackFunction;
		IL2CPP::Array<mscorlib::System::Object*>* data;
		bool needsToBeeConfirmed;
		mscorlib::System::String* get_url();
		void set_url(mscorlib::System::String* value);
		void _ctor();
	};
}

