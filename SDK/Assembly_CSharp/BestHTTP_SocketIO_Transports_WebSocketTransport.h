#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "BestHTTP_SocketIO_Transports_TransportStates.h"
namespace Assembly_CSharp::BestHTTP::SocketIO { struct SocketManager; };
namespace Assembly_CSharp::BestHTTP::WebSocket { struct WebSocket; };
namespace Assembly_CSharp::BestHTTP::SocketIO { struct Packet; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "BestHTTP_SocketIO_Transports_TransportTypes.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct Exception; };
#include "..\mscorlib\System_UInt16.h"
namespace mscorlib::System { struct UInt16; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };

namespace Assembly_CSharp::BestHTTP::SocketIO::Transports
{
	struct WebSocketTransport : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::BestHTTP::SocketIO::Transports::TransportStates _State_k__BackingField;
		Assembly_CSharp::BestHTTP::SocketIO::SocketManager* _Manager_k__BackingField;
		Assembly_CSharp::BestHTTP::WebSocket::WebSocket* _Implementation_k__BackingField;
		Assembly_CSharp::BestHTTP::SocketIO::Packet* PacketWithAttachment;
		IL2CPP::Array<uint8_t>* Buffer;
		Assembly_CSharp::BestHTTP::SocketIO::Transports::TransportTypes get_Type();
		Assembly_CSharp::BestHTTP::SocketIO::Transports::TransportStates get_State();
		void set_State(Assembly_CSharp::BestHTTP::SocketIO::Transports::TransportStates value);
		Assembly_CSharp::BestHTTP::SocketIO::SocketManager* get_Manager();
		void set_Manager(Assembly_CSharp::BestHTTP::SocketIO::SocketManager* value);
		bool get_IsRequestInProgress();
		bool get_IsPollingInProgress();
		Assembly_CSharp::BestHTTP::WebSocket::WebSocket* get_Implementation();
		void set_Implementation(Assembly_CSharp::BestHTTP::WebSocket::WebSocket* value);
		void _ctor(Assembly_CSharp::BestHTTP::SocketIO::SocketManager* manager);
		void Open();
		void Close();
		void Poll();
		void OnOpen(Assembly_CSharp::BestHTTP::WebSocket::WebSocket* ws);
		void OnMessage(Assembly_CSharp::BestHTTP::WebSocket::WebSocket* ws, mscorlib::System::String* message);
		void OnBinary(Assembly_CSharp::BestHTTP::WebSocket::WebSocket* ws, IL2CPP::Array<uint8_t>* data);
		void OnError(Assembly_CSharp::BestHTTP::WebSocket::WebSocket* ws, mscorlib::System::Exception* ex);
		void OnClosed(Assembly_CSharp::BestHTTP::WebSocket::WebSocket* ws, uint16_t code, mscorlib::System::String* message);
		void Send(Assembly_CSharp::BestHTTP::SocketIO::Packet* packet);
		void Send(mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::BestHTTP::SocketIO::Packet>* packets);
		void OnPacket(Assembly_CSharp::BestHTTP::SocketIO::Packet* packet);
	};
}

