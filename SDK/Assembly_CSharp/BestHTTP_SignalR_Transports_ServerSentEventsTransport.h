#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "BestHTTP_SignalR_Transports_PostSendTransportBase.h"
namespace Assembly_CSharp::BestHTTP::ServerSentEvents { struct EventSource; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "BestHTTP_SignalR_TransportTypes.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::BestHTTP::SignalR { struct Connection; };
namespace Assembly_CSharp::BestHTTP::ServerSentEvents { struct Message; };
namespace mscorlib::System { struct String; };

namespace Assembly_CSharp::BestHTTP::SignalR::Transports
{
	struct ServerSentEventsTransport : Assembly_CSharp::BestHTTP::SignalR::Transports::PostSendTransportBase
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::BestHTTP::ServerSentEvents::EventSource* EventSource;
		bool get_SupportsKeepAlive();
		Assembly_CSharp::BestHTTP::SignalR::TransportTypes get_Type();
		void _ctor(Assembly_CSharp::BestHTTP::SignalR::Connection* con);
		void Connect();
		void Stop();
		void Started();
		void Abort();
		void Aborted();
		void OnEventSourceOpen(Assembly_CSharp::BestHTTP::ServerSentEvents::EventSource* eventSource);
		void OnEventSourceMessage(Assembly_CSharp::BestHTTP::ServerSentEvents::EventSource* eventSource, Assembly_CSharp::BestHTTP::ServerSentEvents::Message* message);
		void OnEventSourceError(Assembly_CSharp::BestHTTP::ServerSentEvents::EventSource* eventSource, mscorlib::System::String* error);
		void OnEventSourceClosed(Assembly_CSharp::BestHTTP::ServerSentEvents::EventSource* eventSource);
	};
}

