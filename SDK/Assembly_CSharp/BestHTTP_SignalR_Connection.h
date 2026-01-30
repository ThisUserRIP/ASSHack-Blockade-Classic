#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Assembly_CSharp::BestHTTP::SignalR::JsonEncoders { struct IJsonEncoder; };
namespace System::System { struct Uri; };
#include "BestHTTP_SignalR_ConnectionStates.h"
namespace Assembly_CSharp::BestHTTP::SignalR { struct NegotiationData; };
namespace Assembly_CSharp::BestHTTP::SignalR::Hubs { struct Hub; };
namespace Assembly_CSharp::BestHTTP::SignalR::Transports { struct TransportBase; };
#include "BestHTTP_SignalR_ProtocolVersions.h"
namespace mscorlib::System { struct String; };
namespace Assembly_CSharp::PlatformSupport::Collections::ObjectModel { template <typename TKey, typename TValue> struct ObservableDictionary_2; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp::BestHTTP::SignalR::Authentication { struct IAuthenticationProvider; };
#include "..\mscorlib\System_TimeSpan.h"
namespace mscorlib::System { struct TimeSpan; };
namespace Assembly_CSharp::BestHTTP::SignalR { struct OnConnectedDelegate; };
namespace Assembly_CSharp::BestHTTP::SignalR { struct OnClosedDelegate; };
namespace Assembly_CSharp::BestHTTP::SignalR { struct OnErrorDelegate; };
namespace Assembly_CSharp::BestHTTP::SignalR { struct OnStateChanged; };
namespace Assembly_CSharp::BestHTTP::SignalR { struct OnNonHubMessageDelegate; };
namespace Assembly_CSharp::BestHTTP::SignalR { struct OnPrepareRequestDelegate; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
namespace Assembly_CSharp::BestHTTP::SignalR::Messages { struct MultiMessage; };
namespace Assembly_CSharp::BestHTTP::SignalR::Messages { struct IServerMessage; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_DateTime.h"
namespace mscorlib::System { struct DateTime; };
namespace Assembly_CSharp::BestHTTP { struct HTTPRequest; };
#include "..\mscorlib\System_Nullable_1.h"
namespace mscorlib::System { template <typename T> struct Nullable_1; };
namespace mscorlib::System::Text { struct StringBuilder; };
#include "BestHTTP_SupportedProtocols.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
namespace mscorlib::System { struct Object; };
#include "BestHTTP_SignalR_RequestTypes.h"
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
namespace Assembly_CSharp::PlatformSupport::Collections::Specialized { struct NotifyCollectionChangedEventArgs; };
namespace Assembly_CSharp::BestHTTP { struct HTTPResponse; };

namespace Assembly_CSharp::BestHTTP::SignalR
{
	struct Connection : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::System::Uri* _Uri_k__BackingField;
		Assembly_CSharp::BestHTTP::SignalR::ConnectionStates _state;
		Assembly_CSharp::BestHTTP::SignalR::NegotiationData* _NegotiationResult_k__BackingField;
		IL2CPP::Array<Assembly_CSharp::BestHTTP::SignalR::Hubs::Hub*>* _Hubs_k__BackingField;
		Assembly_CSharp::BestHTTP::SignalR::Transports::TransportBase* _Transport_k__BackingField;
		Assembly_CSharp::BestHTTP::SignalR::ProtocolVersions _Protocol_k__BackingField;
		Assembly_CSharp::PlatformSupport::Collections::ObjectModel::ObservableDictionary_2<mscorlib::System::String, mscorlib::System::String>* additionalQueryParams;
		bool _QueryParamsOnlyForHandshake_k__BackingField;
		Assembly_CSharp::BestHTTP::SignalR::JsonEncoders::IJsonEncoder* _JsonEncoder_k__BackingField;
		Assembly_CSharp::BestHTTP::SignalR::Authentication::IAuthenticationProvider* _AuthenticationProvider_k__BackingField;
		mscorlib::System::TimeSpan _PingInterval_k__BackingField;
		mscorlib::System::TimeSpan _ReconnectDelay_k__BackingField;
		Assembly_CSharp::BestHTTP::SignalR::OnConnectedDelegate* OnConnected;
		Assembly_CSharp::BestHTTP::SignalR::OnClosedDelegate* OnClosed;
		Assembly_CSharp::BestHTTP::SignalR::OnErrorDelegate* OnError;
		Assembly_CSharp::BestHTTP::SignalR::OnConnectedDelegate* OnReconnecting;
		Assembly_CSharp::BestHTTP::SignalR::OnConnectedDelegate* OnReconnected;
		Assembly_CSharp::BestHTTP::SignalR::OnStateChanged* OnStateChanged;
		Assembly_CSharp::BestHTTP::SignalR::OnNonHubMessageDelegate* OnNonHubMessage;
		Assembly_CSharp::BestHTTP::SignalR::OnPrepareRequestDelegate* _RequestPreparator_k__BackingField;
		int64_t ClientMessageCounter;
		IL2CPP::Array<mscorlib::System::String*>* ClientProtocols;
		int64_t RequestCounter;
		Assembly_CSharp::BestHTTP::SignalR::Messages::MultiMessage* LastReceivedMessage;
		mscorlib::System::String* GroupsToken;
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::BestHTTP::SignalR::Messages::IServerMessage>* BufferedMessages;
		mscorlib::System::DateTime LastMessageReceivedAt;
		mscorlib::System::DateTime ReconnectStartedAt;
		mscorlib::System::DateTime ReconnectDelayStartedAt;
		bool ReconnectStarted;
		mscorlib::System::DateTime LastPingSentAt;
		Assembly_CSharp::BestHTTP::HTTPRequest* PingRequest;
		mscorlib::System::Nullable_1<mscorlib::System::DateTime> TransportConnectionStartedAt;
		mscorlib::System::Text::StringBuilder* queryBuilder;
		mscorlib::System::String* BuiltConnectionData;
		mscorlib::System::String* BuiltQueryParams;
		Assembly_CSharp::BestHTTP::SupportedProtocols NextProtocolToTry;
		struct StaticFields
		{
			Assembly_CSharp::BestHTTP::SignalR::JsonEncoders::IJsonEncoder* DefaultEncoder;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		System::System::Uri* get_Uri();
		void set_Uri(System::System::Uri* value);
		Assembly_CSharp::BestHTTP::SignalR::ConnectionStates get_State();
		void set_State(Assembly_CSharp::BestHTTP::SignalR::ConnectionStates value);
		Assembly_CSharp::BestHTTP::SignalR::NegotiationData* get_NegotiationResult();
		void set_NegotiationResult(Assembly_CSharp::BestHTTP::SignalR::NegotiationData* value);
		IL2CPP::Array<Assembly_CSharp::BestHTTP::SignalR::Hubs::Hub*>* get_Hubs();
		void set_Hubs(IL2CPP::Array<Assembly_CSharp::BestHTTP::SignalR::Hubs::Hub*>* value);
		Assembly_CSharp::BestHTTP::SignalR::Transports::TransportBase* get_Transport();
		void set_Transport(Assembly_CSharp::BestHTTP::SignalR::Transports::TransportBase* value);
		Assembly_CSharp::BestHTTP::SignalR::ProtocolVersions get_Protocol();
		void set_Protocol(Assembly_CSharp::BestHTTP::SignalR::ProtocolVersions value);
		Assembly_CSharp::PlatformSupport::Collections::ObjectModel::ObservableDictionary_2<mscorlib::System::String, mscorlib::System::String>* get_AdditionalQueryParams();
		void set_AdditionalQueryParams(Assembly_CSharp::PlatformSupport::Collections::ObjectModel::ObservableDictionary_2<mscorlib::System::String, mscorlib::System::String>* value);
		bool get_QueryParamsOnlyForHandshake();
		void set_QueryParamsOnlyForHandshake(bool value);
		Assembly_CSharp::BestHTTP::SignalR::JsonEncoders::IJsonEncoder* get_JsonEncoder();
		void set_JsonEncoder(Assembly_CSharp::BestHTTP::SignalR::JsonEncoders::IJsonEncoder* value);
		Assembly_CSharp::BestHTTP::SignalR::Authentication::IAuthenticationProvider* get_AuthenticationProvider();
		void set_AuthenticationProvider(Assembly_CSharp::BestHTTP::SignalR::Authentication::IAuthenticationProvider* value);
		mscorlib::System::TimeSpan get_PingInterval();
		void set_PingInterval(mscorlib::System::TimeSpan value);
		mscorlib::System::TimeSpan get_ReconnectDelay();
		void set_ReconnectDelay(mscorlib::System::TimeSpan value);
		void add_OnConnected(Assembly_CSharp::BestHTTP::SignalR::OnConnectedDelegate* value);
		void remove_OnConnected(Assembly_CSharp::BestHTTP::SignalR::OnConnectedDelegate* value);
		void add_OnClosed(Assembly_CSharp::BestHTTP::SignalR::OnClosedDelegate* value);
		void remove_OnClosed(Assembly_CSharp::BestHTTP::SignalR::OnClosedDelegate* value);
		void add_OnError(Assembly_CSharp::BestHTTP::SignalR::OnErrorDelegate* value);
		void remove_OnError(Assembly_CSharp::BestHTTP::SignalR::OnErrorDelegate* value);
		void add_OnReconnecting(Assembly_CSharp::BestHTTP::SignalR::OnConnectedDelegate* value);
		void remove_OnReconnecting(Assembly_CSharp::BestHTTP::SignalR::OnConnectedDelegate* value);
		void add_OnReconnected(Assembly_CSharp::BestHTTP::SignalR::OnConnectedDelegate* value);
		void remove_OnReconnected(Assembly_CSharp::BestHTTP::SignalR::OnConnectedDelegate* value);
		void add_OnStateChanged(Assembly_CSharp::BestHTTP::SignalR::OnStateChanged* value);
		void remove_OnStateChanged(Assembly_CSharp::BestHTTP::SignalR::OnStateChanged* value);
		void add_OnNonHubMessage(Assembly_CSharp::BestHTTP::SignalR::OnNonHubMessageDelegate* value);
		void remove_OnNonHubMessage(Assembly_CSharp::BestHTTP::SignalR::OnNonHubMessageDelegate* value);
		Assembly_CSharp::BestHTTP::SignalR::OnPrepareRequestDelegate* get_RequestPreparator();
		void set_RequestPreparator(Assembly_CSharp::BestHTTP::SignalR::OnPrepareRequestDelegate* value);
		Assembly_CSharp::BestHTTP::SignalR::Hubs::Hub* get_Item(int32_t idx);
		Assembly_CSharp::BestHTTP::SignalR::Hubs::Hub* get_Item(mscorlib::System::String* hubName);
		uint32_t get_Timestamp();
		mscorlib::System::String* get_ConnectionData();
		mscorlib::System::String* get_QueryParams();
		void _ctor(System::System::Uri* uri, IL2CPP::Array<mscorlib::System::String*>* hubNames);
		void _ctor(System::System::Uri* uri, IL2CPP::Array<Assembly_CSharp::BestHTTP::SignalR::Hubs::Hub*>* hubs);
		void _ctor(System::System::Uri* uri);
		void Open();
		void OnAuthenticationSucceded(Assembly_CSharp::BestHTTP::SignalR::Authentication::IAuthenticationProvider* provider);
		void OnAuthenticationFailed(Assembly_CSharp::BestHTTP::SignalR::Authentication::IAuthenticationProvider* provider, mscorlib::System::String* reason);
		void StartImpl();
		void OnNegotiationDataReceived(Assembly_CSharp::BestHTTP::SignalR::NegotiationData* data);
		void OnNegotiationError(Assembly_CSharp::BestHTTP::SignalR::NegotiationData* data, mscorlib::System::String* error);
		void Close();
		void Reconnect();
		bool Send(mscorlib::System::Object* arg);
		bool SendJson(mscorlib::System::String* json);
		void BestHTTP_SignalR_IConnection_OnMessage(Assembly_CSharp::BestHTTP::SignalR::Messages::IServerMessage* msg);
		void BestHTTP_SignalR_IConnection_TransportStarted();
		void BestHTTP_SignalR_IConnection_TransportReconnected();
		void BestHTTP_SignalR_IConnection_TransportAborted();
		void BestHTTP_SignalR_IConnection_Error(mscorlib::System::String* reason);
		System::System::Uri* BestHTTP_SignalR_IConnection_BuildUri(Assembly_CSharp::BestHTTP::SignalR::RequestTypes type);
		System::System::Uri* BestHTTP_SignalR_IConnection_BuildUri(Assembly_CSharp::BestHTTP::SignalR::RequestTypes type, Assembly_CSharp::BestHTTP::SignalR::Transports::TransportBase* transport);
		Assembly_CSharp::BestHTTP::HTTPRequest* BestHTTP_SignalR_IConnection_PrepareRequest(Assembly_CSharp::BestHTTP::HTTPRequest* req, Assembly_CSharp::BestHTTP::SignalR::RequestTypes type);
		mscorlib::System::String* BestHTTP_SignalR_IConnection_ParseResponse(mscorlib::System::String* responseStr);
		void BestHTTP_Extensions_IHeartbeat_OnHeartbeatUpdate(mscorlib::System::TimeSpan dif);
		void InitOnStart();
		Assembly_CSharp::BestHTTP::SignalR::Hubs::Hub* FindHub(uint64_t msgId);
		bool TryFallbackTransport();
		void AdditionalQueryParams_CollectionChanged(mscorlib::System::Object* sender, Assembly_CSharp::PlatformSupport::Collections::Specialized::NotifyCollectionChangedEventArgs* e);
		void Ping();
		void OnPingRequestFinished(Assembly_CSharp::BestHTTP::HTTPRequest* req, Assembly_CSharp::BestHTTP::HTTPResponse* resp);
		static void _cctor();
	};
}

