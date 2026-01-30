#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "BestHTTP_SignalR_Transports_PostSendTransportBase.h"
#include "..\mscorlib\System_DateTime.h"
namespace mscorlib::System { struct DateTime; };
#include "..\mscorlib\System_TimeSpan.h"
namespace mscorlib::System { struct TimeSpan; };
namespace Assembly_CSharp::BestHTTP { struct HTTPRequest; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "BestHTTP_SignalR_TransportTypes.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::BestHTTP::SignalR { struct Connection; };
namespace Assembly_CSharp::BestHTTP { struct HTTPResponse; };

namespace Assembly_CSharp::BestHTTP::SignalR::Transports
{
	struct PollingTransport : Assembly_CSharp::BestHTTP::SignalR::Transports::PostSendTransportBase
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::DateTime LastPoll;
		mscorlib::System::TimeSpan PollDelay;
		mscorlib::System::TimeSpan PollTimeout;
		Assembly_CSharp::BestHTTP::HTTPRequest* pollRequest;
		bool get_SupportsKeepAlive();
		Assembly_CSharp::BestHTTP::SignalR::TransportTypes get_Type();
		void _ctor(Assembly_CSharp::BestHTTP::SignalR::Connection* connection);
		void Connect();
		void Stop();
		void Started();
		void Aborted();
		void OnConnectRequestFinished(Assembly_CSharp::BestHTTP::HTTPRequest* req, Assembly_CSharp::BestHTTP::HTTPResponse* resp);
		void OnPollRequestFinished(Assembly_CSharp::BestHTTP::HTTPRequest* req, Assembly_CSharp::BestHTTP::HTTPResponse* resp);
		void Poll();
		void BestHTTP_Extensions_IHeartbeat_OnHeartbeatUpdate(mscorlib::System::TimeSpan dif);
	};
}

