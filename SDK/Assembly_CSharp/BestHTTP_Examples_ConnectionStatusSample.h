#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace System::System { struct Uri; };
namespace Assembly_CSharp::BestHTTP::SignalR { struct Connection; };
namespace Assembly_CSharp::BestHTTP::Examples { struct GUIMessageList; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
#include "BestHTTP_SignalR_ConnectionStates.h"
namespace mscorlib::System { struct String; };
namespace Assembly_CSharp::BestHTTP::SignalR::Hubs { struct Hub; };

namespace Assembly_CSharp::BestHTTP::Examples
{
	struct ConnectionStatusSample : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::System::Uri* URI;
		Assembly_CSharp::BestHTTP::SignalR::Connection* signalRConnection;
		Assembly_CSharp::BestHTTP::Examples::GUIMessageList* messages;
		void Start();
		void OnDestroy();
		void OnGUI();
		void signalRConnection_OnNonHubMessage(Assembly_CSharp::BestHTTP::SignalR::Connection* manager, mscorlib::System::Object* data);
		void signalRConnection_OnStateChanged(Assembly_CSharp::BestHTTP::SignalR::Connection* manager, Assembly_CSharp::BestHTTP::SignalR::ConnectionStates oldState, Assembly_CSharp::BestHTTP::SignalR::ConnectionStates newState);
		void signalRConnection_OnError(Assembly_CSharp::BestHTTP::SignalR::Connection* manager, mscorlib::System::String* error);
		void statusHub_OnMethodCall(Assembly_CSharp::BestHTTP::SignalR::Hubs::Hub* hub, mscorlib::System::String* method, IL2CPP::Array<mscorlib::System::Object*>* args);
		void _ctor();
		void _OnGUI_b__5_0();
	};
}

