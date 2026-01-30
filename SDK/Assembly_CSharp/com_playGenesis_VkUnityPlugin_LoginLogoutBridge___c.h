#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "com_playGenesis_VkUnityPlugin_LoginLogoutBridge.h"
namespace Assembly_CSharp::com::playGenesis::VkUnityPlugin { struct LoginLogoutBridge; };
namespace Assembly_CSharp::com::playGenesis::VkUnityPlugin { struct WebViewRequest; };
namespace mscorlib::System { template <typename T> struct Action_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::com::playGenesis::VkUnityPlugin
{
	struct LoginLogoutBridge___c : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			Assembly_CSharp::com::playGenesis::VkUnityPlugin::LoginLogoutBridge___c* __9;
			mscorlib::System::Action_1<Assembly_CSharp::com::playGenesis::VkUnityPlugin::WebViewRequest>* __9__3_0;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		void _ctor();
		void _WebViewAuth_b__3_0(Assembly_CSharp::com::playGenesis::VkUnityPlugin::WebViewRequest* w);
	};
}

