#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace UnityEngine_AndroidJNIModule::UnityEngine { struct AndroidJavaObject; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };

namespace Assembly_CSharp::com::playGenesis::VkUnityPlugin
{
	struct VKWebViewAndroid : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_AndroidJNIModule::UnityEngine::AndroidJavaObject* jo;
		void OpenWebView(mscorlib::System::String* openurl, mscorlib::System::String* closeurl);
		void _ctor();
	};
}

