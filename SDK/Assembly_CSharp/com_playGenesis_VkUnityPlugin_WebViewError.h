#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Assembly_CSharp::com::playGenesis::VkUnityPlugin { struct WebViewErrorType; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::com::playGenesis::VkUnityPlugin
{
	struct WebViewError : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::com::playGenesis::VkUnityPlugin::WebViewErrorType* ErrorType;
		mscorlib::System::String* _FailedUrl_k__BackingField;
		void _ctor(mscorlib::System::String* url, mscorlib::System::String* error);
		mscorlib::System::String* get_FailedUrl();
		void set_FailedUrl(mscorlib::System::String* value);
	};
}

