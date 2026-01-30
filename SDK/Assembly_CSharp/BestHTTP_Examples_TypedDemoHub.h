#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "BestHTTP_SignalR_Hubs_Hub.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::BestHTTP::SignalR::Hubs { struct Hub; };
namespace Assembly_CSharp::BestHTTP::SignalR::Messages { struct MethodCallMessage; };
#include "BestHTTP_SignalR_Messages_ClientMessage.h"
namespace Assembly_CSharp::BestHTTP::SignalR::Messages { struct ClientMessage; };
namespace Assembly_CSharp::BestHTTP::SignalR::Messages { struct ResultMessage; };

namespace Assembly_CSharp::BestHTTP::Examples
{
	struct TypedDemoHub : Assembly_CSharp::BestHTTP::SignalR::Hubs::Hub
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* typedEchoResult;
		mscorlib::System::String* typedEchoClientResult;
		void _ctor();
		void Echo(Assembly_CSharp::BestHTTP::SignalR::Hubs::Hub* hub, Assembly_CSharp::BestHTTP::SignalR::Messages::MethodCallMessage* methodCall);
		void Echo(mscorlib::System::String* msg);
		void OnEcho_Done(Assembly_CSharp::BestHTTP::SignalR::Hubs::Hub* hub, Assembly_CSharp::BestHTTP::SignalR::Messages::ClientMessage originalMessage, Assembly_CSharp::BestHTTP::SignalR::Messages::ResultMessage* result);
		void Draw();
	};
}

