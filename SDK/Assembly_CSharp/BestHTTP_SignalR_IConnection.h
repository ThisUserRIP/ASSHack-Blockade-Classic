#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "BestHTTP_SignalR_ProtocolVersions.h"
namespace Assembly_CSharp::BestHTTP::SignalR { struct NegotiationData; };
namespace Assembly_CSharp::BestHTTP::SignalR::JsonEncoders { struct IJsonEncoder; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::BestHTTP::SignalR::Messages { struct IServerMessage; };
namespace mscorlib::System { struct String; };
namespace System::System { struct Uri; };
#include "BestHTTP_SignalR_RequestTypes.h"
namespace Assembly_CSharp::BestHTTP::SignalR::Transports { struct TransportBase; };
namespace Assembly_CSharp::BestHTTP { struct HTTPRequest; };

namespace Assembly_CSharp::BestHTTP::SignalR
{
	struct IConnection
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::BestHTTP::SignalR::ProtocolVersions get_Protocol();
		Assembly_CSharp::BestHTTP::SignalR::NegotiationData* get_NegotiationResult();
		Assembly_CSharp::BestHTTP::SignalR::JsonEncoders::IJsonEncoder* get_JsonEncoder();
		void set_JsonEncoder(Assembly_CSharp::BestHTTP::SignalR::JsonEncoders::IJsonEncoder* value);
		void OnMessage(Assembly_CSharp::BestHTTP::SignalR::Messages::IServerMessage* msg);
		void TransportStarted();
		void TransportReconnected();
		void TransportAborted();
		void Error(mscorlib::System::String* reason);
		System::System::Uri* BuildUri(Assembly_CSharp::BestHTTP::SignalR::RequestTypes type);
		System::System::Uri* BuildUri(Assembly_CSharp::BestHTTP::SignalR::RequestTypes type, Assembly_CSharp::BestHTTP::SignalR::Transports::TransportBase* transport);
		Assembly_CSharp::BestHTTP::HTTPRequest* PrepareRequest(Assembly_CSharp::BestHTTP::HTTPRequest* req, Assembly_CSharp::BestHTTP::SignalR::RequestTypes type);
		mscorlib::System::String* ParseResponse(mscorlib::System::String* responseStr);
	};
}

