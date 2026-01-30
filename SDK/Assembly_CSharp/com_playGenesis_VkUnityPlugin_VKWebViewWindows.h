#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Assembly_CSharp::com::playGenesis::VkUnityPlugin { struct VKWebViewWindows_WvNativeCallback; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::com::playGenesis::VkUnityPlugin
{
	struct VKWebViewWindows : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKWebViewWindows_WvNativeCallback* onWebViewDoneStandAlone;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static int32_t OpenWebViewNative(mscorlib::System::String* exepath, Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKWebViewWindows_WvNativeCallback* _callback, mscorlib::System::String* openurl, mscorlib::System::String* closeurl);
		static int32_t QuitWebViewNative();
		void OpenWebView(mscorlib::System::String* openurl, mscorlib::System::String* closeurl);
		void _ctor();
	};
}

