#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace System::System { struct Uri; };
#include "BestHTTP_ServerSentEvents_States.h"
#include "..\mscorlib\System_TimeSpan.h"
namespace mscorlib::System { struct TimeSpan; };
namespace mscorlib::System { struct String; };
namespace Assembly_CSharp::BestHTTP { struct HTTPRequest; };
namespace Assembly_CSharp::BestHTTP::ServerSentEvents { struct OnGeneralEventDelegate; };
namespace Assembly_CSharp::BestHTTP::ServerSentEvents { struct OnMessageDelegate; };
namespace Assembly_CSharp::BestHTTP::ServerSentEvents { struct OnErrorDelegate; };
namespace Assembly_CSharp::BestHTTP::ServerSentEvents { struct OnRetryDelegate; };
namespace Assembly_CSharp::BestHTTP::ServerSentEvents { struct OnStateChangedDelegate; };
namespace Assembly_CSharp::BestHTTP::ServerSentEvents { struct OnEventDelegate; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_DateTime.h"
namespace mscorlib::System { struct DateTime; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp::BestHTTP { struct HTTPResponse; };
namespace Assembly_CSharp::BestHTTP::ServerSentEvents { struct EventSourceResponse; };
namespace Assembly_CSharp::BestHTTP::ServerSentEvents { struct Message; };

namespace Assembly_CSharp::BestHTTP::ServerSentEvents
{
	struct EventSource : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::System::Uri* _Uri_k__BackingField;
		Assembly_CSharp::BestHTTP::ServerSentEvents::States _state;
		mscorlib::System::TimeSpan _ReconnectionTime_k__BackingField;
		mscorlib::System::String* _LastEventId_k__BackingField;
		Assembly_CSharp::BestHTTP::HTTPRequest* _InternalRequest_k__BackingField;
		Assembly_CSharp::BestHTTP::ServerSentEvents::OnGeneralEventDelegate* OnOpen;
		Assembly_CSharp::BestHTTP::ServerSentEvents::OnMessageDelegate* OnMessage;
		Assembly_CSharp::BestHTTP::ServerSentEvents::OnErrorDelegate* OnError;
		Assembly_CSharp::BestHTTP::ServerSentEvents::OnRetryDelegate* OnRetry;
		Assembly_CSharp::BestHTTP::ServerSentEvents::OnGeneralEventDelegate* OnClosed;
		Assembly_CSharp::BestHTTP::ServerSentEvents::OnStateChangedDelegate* OnStateChanged;
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, Assembly_CSharp::BestHTTP::ServerSentEvents::OnEventDelegate>* EventTable;
		uint8_t RetryCount;
		mscorlib::System::DateTime RetryCalled;
		System::System::Uri* get_Uri();
		void set_Uri(System::System::Uri* value);
		Assembly_CSharp::BestHTTP::ServerSentEvents::States get_State();
		void set_State(Assembly_CSharp::BestHTTP::ServerSentEvents::States value);
		mscorlib::System::TimeSpan get_ReconnectionTime();
		void set_ReconnectionTime(mscorlib::System::TimeSpan value);
		mscorlib::System::String* get_LastEventId();
		void set_LastEventId(mscorlib::System::String* value);
		Assembly_CSharp::BestHTTP::HTTPRequest* get_InternalRequest();
		void set_InternalRequest(Assembly_CSharp::BestHTTP::HTTPRequest* value);
		void add_OnOpen(Assembly_CSharp::BestHTTP::ServerSentEvents::OnGeneralEventDelegate* value);
		void remove_OnOpen(Assembly_CSharp::BestHTTP::ServerSentEvents::OnGeneralEventDelegate* value);
		void add_OnMessage(Assembly_CSharp::BestHTTP::ServerSentEvents::OnMessageDelegate* value);
		void remove_OnMessage(Assembly_CSharp::BestHTTP::ServerSentEvents::OnMessageDelegate* value);
		void add_OnError(Assembly_CSharp::BestHTTP::ServerSentEvents::OnErrorDelegate* value);
		void remove_OnError(Assembly_CSharp::BestHTTP::ServerSentEvents::OnErrorDelegate* value);
		void add_OnRetry(Assembly_CSharp::BestHTTP::ServerSentEvents::OnRetryDelegate* value);
		void remove_OnRetry(Assembly_CSharp::BestHTTP::ServerSentEvents::OnRetryDelegate* value);
		void add_OnClosed(Assembly_CSharp::BestHTTP::ServerSentEvents::OnGeneralEventDelegate* value);
		void remove_OnClosed(Assembly_CSharp::BestHTTP::ServerSentEvents::OnGeneralEventDelegate* value);
		void add_OnStateChanged(Assembly_CSharp::BestHTTP::ServerSentEvents::OnStateChangedDelegate* value);
		void remove_OnStateChanged(Assembly_CSharp::BestHTTP::ServerSentEvents::OnStateChangedDelegate* value);
		void _ctor(System::System::Uri* uri);
		void Open();
		void Close();
		void On(mscorlib::System::String* eventName, Assembly_CSharp::BestHTTP::ServerSentEvents::OnEventDelegate* action);
		void Off(mscorlib::System::String* eventName);
		void CallOnError(mscorlib::System::String* error, mscorlib::System::String* msg);
		bool CallOnRetry();
		void SetClosed(mscorlib::System::String* msg);
		void Retry();
		void OnUpgraded(Assembly_CSharp::BestHTTP::HTTPRequest* originalRequest, Assembly_CSharp::BestHTTP::HTTPResponse* response);
		void OnRequestFinished(Assembly_CSharp::BestHTTP::HTTPRequest* req, Assembly_CSharp::BestHTTP::HTTPResponse* resp);
		void OnMessageReceived(Assembly_CSharp::BestHTTP::ServerSentEvents::EventSourceResponse* resp, Assembly_CSharp::BestHTTP::ServerSentEvents::Message* message);
		void BestHTTP_Extensions_IHeartbeat_OnHeartbeatUpdate(mscorlib::System::TimeSpan dif);
	};
}

