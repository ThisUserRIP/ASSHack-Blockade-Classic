#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::BestHTTP::SocketIO { struct Socket; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp::BestHTTP::SocketIO::Transports { struct ITransport; };
namespace mscorlib::System { struct String; };
namespace Assembly_CSharp::BestHTTP::SocketIO { struct Packet; };
namespace mscorlib::System { struct Object; };
#include "BestHTTP_SocketIO_SocketIOEventTypes.h"
#include "BestHTTP_SocketIO_SocketIOErrors.h"

namespace Assembly_CSharp::BestHTTP::SocketIO
{
	struct IManager
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void Remove(Assembly_CSharp::BestHTTP::SocketIO::Socket* socket);
		void Close(bool removeSockets);
		void TryToReconnect();
		bool OnTransportConnected(Assembly_CSharp::BestHTTP::SocketIO::Transports::ITransport* transport);
		void OnTransportError(Assembly_CSharp::BestHTTP::SocketIO::Transports::ITransport* trans, mscorlib::System::String* err);
		void OnTransportProbed(Assembly_CSharp::BestHTTP::SocketIO::Transports::ITransport* trans);
		void SendPacket(Assembly_CSharp::BestHTTP::SocketIO::Packet* packet);
		void OnPacket(Assembly_CSharp::BestHTTP::SocketIO::Packet* packet);
		void EmitEvent(mscorlib::System::String* eventName, IL2CPP::Array<mscorlib::System::Object*>* args);
		void EmitEvent(Assembly_CSharp::BestHTTP::SocketIO::SocketIOEventTypes type, IL2CPP::Array<mscorlib::System::Object*>* args);
		void EmitError(Assembly_CSharp::BestHTTP::SocketIO::SocketIOErrors errCode, mscorlib::System::String* msg);
		void EmitAll(mscorlib::System::String* eventName, IL2CPP::Array<mscorlib::System::Object*>* args);
	};
}

