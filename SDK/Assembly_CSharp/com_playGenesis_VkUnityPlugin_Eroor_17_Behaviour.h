#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace Assembly_CSharp::com::playGenesis::VkUnityPlugin { struct VKRequest; };
#include "com_playGenesis_VkUnityPlugin_QueueWorker_1.h"
namespace Assembly_CSharp::com::playGenesis::VkUnityPlugin { struct VkApi; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::com::playGenesis::VkUnityPlugin { struct WebViewRequest; };

namespace Assembly_CSharp::com::playGenesis::VkUnityPlugin
{
	struct Eroor_17_Behaviour : Assembly_CSharp::com::playGenesis::VkUnityPlugin::QueueWorker_1<Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKRequest>
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::com::playGenesis::VkUnityPlugin::VkApi* _vkapi;
		void Start();
		void StartProcessing();
		void OnRequestFinished(Assembly_CSharp::com::playGenesis::VkUnityPlugin::WebViewRequest* e);
		void _ctor();
	};
}

