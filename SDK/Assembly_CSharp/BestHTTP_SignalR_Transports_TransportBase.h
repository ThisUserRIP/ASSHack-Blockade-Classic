#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
namespace Assembly_CSharp::BestHTTP::SignalR { struct IConnection; };
#include "BestHTTP_SignalR_TransportStates.h"
namespace Assembly_CSharp::BestHTTP::SignalR::Transports { struct OnTransportStateChangedDelegate; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "BestHTTP_SignalR_TransportTypes.h"
namespace Assembly_CSharp::BestHTTP::SignalR { struct Connection; };
namespace Assembly_CSharp::BestHTTP { struct HTTPRequest; };
namespace Assembly_CSharp::BestHTTP { struct HTTPResponse; };
namespace Assembly_CSharp::BestHTTP::SignalR::Messages { struct IServerMessage; };
namespace Assembly_CSharp::BestHTTP::SignalR::JsonEncoders { struct IJsonEncoder; };

namespace Assembly_CSharp::BestHTTP::SignalR::Transports
{
	struct TransportBase : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* _Name_k__BackingField;
		Assembly_CSharp::BestHTTP::SignalR::IConnection* _Connection_k__BackingField;
		Assembly_CSharp::BestHTTP::SignalR::TransportStates _state;
		Assembly_CSharp::BestHTTP::SignalR::Transports::OnTransportStateChangedDelegate* OnStateChanged;
		struct StaticFields
		{
			int32_t MaxRetryCount;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		mscorlib::System::String* get_Name();
		void set_Name(mscorlib::System::String* value);
		bool get_SupportsKeepAlive();
		Assembly_CSharp::BestHTTP::SignalR::TransportTypes get_Type();
		Assembly_CSharp::BestHTTP::SignalR::IConnection* get_Connection();
		void set_Connection(Assembly_CSharp::BestHTTP::SignalR::IConnection* value);
		Assembly_CSharp::BestHTTP::SignalR::TransportStates get_State();
		void set_State(Assembly_CSharp::BestHTTP::SignalR::TransportStates value);
		void add_OnStateChanged(Assembly_CSharp::BestHTTP::SignalR::Transports::OnTransportStateChangedDelegate* value);
		void remove_OnStateChanged(Assembly_CSharp::BestHTTP::SignalR::Transports::OnTransportStateChangedDelegate* value);
		void _ctor(mscorlib::System::String* name, Assembly_CSharp::BestHTTP::SignalR::Connection* connection);
		void Connect();
		void Stop();
		void SendImpl(mscorlib::System::String* json);
		void Started();
		void Aborted();
		void OnConnected();
		void Start();
		void OnStartRequestFinished(Assembly_CSharp::BestHTTP::HTTPRequest* req, Assembly_CSharp::BestHTTP::HTTPResponse* resp);
		void Abort();
		void AbortFinished();
		void OnAbortRequestFinished(Assembly_CSharp::BestHTTP::HTTPRequest* req, Assembly_CSharp::BestHTTP::HTTPResponse* resp);
		void Send(mscorlib::System::String* jsonStr);
		void Reconnect();
		static Assembly_CSharp::BestHTTP::SignalR::Messages::IServerMessage* Parse(Assembly_CSharp::BestHTTP::SignalR::JsonEncoders::IJsonEncoder* encoder, mscorlib::System::String* json);
	};
}

