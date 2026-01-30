#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Assembly_CSharp::BestHTTP::SocketIO { struct SocketManager; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Assembly_CSharp::BestHTTP::SocketIO::Events { struct SocketIOAckCallback; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
namespace Assembly_CSharp::BestHTTP::SocketIO::Events { struct EventTable; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::BestHTTP::SocketIO { struct Packet; };
namespace Assembly_CSharp::BestHTTP::SocketIO::Events { struct SocketIOCallback; };
#include "BestHTTP_SocketIO_SocketIOEventTypes.h"
#include "BestHTTP_SocketIO_SocketIOErrors.h"

namespace Assembly_CSharp::BestHTTP::SocketIO
{
	struct Socket : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::BestHTTP::SocketIO::SocketManager* _Manager_k__BackingField;
		mscorlib::System::String* _Namespace_k__BackingField;
		mscorlib::System::String* _Id_k__BackingField;
		bool _IsOpen_k__BackingField;
		bool _AutoDecodePayload_k__BackingField;
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::Int32, Assembly_CSharp::BestHTTP::SocketIO::Events::SocketIOAckCallback>* AckCallbacks;
		Assembly_CSharp::BestHTTP::SocketIO::Events::EventTable* EventCallbacks;
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::Object>* arguments;
		Assembly_CSharp::BestHTTP::SocketIO::SocketManager* get_Manager();
		void set_Manager(Assembly_CSharp::BestHTTP::SocketIO::SocketManager* value);
		mscorlib::System::String* get_Namespace();
		void set_Namespace(mscorlib::System::String* value);
		mscorlib::System::String* get_Id();
		void set_Id(mscorlib::System::String* value);
		bool get_IsOpen();
		void set_IsOpen(bool value);
		bool get_AutoDecodePayload();
		void set_AutoDecodePayload(bool value);
		void _ctor(mscorlib::System::String* nsp, Assembly_CSharp::BestHTTP::SocketIO::SocketManager* manager);
		void BestHTTP_SocketIO_ISocket_Open();
		void Disconnect();
		void BestHTTP_SocketIO_ISocket_Disconnect(bool remove);
		Assembly_CSharp::BestHTTP::SocketIO::Socket* Emit(mscorlib::System::String* eventName, IL2CPP::Array<mscorlib::System::Object*>* args);
		Assembly_CSharp::BestHTTP::SocketIO::Socket* Emit(mscorlib::System::String* eventName, Assembly_CSharp::BestHTTP::SocketIO::Events::SocketIOAckCallback* callback, IL2CPP::Array<mscorlib::System::Object*>* args);
		Assembly_CSharp::BestHTTP::SocketIO::Socket* EmitAck(Assembly_CSharp::BestHTTP::SocketIO::Packet* originalPacket, IL2CPP::Array<mscorlib::System::Object*>* args);
		void On(mscorlib::System::String* eventName, Assembly_CSharp::BestHTTP::SocketIO::Events::SocketIOCallback* callback);
		void On(Assembly_CSharp::BestHTTP::SocketIO::SocketIOEventTypes type, Assembly_CSharp::BestHTTP::SocketIO::Events::SocketIOCallback* callback);
		void On(mscorlib::System::String* eventName, Assembly_CSharp::BestHTTP::SocketIO::Events::SocketIOCallback* callback, bool autoDecodePayload);
		void On(Assembly_CSharp::BestHTTP::SocketIO::SocketIOEventTypes type, Assembly_CSharp::BestHTTP::SocketIO::Events::SocketIOCallback* callback, bool autoDecodePayload);
		void Once(mscorlib::System::String* eventName, Assembly_CSharp::BestHTTP::SocketIO::Events::SocketIOCallback* callback);
		void Once(Assembly_CSharp::BestHTTP::SocketIO::SocketIOEventTypes type, Assembly_CSharp::BestHTTP::SocketIO::Events::SocketIOCallback* callback);
		void Once(mscorlib::System::String* eventName, Assembly_CSharp::BestHTTP::SocketIO::Events::SocketIOCallback* callback, bool autoDecodePayload);
		void Once(Assembly_CSharp::BestHTTP::SocketIO::SocketIOEventTypes type, Assembly_CSharp::BestHTTP::SocketIO::Events::SocketIOCallback* callback, bool autoDecodePayload);
		void Off();
		void Off(mscorlib::System::String* eventName);
		void Off(Assembly_CSharp::BestHTTP::SocketIO::SocketIOEventTypes type);
		void Off(mscorlib::System::String* eventName, Assembly_CSharp::BestHTTP::SocketIO::Events::SocketIOCallback* callback);
		void Off(Assembly_CSharp::BestHTTP::SocketIO::SocketIOEventTypes type, Assembly_CSharp::BestHTTP::SocketIO::Events::SocketIOCallback* callback);
		void BestHTTP_SocketIO_ISocket_OnPacket(Assembly_CSharp::BestHTTP::SocketIO::Packet* packet);
		void BestHTTP_SocketIO_ISocket_EmitEvent(Assembly_CSharp::BestHTTP::SocketIO::SocketIOEventTypes type, IL2CPP::Array<mscorlib::System::Object*>* args);
		void BestHTTP_SocketIO_ISocket_EmitEvent(mscorlib::System::String* eventName, IL2CPP::Array<mscorlib::System::Object*>* args);
		void BestHTTP_SocketIO_ISocket_EmitError(Assembly_CSharp::BestHTTP::SocketIO::SocketIOErrors errCode, mscorlib::System::String* msg);
		void OnTransportOpen(Assembly_CSharp::BestHTTP::SocketIO::Socket* socket, Assembly_CSharp::BestHTTP::SocketIO::Packet* packet, IL2CPP::Array<mscorlib::System::Object*>* args);
	};
}

