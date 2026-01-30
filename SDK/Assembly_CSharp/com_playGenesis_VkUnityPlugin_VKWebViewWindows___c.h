#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "com_playGenesis_VkUnityPlugin_VKWebViewWindows.h"
namespace Assembly_CSharp::com::playGenesis::VkUnityPlugin { struct VKWebViewWindows; };
namespace Assembly_CSharp::com::playGenesis::VkUnityPlugin { struct VKWebViewWindows_WvNativeCallback; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };

namespace Assembly_CSharp::com::playGenesis::VkUnityPlugin
{
	struct VKWebViewWindows___c : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKWebViewWindows___c* __9;
			Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKWebViewWindows_WvNativeCallback* __9__4_0;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		void _ctor();
		void _OpenWebView_b__4_0(mscorlib::System::String* data);
	};
}

