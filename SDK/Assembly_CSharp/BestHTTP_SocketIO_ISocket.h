#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp::BestHTTP::SocketIO { struct Packet; };
#include "BestHTTP_SocketIO_SocketIOEventTypes.h"
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { struct String; };
#include "BestHTTP_SocketIO_SocketIOErrors.h"

namespace Assembly_CSharp::BestHTTP::SocketIO
{
	struct ISocket
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void Open();
		void Disconnect(bool remove);
		void OnPacket(Assembly_CSharp::BestHTTP::SocketIO::Packet* packet);
		void EmitEvent(Assembly_CSharp::BestHTTP::SocketIO::SocketIOEventTypes type, IL2CPP::Array<mscorlib::System::Object*>* args);
		void EmitEvent(mscorlib::System::String* eventName, IL2CPP::Array<mscorlib::System::Object*>* args);
		void EmitError(Assembly_CSharp::BestHTTP::SocketIO::SocketIOErrors errCode, mscorlib::System::String* msg);
	};
}

