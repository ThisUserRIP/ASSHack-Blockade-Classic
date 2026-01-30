#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "BestHTTP_SocketIO_Transports_TransportStates.h"
namespace Assembly_CSharp::BestHTTP::SocketIO { struct SocketManager; };
namespace Assembly_CSharp::BestHTTP { struct HTTPRequest; };
namespace Assembly_CSharp::BestHTTP::SocketIO { struct Packet; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "BestHTTP_SocketIO_Transports_TransportTypes.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp::BestHTTP { struct HTTPResponse; };

namespace Assembly_CSharp::BestHTTP::SocketIO::Transports
{
	struct PollingTransport : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::BestHTTP::SocketIO::Transports::TransportStates _State_k__BackingField;
		Assembly_CSharp::BestHTTP::SocketIO::SocketManager* _Manager_k__BackingField;
		Assembly_CSharp::BestHTTP::HTTPRequest* LastRequest;
		Assembly_CSharp::BestHTTP::HTTPRequest* PollRequest;
		Assembly_CSharp::BestHTTP::SocketIO::Packet* PacketWithAttachment;
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::BestHTTP::SocketIO::Packet>* lonelyPacketList;
		Assembly_CSharp::BestHTTP::SocketIO::Transports::TransportTypes get_Type();
		Assembly_CSharp::BestHTTP::SocketIO::Transports::TransportStates get_State();
		void set_State(Assembly_CSharp::BestHTTP::SocketIO::Transports::TransportStates value);
		Assembly_CSharp::BestHTTP::SocketIO::SocketManager* get_Manager();
		void set_Manager(Assembly_CSharp::BestHTTP::SocketIO::SocketManager* value);
		bool get_IsRequestInProgress();
		bool get_IsPollingInProgress();
		void _ctor(Assembly_CSharp::BestHTTP::SocketIO::SocketManager* manager);
		void Open();
		void Close();
		void Send(Assembly_CSharp::BestHTTP::SocketIO::Packet* packet);
		void Send(mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::BestHTTP::SocketIO::Packet>* packets);
		void OnRequestFinished(Assembly_CSharp::BestHTTP::HTTPRequest* req, Assembly_CSharp::BestHTTP::HTTPResponse* resp);
		void Poll();
		void OnPollRequestFinished(Assembly_CSharp::BestHTTP::HTTPRequest* req, Assembly_CSharp::BestHTTP::HTTPResponse* resp);
		void OnPacket(Assembly_CSharp::BestHTTP::SocketIO::Packet* packet);
		void ParseResponse(Assembly_CSharp::BestHTTP::HTTPResponse* resp);
	};
}

