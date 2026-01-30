#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };
namespace Assembly_CSharp::com::playGenesis::VkUnityPlugin { struct VKToken; };
namespace Assembly_CSharp { struct VkSettings; };
namespace Assembly_CSharp::com::playGenesis::VkUnityPlugin { struct Downloader; };
namespace Assembly_CSharp::com::playGenesis::VkUnityPlugin { struct LoginLogoutBridge; };
namespace Assembly_CSharp::com::playGenesis::VkUnityPlugin { struct Error; };
namespace mscorlib::System { template <typename TEventArgs> struct EventHandler_1; };
namespace mscorlib::System { struct Action; };
namespace Assembly_CSharp::com::playGenesis::VkUnityPlugin { struct VKRequest; };
namespace mscorlib::System { template <typename T> struct Action_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Collections { struct IEnumerator; };
namespace UnityEngine_UnityWebRequestModule::UnityEngine::Networking { struct UnityWebRequest; };
namespace Assembly_CSharp::com::playGenesis::VkUnityPlugin { struct FileForUpload; };

namespace Assembly_CSharp::com::playGenesis::VkUnityPlugin
{
	struct VkApi : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool IsUserLoggedIn;
		mscorlib::System::String* VkRequestUrlBase;
		Assembly_CSharp::com::playGenesis::VkUnityPlugin::LoginLogoutBridge* nativeBridge;
		bool loginProccessSterted;
		mscorlib::System::EventHandler_1<Assembly_CSharp::com::playGenesis::VkUnityPlugin::Error>* AccessDenied;
		mscorlib::System::EventHandler_1<Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKToken>* ReceivedNewToken;
		mscorlib::System::Action* LoggedIn;
		mscorlib::System::Action* LoggedOut;
		mscorlib::System::Action_1<Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKRequest>* GlobalErrorHandler;
		struct StaticFields
		{
			Assembly_CSharp::com::playGenesis::VkUnityPlugin::VkApi* VkApiInstance;
			Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKToken* CurrentToken;
			Assembly_CSharp::VkSettings* VkSetts;
			Assembly_CSharp::com::playGenesis::VkUnityPlugin::Downloader* Downloader;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void add_AccessDenied(mscorlib::System::EventHandler_1<Assembly_CSharp::com::playGenesis::VkUnityPlugin::Error>* value);
		void remove_AccessDenied(mscorlib::System::EventHandler_1<Assembly_CSharp::com::playGenesis::VkUnityPlugin::Error>* value);
		void add_ReceivedNewToken(mscorlib::System::EventHandler_1<Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKToken>* value);
		void remove_ReceivedNewToken(mscorlib::System::EventHandler_1<Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKToken>* value);
		void add_LoggedIn(mscorlib::System::Action* value);
		void remove_LoggedIn(mscorlib::System::Action* value);
		void add_LoggedOut(mscorlib::System::Action* value);
		void remove_LoggedOut(mscorlib::System::Action* value);
		void add_GlobalErrorHandler(mscorlib::System::Action_1<Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKRequest>* value);
		void remove_GlobalErrorHandler(mscorlib::System::Action_1<Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKRequest>* value);
		void KillAllReqeusts();
		void Login();
		mscorlib::System::Collections::IEnumerator* LockLogin1Sec();
		void ResetLock();
		void Logout();
		void onReceiveNewToken(Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKToken* e);
		void onLoggedIn();
		mscorlib::System::Collections::IEnumerator* WaitAndGoOn();
		void onLoggedOut();
		void onAccessDenied(Assembly_CSharp::com::playGenesis::VkUnityPlugin::Error* e);
		void CheckEditorSetup();
		void SubscribeToGlobalErrorEvent(mscorlib::System::Action_1<Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKRequest>* handler);
		void UnsubscribeFromGlobalErrorEvent(mscorlib::System::Action_1<Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKRequest>* handler);
		void InitToken();
		void Awake();
		UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest* GenerateWWWFormRequest(Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKRequest* httprequest);
		UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest* GenerateWWWFormRequest(Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKRequest* httprequest, Assembly_CSharp::com::playGenesis::VkUnityPlugin::FileForUpload* file);
		void HandleTokenExpired(Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKRequest* httprequest);
		void HandleWWWError(UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest* www, Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKRequest* httprequest);
		void HandleVKError(UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest* www, Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKRequest* httprequest);
		void HandleNoError(UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest* www, Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKRequest* httprequest);
		void HandleResponse(UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest* www, Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKRequest* httpRequest);
		void Call(Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKRequest* httprequest);
		mscorlib::System::Collections::IEnumerator* _Call(Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKRequest* httprequest);
		void UploadToserverCall(Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKRequest* httprequest);
		void UploadToserverCall(Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKRequest* requestString, Assembly_CSharp::com::playGenesis::VkUnityPlugin::FileForUpload* file);
		mscorlib::System::Collections::IEnumerator* _UploadToserverCall(Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKRequest* httprequest);
		mscorlib::System::Collections::IEnumerator* _UploadToserverCall(Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKRequest* httprequest, Assembly_CSharp::com::playGenesis::VkUnityPlugin::FileForUpload* file);
		void OnDestroy();
		void _ctor();
	};
}

