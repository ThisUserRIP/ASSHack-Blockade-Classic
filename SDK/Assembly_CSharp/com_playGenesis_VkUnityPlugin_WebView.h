#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace Assembly_CSharp::com::playGenesis::VkUnityPlugin { struct WebViewRequest; };
#include "com_playGenesis_VkUnityPlugin_QueueWorker_1.h"
namespace Assembly_CSharp::com::playGenesis::VkUnityPlugin { struct IVKWebView; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { template <typename T> struct Action_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::com::playGenesis::VkUnityPlugin
{
	struct WebView : Assembly_CSharp::com::playGenesis::VkUnityPlugin::QueueWorker_1<Assembly_CSharp::com::playGenesis::VkUnityPlugin::WebViewRequest>
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::com::playGenesis::VkUnityPlugin::IVKWebView* webViewOpener;
		mscorlib::System::Action_1<mscorlib::System::String>* WebViewDoneEvent;
		struct StaticFields
		{
			Assembly_CSharp::com::playGenesis::VkUnityPlugin::WebView* Instance;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void add_WebViewDoneEvent(mscorlib::System::Action_1<mscorlib::System::String>* value);
		void remove_WebViewDoneEvent(mscorlib::System::Action_1<mscorlib::System::String>* value);
		void Awake();
		void OpenWebView(mscorlib::System::String* navigateToUrl, mscorlib::System::String* closeWhenNavigatedToUrl);
		void StartProcessing();
		mscorlib::System::String* parseErrorFormUrl(mscorlib::System::String* url);
		void OnWebViewDoneIntrnal(mscorlib::System::String* url);
		void WebViewDone(mscorlib::System::String* url);
		void OnDestroy();
		void _ctor();
	};
}

