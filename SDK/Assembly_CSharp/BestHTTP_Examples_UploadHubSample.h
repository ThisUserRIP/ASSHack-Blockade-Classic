#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace System::System { struct Uri; };
namespace Assembly_CSharp::BestHTTP::SignalRCore { struct HubConnection; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Collections { struct IEnumerator; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "BestHTTP_SignalRCore_Messages_Message.h"
namespace Assembly_CSharp::BestHTTP::SignalRCore::Messages { struct Message; };
namespace Assembly_CSharp::BestHTTP::Futures { template <typename T> struct IFuture_1; };
namespace Assembly_CSharp::BestHTTP::SignalRCore { template <typename T> struct StreamItemContainer_1; };
namespace Assembly_CSharp::BestHTTP::Examples { struct Person; };

namespace Assembly_CSharp::BestHTTP::Examples
{
	struct UploadHubSample : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::System::Uri* URI;
		Assembly_CSharp::BestHTTP::SignalRCore::HubConnection* hub;
		UnityEngine_CoreModule::UnityEngine::Vector2 scrollPos;
		mscorlib::System::String* uiText;
		struct StaticFields
		{
			float YieldWaitTime;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void Start();
		void OnDestroy();
		void OnGUI();
		void Hub_Redirected(Assembly_CSharp::BestHTTP::SignalRCore::HubConnection* hub, System::System::Uri* oldUri, System::System::Uri* newUri);
		void Hub_OnConnected(Assembly_CSharp::BestHTTP::SignalRCore::HubConnection* hub);
		mscorlib::System::Collections::IEnumerator* UploadWord();
		mscorlib::System::Collections::IEnumerator* ScoreTracker();
		mscorlib::System::Collections::IEnumerator* ScoreTrackerWithParameterChannels();
		mscorlib::System::Collections::IEnumerator* StreamEcho();
		mscorlib::System::Collections::IEnumerator* PersonEcho();
		bool Hub_OnMessage(Assembly_CSharp::BestHTTP::SignalRCore::HubConnection* hub, Assembly_CSharp::BestHTTP::SignalRCore::Messages::Message message);
		void Hub_OnClosed(Assembly_CSharp::BestHTTP::SignalRCore::HubConnection* hub);
		void Hub_OnError(Assembly_CSharp::BestHTTP::SignalRCore::HubConnection* hub, mscorlib::System::String* error);
		void _ctor();
		void _OnGUI_b__7_0();
		void _UploadWord_b__10_0(Assembly_CSharp::BestHTTP::Futures::IFuture_1<mscorlib::System::String>* result);
		void _ScoreTracker_b__11_0(Assembly_CSharp::BestHTTP::Futures::IFuture_1<mscorlib::System::String>* result);
		void _ScoreTrackerWithParameterChannels_b__12_0(Assembly_CSharp::BestHTTP::Futures::IFuture_1<mscorlib::System::String>* result);
		void _StreamEcho_b__13_0(Assembly_CSharp::BestHTTP::Futures::IFuture_1<Assembly_CSharp::BestHTTP::SignalRCore::StreamItemContainer_1<mscorlib::System::String>>* result);
		void _StreamEcho_b__13_1(Assembly_CSharp::BestHTTP::SignalRCore::StreamItemContainer_1<mscorlib::System::String>* item);
		void _PersonEcho_b__14_0(Assembly_CSharp::BestHTTP::Futures::IFuture_1<Assembly_CSharp::BestHTTP::SignalRCore::StreamItemContainer_1<Assembly_CSharp::BestHTTP::Examples::Person>>* result);
		void _PersonEcho_b__14_1(Assembly_CSharp::BestHTTP::SignalRCore::StreamItemContainer_1<Assembly_CSharp::BestHTTP::Examples::Person>* item);
	};
}

