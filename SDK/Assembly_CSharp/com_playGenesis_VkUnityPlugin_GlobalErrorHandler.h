#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace Assembly_CSharp { struct CaptchaDialog; };
namespace Assembly_CSharp::com::playGenesis::VkUnityPlugin { struct Eroor_17_Behaviour; };
namespace Assembly_CSharp::com::playGenesis::VkUnityPlugin { struct VKNotificationUI; };
namespace Assembly_CSharp::com::playGenesis::VkUnityPlugin { struct VKYesNoMessageBox; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::com::playGenesis::VkUnityPlugin { struct VKRequest; };

namespace Assembly_CSharp::com::playGenesis::VkUnityPlugin
{
	struct GlobalErrorHandler : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::CaptchaDialog* CaptchaDialog;
		Assembly_CSharp::com::playGenesis::VkUnityPlugin::Eroor_17_Behaviour* Error_17_worker;
		Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKNotificationUI* Notification;
		Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKYesNoMessageBox* YesNoMessageBox;
		struct StaticFields
		{
			Assembly_CSharp::com::playGenesis::VkUnityPlugin::GlobalErrorHandler* Instance;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void Awake();
		void Update();
		void Start();
		void OnGlobalError(Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKRequest* request);
		void handleNetworkError(Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKRequest* request);
		void handleCaptchaError(Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKRequest* request);
		void handleNeedToShowMessageToUser(Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKRequest* r);
		void handle_17_Error(Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKRequest* request);
		void _ctor();
	};
}

