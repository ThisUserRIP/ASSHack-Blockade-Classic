#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "BestHTTP_SignalR_Transports_TransportBase.h"
namespace Assembly_CSharp::BestHTTP::WebSocket { struct WebSocket; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "BestHTTP_SignalR_TransportTypes.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::BestHTTP::SignalR { struct Connection; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_UInt16.h"
namespace mscorlib::System { struct UInt16; };

namespace Assembly_CSharp::BestHTTP::SignalR::Transports
{
	struct WebSocketTransport : Assembly_CSharp::BestHTTP::SignalR::Transports::TransportBase
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::BestHTTP::WebSocket::WebSocket* wSocket;
		bool get_SupportsKeepAlive();
		Assembly_CSharp::BestHTTP::SignalR::TransportTypes get_Type();
		void _ctor(Assembly_CSharp::BestHTTP::SignalR::Connection* connection);
		void Connect();
		void SendImpl(mscorlib::System::String* json);
		void Stop();
		void Started();
		void Aborted();
		void WSocket_OnOpen(Assembly_CSharp::BestHTTP::WebSocket::WebSocket* webSocket);
		void WSocket_OnMessage(Assembly_CSharp::BestHTTP::WebSocket::WebSocket* webSocket, mscorlib::System::String* message);
		void WSocket_OnClosed(Assembly_CSharp::BestHTTP::WebSocket::WebSocket* webSocket, uint16_t code, mscorlib::System::String* message);
		void WSocket_OnError(Assembly_CSharp::BestHTTP::WebSocket::WebSocket* webSocket, mscorlib::System::String* reason);
	};
}

