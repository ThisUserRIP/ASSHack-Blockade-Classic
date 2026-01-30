#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "BestHTTP_SignalRCore_TransportStates.h"
namespace mscorlib::System { struct String; };
namespace mscorlib::System { template <typename T1, typename T2> struct Action_2; };
namespace Assembly_CSharp::BestHTTP::WebSocket { struct WebSocket; };
namespace Assembly_CSharp::BestHTTP::SignalRCore { struct HubConnection; };
#include "BestHTTP_SignalRCore_Messages_Message.h"
namespace Assembly_CSharp::BestHTTP::SignalRCore::Messages { struct Message; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "BestHTTP_SignalRCore_TransportTypes.h"
#include "BestHTTP_SignalRCore_TransferModes.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_UInt16.h"
namespace mscorlib::System { struct UInt16; };
namespace System::System { struct Uri; };

namespace Assembly_CSharp::BestHTTP::SignalRCore::Transports
{
	struct WebSocketTransport : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::BestHTTP::SignalRCore::TransportStates _state;
		mscorlib::System::String* _ErrorReason_k__BackingField;
		mscorlib::System::Action_2<Assembly_CSharp::BestHTTP::SignalRCore::TransportStates, Assembly_CSharp::BestHTTP::SignalRCore::TransportStates>* OnStateChanged;
		Assembly_CSharp::BestHTTP::WebSocket::WebSocket* webSocket;
		Assembly_CSharp::BestHTTP::SignalRCore::HubConnection* connection;
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::BestHTTP::SignalRCore::Messages::Message>* messages;
		Assembly_CSharp::BestHTTP::SignalRCore::TransportTypes get_TransportType();
		Assembly_CSharp::BestHTTP::SignalRCore::TransferModes get_TransferMode();
		Assembly_CSharp::BestHTTP::SignalRCore::TransportStates get_State();
		void set_State(Assembly_CSharp::BestHTTP::SignalRCore::TransportStates value);
		mscorlib::System::String* get_ErrorReason();
		void set_ErrorReason(mscorlib::System::String* value);
		void add_OnStateChanged(mscorlib::System::Action_2<Assembly_CSharp::BestHTTP::SignalRCore::TransportStates, Assembly_CSharp::BestHTTP::SignalRCore::TransportStates>* value);
		void remove_OnStateChanged(mscorlib::System::Action_2<Assembly_CSharp::BestHTTP::SignalRCore::TransportStates, Assembly_CSharp::BestHTTP::SignalRCore::TransportStates>* value);
		void _ctor(Assembly_CSharp::BestHTTP::SignalRCore::HubConnection* con);
		void BestHTTP_SignalRCore_ITransport_StartConnect();
		void BestHTTP_SignalRCore_ITransport_Send(IL2CPP::Array<uint8_t>* msg);
		void OnOpen(Assembly_CSharp::BestHTTP::WebSocket::WebSocket* webSocket);
		mscorlib::System::String* ParseHandshakeResponse(mscorlib::System::String* data);
		void HandleHandshakeResponse(mscorlib::System::String* data);
		void OnMessage(Assembly_CSharp::BestHTTP::WebSocket::WebSocket* webSocket, mscorlib::System::String* data);
		void OnBinary(Assembly_CSharp::BestHTTP::WebSocket::WebSocket* webSocket, IL2CPP::Array<uint8_t>* data);
		void OnError(Assembly_CSharp::BestHTTP::WebSocket::WebSocket* webSocket, mscorlib::System::String* reason);
		void OnClosed(Assembly_CSharp::BestHTTP::WebSocket::WebSocket* webSocket, uint16_t code, mscorlib::System::String* message);
		void BestHTTP_SignalRCore_ITransport_StartClose();
		System::System::Uri* BuildUri(System::System::Uri* baseUri);
	};
}

