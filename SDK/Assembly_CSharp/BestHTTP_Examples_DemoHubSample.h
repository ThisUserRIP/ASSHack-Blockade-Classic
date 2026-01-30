#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace System::System { struct Uri; };
namespace Assembly_CSharp::BestHTTP::SignalR { struct Connection; };
namespace Assembly_CSharp::BestHTTP::Examples { struct DemoHub; };
namespace Assembly_CSharp::BestHTTP::Examples { struct TypedDemoHub; };
namespace Assembly_CSharp::BestHTTP::SignalR::Hubs { struct Hub; };
namespace mscorlib::System { struct String; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "BestHTTP_SignalR_Messages_ClientMessage.h"
namespace Assembly_CSharp::BestHTTP::SignalR::Messages { struct ClientMessage; };
namespace Assembly_CSharp::BestHTTP::SignalR::Messages { struct ResultMessage; };

namespace Assembly_CSharp::BestHTTP::Examples
{
	struct DemoHubSample : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::System::Uri* URI;
		Assembly_CSharp::BestHTTP::SignalR::Connection* signalRConnection;
		Assembly_CSharp::BestHTTP::Examples::DemoHub* demoHub;
		Assembly_CSharp::BestHTTP::Examples::TypedDemoHub* typedDemoHub;
		Assembly_CSharp::BestHTTP::SignalR::Hubs::Hub* vbDemoHub;
		mscorlib::System::String* vbReadStateResult;
		UnityEngine_CoreModule::UnityEngine::Vector2 scrollPos;
		void Start();
		void OnDestroy();
		void OnGUI();
		void _ctor();
		void _Start_b__7_0(Assembly_CSharp::BestHTTP::SignalR::Connection* connection);
		void _Start_b__7_1(Assembly_CSharp::BestHTTP::SignalR::Hubs::Hub* hub, Assembly_CSharp::BestHTTP::SignalR::Messages::ClientMessage msg, Assembly_CSharp::BestHTTP::SignalR::Messages::ResultMessage* result);
		void _OnGUI_b__9_0();
	};
}

