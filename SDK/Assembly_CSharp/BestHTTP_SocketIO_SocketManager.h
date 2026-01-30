#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Assembly_CSharp::BestHTTP::SocketIO::JsonEncoders { struct IJsonEncoder; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "BestHTTP_SocketIO_SocketManager_States.h"
namespace Assembly_CSharp::BestHTTP::SocketIO { struct SocketOptions; };
namespace System::System { struct Uri; };
namespace Assembly_CSharp::BestHTTP::SocketIO { struct HandshakeData; };
namespace Assembly_CSharp::BestHTTP::SocketIO::Transports { struct ITransport; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
namespace mscorlib::System { struct String; };
namespace Assembly_CSharp::BestHTTP::SocketIO { struct Socket; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace Assembly_CSharp::BestHTTP::SocketIO { struct Packet; };
#include "..\mscorlib\System_DateTime.h"
namespace mscorlib::System { struct DateTime; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
namespace mscorlib::System { struct Object; };
#include "BestHTTP_SocketIO_SocketIOEventTypes.h"
#include "BestHTTP_SocketIO_SocketIOErrors.h"
#include "..\mscorlib\System_TimeSpan.h"
namespace mscorlib::System { struct TimeSpan; };

namespace Assembly_CSharp::BestHTTP::SocketIO
{
	struct SocketManager : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::BestHTTP::SocketIO::SocketManager_States state;
		Assembly_CSharp::BestHTTP::SocketIO::SocketOptions* _Options_k__BackingField;
		System::System::Uri* _Uri_k__BackingField;
		Assembly_CSharp::BestHTTP::SocketIO::HandshakeData* _Handshake_k__BackingField;
		Assembly_CSharp::BestHTTP::SocketIO::Transports::ITransport* _Transport_k__BackingField;
		uint64_t _RequestCounter_k__BackingField;
		int32_t _ReconnectAttempts_k__BackingField;
		Assembly_CSharp::BestHTTP::SocketIO::JsonEncoders::IJsonEncoder* _Encoder_k__BackingField;
		int32_t nextAckId;
		Assembly_CSharp::BestHTTP::SocketIO::SocketManager_States _PreviousState_k__BackingField;
		Assembly_CSharp::BestHTTP::SocketIO::Transports::ITransport* _UpgradingTransport_k__BackingField;
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, Assembly_CSharp::BestHTTP::SocketIO::Socket>* Namespaces;
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::BestHTTP::SocketIO::Socket>* Sockets;
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::BestHTTP::SocketIO::Packet>* OfflinePackets;
		mscorlib::System::DateTime LastHeartbeat;
		mscorlib::System::DateTime ReconnectAt;
		mscorlib::System::DateTime ConnectionStarted;
		bool closing;
		bool IsWaitingPong;
		struct StaticFields
		{
			Assembly_CSharp::BestHTTP::SocketIO::JsonEncoders::IJsonEncoder* DefaultEncoder;
			int32_t MinProtocolVersion;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		Assembly_CSharp::BestHTTP::SocketIO::SocketManager_States get_State();
		void set_State(Assembly_CSharp::BestHTTP::SocketIO::SocketManager_States value);
		Assembly_CSharp::BestHTTP::SocketIO::SocketOptions* get_Options();
		void set_Options(Assembly_CSharp::BestHTTP::SocketIO::SocketOptions* value);
		System::System::Uri* get_Uri();
		void set_Uri(System::System::Uri* value);
		Assembly_CSharp::BestHTTP::SocketIO::HandshakeData* get_Handshake();
		void set_Handshake(Assembly_CSharp::BestHTTP::SocketIO::HandshakeData* value);
		Assembly_CSharp::BestHTTP::SocketIO::Transports::ITransport* get_Transport();
		void set_Transport(Assembly_CSharp::BestHTTP::SocketIO::Transports::ITransport* value);
		uint64_t get_RequestCounter();
		void set_RequestCounter(uint64_t value);
		Assembly_CSharp::BestHTTP::SocketIO::Socket* get_Socket();
		Assembly_CSharp::BestHTTP::SocketIO::Socket* get_Item(mscorlib::System::String* nsp);
		int32_t get_ReconnectAttempts();
		void set_ReconnectAttempts(int32_t value);
		Assembly_CSharp::BestHTTP::SocketIO::JsonEncoders::IJsonEncoder* get_Encoder();
		void set_Encoder(Assembly_CSharp::BestHTTP::SocketIO::JsonEncoders::IJsonEncoder* value);
		uint32_t get_Timestamp();
		int32_t get_NextAckId();
		Assembly_CSharp::BestHTTP::SocketIO::SocketManager_States get_PreviousState();
		void set_PreviousState(Assembly_CSharp::BestHTTP::SocketIO::SocketManager_States value);
		Assembly_CSharp::BestHTTP::SocketIO::Transports::ITransport* get_UpgradingTransport();
		void set_UpgradingTransport(Assembly_CSharp::BestHTTP::SocketIO::Transports::ITransport* value);
		void _ctor(System::System::Uri* uri);
		void _ctor(System::System::Uri* uri, Assembly_CSharp::BestHTTP::SocketIO::SocketOptions* options);
		Assembly_CSharp::BestHTTP::SocketIO::Socket* GetSocket();
		Assembly_CSharp::BestHTTP::SocketIO::Socket* GetSocket(mscorlib::System::String* nsp);
		void BestHTTP_SocketIO_IManager_Remove(Assembly_CSharp::BestHTTP::SocketIO::Socket* socket);
		void Open();
		void Close();
		void BestHTTP_SocketIO_IManager_Close(bool removeSockets);
		void BestHTTP_SocketIO_IManager_TryToReconnect();
		bool BestHTTP_SocketIO_IManager_OnTransportConnected(Assembly_CSharp::BestHTTP::SocketIO::Transports::ITransport* trans);
		void BestHTTP_SocketIO_IManager_OnTransportError(Assembly_CSharp::BestHTTP::SocketIO::Transports::ITransport* trans, mscorlib::System::String* err);
		void BestHTTP_SocketIO_IManager_OnTransportProbed(Assembly_CSharp::BestHTTP::SocketIO::Transports::ITransport* trans);
		Assembly_CSharp::BestHTTP::SocketIO::Transports::ITransport* SelectTransport();
		void SendOfflinePackets();
		void BestHTTP_SocketIO_IManager_SendPacket(Assembly_CSharp::BestHTTP::SocketIO::Packet* packet);
		void BestHTTP_SocketIO_IManager_OnPacket(Assembly_CSharp::BestHTTP::SocketIO::Packet* packet);
		void EmitAll(mscorlib::System::String* eventName, IL2CPP::Array<mscorlib::System::Object*>* args);
		void BestHTTP_SocketIO_IManager_EmitEvent(mscorlib::System::String* eventName, IL2CPP::Array<mscorlib::System::Object*>* args);
		void BestHTTP_SocketIO_IManager_EmitEvent(Assembly_CSharp::BestHTTP::SocketIO::SocketIOEventTypes type, IL2CPP::Array<mscorlib::System::Object*>* args);
		void BestHTTP_SocketIO_IManager_EmitError(Assembly_CSharp::BestHTTP::SocketIO::SocketIOErrors errCode, mscorlib::System::String* msg);
		void BestHTTP_SocketIO_IManager_EmitAll(mscorlib::System::String* eventName, IL2CPP::Array<mscorlib::System::Object*>* args);
		void BestHTTP_Extensions_IHeartbeat_OnHeartbeatUpdate(mscorlib::System::TimeSpan dif);
		static void _cctor();
	};
}

