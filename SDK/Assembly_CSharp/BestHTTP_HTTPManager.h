#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_TimeSpan.h"
namespace mscorlib::System { struct TimeSpan; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { template <typename TResult> struct Func_1; };
namespace Assembly_CSharp::BestHTTP { struct Proxy; };
namespace Assembly_CSharp::BestHTTP::Extensions { struct HeartbeatManager; };
namespace Assembly_CSharp::BestHTTP::Logger { struct ILogger; };
namespace Assembly_CSharp::Org::BouncyCastle::Crypto::Tls { struct ICertificateVerifyer; };
namespace Assembly_CSharp::Org::BouncyCastle::Crypto::Tls { struct IClientCredentialsProvider; };
namespace Assembly_CSharp::BestHTTP { struct HTTPRequest; };
namespace mscorlib::System::Security::Cryptography::X509Certificates { struct X509Certificate; };
namespace System::System::Security::Cryptography::X509Certificates { struct X509Chain; };
namespace mscorlib::System { template <typename T1, typename T2, typename T3, typename TResult> struct Func_4; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Assembly_CSharp::BestHTTP::PlatformSupport::FileSystem { struct IIOService; };
namespace Assembly_CSharp::BestHTTP { struct ConnectionBase; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::BestHTTP { struct OnRequestFinishedDelegate; };
#include "BestHTTP_HTTPMethods.h"
#include "BestHTTP_Statistics_GeneralStatistics.h"
namespace Assembly_CSharp::BestHTTP::Statistics { struct GeneralStatistics; };
#include "BestHTTP_Statistics_StatisticsQueryFlags.h"

namespace Assembly_CSharp::BestHTTP
{
	struct HTTPManager : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			uint8_t maxConnectionPerServer;
			bool _KeepAliveDefaultValue_k__BackingField;
			bool _IsCachingDisabled_k__BackingField;
			mscorlib::System::TimeSpan _MaxConnectionIdleTime_k__BackingField;
			bool _IsCookiesEnabled_k__BackingField;
			uint32_t _CookieJarSize_k__BackingField;
			bool _EnablePrivateBrowsing_k__BackingField;
			mscorlib::System::TimeSpan _ConnectTimeout_k__BackingField;
			mscorlib::System::TimeSpan _RequestTimeout_k__BackingField;
			mscorlib::System::Func_1<mscorlib::System::String>* _RootCacheFolderProvider_k__BackingField;
			Assembly_CSharp::BestHTTP::Proxy* _Proxy_k__BackingField;
			Assembly_CSharp::BestHTTP::Extensions::HeartbeatManager* heartbeats;
			Assembly_CSharp::BestHTTP::Logger::ILogger* logger;
			Assembly_CSharp::Org::BouncyCastle::Crypto::Tls::ICertificateVerifyer* _DefaultCertificateVerifyer_k__BackingField;
			Assembly_CSharp::Org::BouncyCastle::Crypto::Tls::IClientCredentialsProvider* _DefaultClientCredentialsProvider_k__BackingField;
			bool _UseAlternateSSLDefaultValue_k__BackingField;
			mscorlib::System::Func_4<Assembly_CSharp::BestHTTP::HTTPRequest, mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate, System::System::Security::Cryptography::X509Certificates::X509Chain, mscorlib::System::Boolean>* _DefaultCertificationValidator_k__BackingField;
			bool TryToMinimizeTCPLatency;
			int32_t SendBufferSize;
			int32_t ReceiveBufferSize;
			Assembly_CSharp::BestHTTP::PlatformSupport::FileSystem::IIOService* IOService;
			int32_t _MaxPathLength_k__BackingField;
			mscorlib::System::String* UserAgent;
			mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::BestHTTP::ConnectionBase>>* Connections;
			mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::BestHTTP::ConnectionBase>* ActiveConnections;
			mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::BestHTTP::ConnectionBase>* FreeConnections;
			mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::BestHTTP::ConnectionBase>* RecycledConnections;
			mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::BestHTTP::HTTPRequest>* RequestQueue;
			bool IsCallingCallbacks;
			mscorlib::System::Object* Locker;
			bool _IsQuitting_k__BackingField;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		static uint8_t get_MaxConnectionPerServer();
		static void set_MaxConnectionPerServer(uint8_t value);
		static bool get_KeepAliveDefaultValue();
		static void set_KeepAliveDefaultValue(bool value);
		static bool get_IsCachingDisabled();
		static void set_IsCachingDisabled(bool value);
		static mscorlib::System::TimeSpan get_MaxConnectionIdleTime();
		static void set_MaxConnectionIdleTime(mscorlib::System::TimeSpan value);
		static bool get_IsCookiesEnabled();
		static void set_IsCookiesEnabled(bool value);
		static uint32_t get_CookieJarSize();
		static void set_CookieJarSize(uint32_t value);
		static bool get_EnablePrivateBrowsing();
		static void set_EnablePrivateBrowsing(bool value);
		static mscorlib::System::TimeSpan get_ConnectTimeout();
		static void set_ConnectTimeout(mscorlib::System::TimeSpan value);
		static mscorlib::System::TimeSpan get_RequestTimeout();
		static void set_RequestTimeout(mscorlib::System::TimeSpan value);
		static mscorlib::System::Func_1<mscorlib::System::String>* get_RootCacheFolderProvider();
		static void set_RootCacheFolderProvider(mscorlib::System::Func_1<mscorlib::System::String>* value);
		static Assembly_CSharp::BestHTTP::Proxy* get_Proxy();
		static void set_Proxy(Assembly_CSharp::BestHTTP::Proxy* value);
		static Assembly_CSharp::BestHTTP::Extensions::HeartbeatManager* get_Heartbeats();
		static Assembly_CSharp::BestHTTP::Logger::ILogger* get_Logger();
		static void set_Logger(Assembly_CSharp::BestHTTP::Logger::ILogger* value);
		static Assembly_CSharp::Org::BouncyCastle::Crypto::Tls::ICertificateVerifyer* get_DefaultCertificateVerifyer();
		static void set_DefaultCertificateVerifyer(Assembly_CSharp::Org::BouncyCastle::Crypto::Tls::ICertificateVerifyer* value);
		static Assembly_CSharp::Org::BouncyCastle::Crypto::Tls::IClientCredentialsProvider* get_DefaultClientCredentialsProvider();
		static void set_DefaultClientCredentialsProvider(Assembly_CSharp::Org::BouncyCastle::Crypto::Tls::IClientCredentialsProvider* value);
		static bool get_UseAlternateSSLDefaultValue();
		static void set_UseAlternateSSLDefaultValue(bool value);
		static mscorlib::System::Func_4<Assembly_CSharp::BestHTTP::HTTPRequest, mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate, System::System::Security::Cryptography::X509Certificates::X509Chain, mscorlib::System::Boolean>* get_DefaultCertificationValidator();
		static void set_DefaultCertificationValidator(mscorlib::System::Func_4<Assembly_CSharp::BestHTTP::HTTPRequest, mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate, System::System::Security::Cryptography::X509Certificates::X509Chain, mscorlib::System::Boolean>* value);
		static int32_t get_MaxPathLength();
		static void set_MaxPathLength(int32_t value);
		static bool get_IsQuitting();
		static void set_IsQuitting(bool value);
		static void Setup();
		static Assembly_CSharp::BestHTTP::HTTPRequest* SendRequest(mscorlib::System::String* url, Assembly_CSharp::BestHTTP::OnRequestFinishedDelegate* callback);
		static Assembly_CSharp::BestHTTP::HTTPRequest* SendRequest(mscorlib::System::String* url, Assembly_CSharp::BestHTTP::HTTPMethods methodType, Assembly_CSharp::BestHTTP::OnRequestFinishedDelegate* callback);
		static Assembly_CSharp::BestHTTP::HTTPRequest* SendRequest(mscorlib::System::String* url, Assembly_CSharp::BestHTTP::HTTPMethods methodType, bool isKeepAlive, Assembly_CSharp::BestHTTP::OnRequestFinishedDelegate* callback);
		static Assembly_CSharp::BestHTTP::HTTPRequest* SendRequest(mscorlib::System::String* url, Assembly_CSharp::BestHTTP::HTTPMethods methodType, bool isKeepAlive, bool disableCache, Assembly_CSharp::BestHTTP::OnRequestFinishedDelegate* callback);
		static Assembly_CSharp::BestHTTP::HTTPRequest* SendRequest(Assembly_CSharp::BestHTTP::HTTPRequest* request);
		static Assembly_CSharp::BestHTTP::Statistics::GeneralStatistics GetGeneralStatistics(Assembly_CSharp::BestHTTP::Statistics::StatisticsQueryFlags queryFlags);
		static void SendRequestImpl(Assembly_CSharp::BestHTTP::HTTPRequest* request);
		static mscorlib::System::String* GetKeyForRequest(Assembly_CSharp::BestHTTP::HTTPRequest* request);
		static Assembly_CSharp::BestHTTP::ConnectionBase* CreateConnection(Assembly_CSharp::BestHTTP::HTTPRequest* request, mscorlib::System::String* serverUrl);
		static Assembly_CSharp::BestHTTP::ConnectionBase* FindOrCreateFreeConnection(Assembly_CSharp::BestHTTP::HTTPRequest* request);
		static bool CanProcessFromQueue();
		static void RecycleConnection(Assembly_CSharp::BestHTTP::ConnectionBase* conn);
		static void OnConnectionRecylced(Assembly_CSharp::BestHTTP::ConnectionBase* conn);
		static Assembly_CSharp::BestHTTP::ConnectionBase* GetConnectionWith(Assembly_CSharp::BestHTTP::HTTPRequest* request);
		static bool RemoveFromQueue(Assembly_CSharp::BestHTTP::HTTPRequest* request);
		static mscorlib::System::String* GetRootCacheFolder();
		static void OnUpdate();
		static void OnQuit();
		static void AbortAll(bool allowCallbacks);
	};
}

