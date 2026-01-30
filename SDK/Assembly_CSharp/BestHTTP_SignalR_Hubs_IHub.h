#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace Assembly_CSharp::BestHTTP::SignalR { struct Connection; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "BestHTTP_SignalR_Messages_ClientMessage.h"
namespace Assembly_CSharp::BestHTTP::SignalR::Messages { struct ClientMessage; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
namespace Assembly_CSharp::BestHTTP::SignalR::Messages { struct MethodCallMessage; };
namespace Assembly_CSharp::BestHTTP::SignalR::Messages { struct IServerMessage; };

namespace Assembly_CSharp::BestHTTP::SignalR::Hubs
{
	struct IHub
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::BestHTTP::SignalR::Connection* get_Connection();
		void set_Connection(Assembly_CSharp::BestHTTP::SignalR::Connection* value);
		bool Call(Assembly_CSharp::BestHTTP::SignalR::Messages::ClientMessage msg);
		bool HasSentMessageId(uint64_t id);
		void Close();
		void OnMethod(Assembly_CSharp::BestHTTP::SignalR::Messages::MethodCallMessage* msg);
		void OnMessage(Assembly_CSharp::BestHTTP::SignalR::Messages::IServerMessage* msg);
	};
}

