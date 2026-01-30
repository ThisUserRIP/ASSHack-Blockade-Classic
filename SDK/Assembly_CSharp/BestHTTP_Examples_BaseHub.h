#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "BestHTTP_SignalR_Hubs_Hub.h"
namespace mscorlib::System { struct String; };
namespace Assembly_CSharp::BestHTTP::Examples { struct GUIMessageList; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::BestHTTP::SignalR::Hubs { struct Hub; };
namespace Assembly_CSharp::BestHTTP::SignalR::Messages { struct MethodCallMessage; };
#include "BestHTTP_SignalR_Messages_ClientMessage.h"
namespace Assembly_CSharp::BestHTTP::SignalR::Messages { struct ClientMessage; };
namespace Assembly_CSharp::BestHTTP::SignalR::Messages { struct ResultMessage; };
namespace Assembly_CSharp::BestHTTP::SignalR::Messages { struct FailureMessage; };

namespace Assembly_CSharp::BestHTTP::Examples
{
	struct BaseHub : Assembly_CSharp::BestHTTP::SignalR::Hubs::Hub
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* Title;
		Assembly_CSharp::BestHTTP::Examples::GUIMessageList* messages;
		void _ctor(mscorlib::System::String* name, mscorlib::System::String* title);
		void Joined(Assembly_CSharp::BestHTTP::SignalR::Hubs::Hub* hub, Assembly_CSharp::BestHTTP::SignalR::Messages::MethodCallMessage* methodCall);
		void Rejoined(Assembly_CSharp::BestHTTP::SignalR::Hubs::Hub* hub, Assembly_CSharp::BestHTTP::SignalR::Messages::MethodCallMessage* methodCall);
		void Left(Assembly_CSharp::BestHTTP::SignalR::Hubs::Hub* hub, Assembly_CSharp::BestHTTP::SignalR::Messages::MethodCallMessage* methodCall);
		void Invoked(Assembly_CSharp::BestHTTP::SignalR::Hubs::Hub* hub, Assembly_CSharp::BestHTTP::SignalR::Messages::MethodCallMessage* methodCall);
		void InvokedFromClient();
		void OnInvoked(Assembly_CSharp::BestHTTP::SignalR::Hubs::Hub* hub, Assembly_CSharp::BestHTTP::SignalR::Messages::ClientMessage originalMessage, Assembly_CSharp::BestHTTP::SignalR::Messages::ResultMessage* result);
		void OnInvokeFailed(Assembly_CSharp::BestHTTP::SignalR::Hubs::Hub* hub, Assembly_CSharp::BestHTTP::SignalR::Messages::ClientMessage originalMessage, Assembly_CSharp::BestHTTP::SignalR::Messages::FailureMessage* result);
		void Draw();
	};
}

