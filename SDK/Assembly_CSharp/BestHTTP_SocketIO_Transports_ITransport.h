#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "BestHTTP_SocketIO_Transports_TransportTypes.h"
#include "BestHTTP_SocketIO_Transports_TransportStates.h"
namespace Assembly_CSharp::BestHTTP::SocketIO { struct SocketManager; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::BestHTTP::SocketIO { struct Packet; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };

namespace Assembly_CSharp::BestHTTP::SocketIO::Transports
{
	struct ITransport
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::BestHTTP::SocketIO::Transports::TransportTypes get_Type();
		Assembly_CSharp::BestHTTP::SocketIO::Transports::TransportStates get_State();
		Assembly_CSharp::BestHTTP::SocketIO::SocketManager* get_Manager();
		bool get_IsRequestInProgress();
		bool get_IsPollingInProgress();
		void Open();
		void Poll();
		void Send(Assembly_CSharp::BestHTTP::SocketIO::Packet* packet);
		void Send(mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::BestHTTP::SocketIO::Packet>* packets);
		void Close();
	};
}

