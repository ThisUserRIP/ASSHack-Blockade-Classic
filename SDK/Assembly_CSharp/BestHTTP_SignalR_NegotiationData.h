#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_TimeSpan.h"
namespace mscorlib::System { struct TimeSpan; };
#include "..\mscorlib\System_Nullable_1.h"
namespace mscorlib::System { template <typename T> struct Nullable_1; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { template <typename T> struct Action_1; };
namespace mscorlib::System { template <typename T1, typename T2> struct Action_2; };
namespace Assembly_CSharp::BestHTTP { struct HTTPRequest; };
namespace Assembly_CSharp::BestHTTP::SignalR { struct IConnection; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::BestHTTP::SignalR { struct Connection; };
namespace Assembly_CSharp::BestHTTP { struct HTTPResponse; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Double.h"
namespace mscorlib::System { struct Double; };

namespace Assembly_CSharp::BestHTTP::SignalR
{
	struct NegotiationData : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* _Url_k__BackingField;
		mscorlib::System::String* _WebSocketServerUrl_k__BackingField;
		mscorlib::System::String* _ConnectionToken_k__BackingField;
		mscorlib::System::String* _ConnectionId_k__BackingField;
		mscorlib::System::Nullable_1<mscorlib::System::TimeSpan> _KeepAliveTimeout_k__BackingField;
		mscorlib::System::TimeSpan _DisconnectTimeout_k__BackingField;
		mscorlib::System::TimeSpan _ConnectionTimeout_k__BackingField;
		bool _TryWebSockets_k__BackingField;
		mscorlib::System::String* _ProtocolVersion_k__BackingField;
		mscorlib::System::TimeSpan _TransportConnectTimeout_k__BackingField;
		mscorlib::System::TimeSpan _LongPollDelay_k__BackingField;
		mscorlib::System::Action_1<Assembly_CSharp::BestHTTP::SignalR::NegotiationData>* OnReceived;
		mscorlib::System::Action_2<Assembly_CSharp::BestHTTP::SignalR::NegotiationData, mscorlib::System::String>* OnError;
		Assembly_CSharp::BestHTTP::HTTPRequest* NegotiationRequest;
		Assembly_CSharp::BestHTTP::SignalR::IConnection* Connection;
		mscorlib::System::String* get_Url();
		void set_Url(mscorlib::System::String* value);
		mscorlib::System::String* get_WebSocketServerUrl();
		void set_WebSocketServerUrl(mscorlib::System::String* value);
		mscorlib::System::String* get_ConnectionToken();
		void set_ConnectionToken(mscorlib::System::String* value);
		mscorlib::System::String* get_ConnectionId();
		void set_ConnectionId(mscorlib::System::String* value);
		mscorlib::System::Nullable_1<mscorlib::System::TimeSpan> get_KeepAliveTimeout();
		void set_KeepAliveTimeout(mscorlib::System::Nullable_1<mscorlib::System::TimeSpan> value);
		mscorlib::System::TimeSpan get_DisconnectTimeout();
		void set_DisconnectTimeout(mscorlib::System::TimeSpan value);
		mscorlib::System::TimeSpan get_ConnectionTimeout();
		void set_ConnectionTimeout(mscorlib::System::TimeSpan value);
		bool get_TryWebSockets();
		void set_TryWebSockets(bool value);
		mscorlib::System::String* get_ProtocolVersion();
		void set_ProtocolVersion(mscorlib::System::String* value);
		mscorlib::System::TimeSpan get_TransportConnectTimeout();
		void set_TransportConnectTimeout(mscorlib::System::TimeSpan value);
		mscorlib::System::TimeSpan get_LongPollDelay();
		void set_LongPollDelay(mscorlib::System::TimeSpan value);
		void _ctor(Assembly_CSharp::BestHTTP::SignalR::Connection* connection);
		void Start();
		void Abort();
		void OnNegotiationRequestFinished(Assembly_CSharp::BestHTTP::HTTPRequest* req, Assembly_CSharp::BestHTTP::HTTPResponse* resp);
		void RaiseOnError(mscorlib::System::String* err);
		Assembly_CSharp::BestHTTP::SignalR::NegotiationData* Parse(mscorlib::System::String* str);
		static mscorlib::System::Object* Get(mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::Object>* from, mscorlib::System::String* key);
		static mscorlib::System::String* GetString(mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::Object>* from, mscorlib::System::String* key);
		static mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* GetStringList(mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::Object>* from, mscorlib::System::String* key);
		static int32_t GetInt(mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::Object>* from, mscorlib::System::String* key);
		static double GetDouble(mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::Object>* from, mscorlib::System::String* key);
	};
}

