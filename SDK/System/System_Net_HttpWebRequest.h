#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Net_WebRequest.h"
namespace System::System { struct Uri; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace System::System::Security::Cryptography::X509Certificates { struct X509CertificateCollection; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
namespace System::System::Net { struct HttpContinueDelegate; };
namespace System::System::Net { struct CookieContainer; };
namespace System::System::Net { struct ICredentials; };
namespace System::System::Net { struct WebHeaderCollection; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct Version; };
namespace System::System::Net { struct IWebProxy; };
namespace System::System::Net { struct ServicePoint; };
namespace System::System::Net { struct WebRequestStream; };
namespace System::System::Net { struct HttpWebResponse; };
namespace System::System::Net { struct WebCompletionSource; };
namespace System::System::Net { struct WebOperation; };
namespace mscorlib::System { struct Object; };
#include "System_Net_DecompressionMethods.h"
namespace Mono_Security::Mono::Security::Interface { struct MonoTlsProvider; };
namespace Mono_Security::Mono::Security::Interface { struct MonoTlsSettings; };
namespace System::System::Net { struct ServerCertValidationCallback; };
#include "System_Net_HttpWebRequest_AuthorizationState.h"
namespace System::System::Net { struct HttpWebRequest_AuthorizationState; };
namespace mscorlib::System::IO { struct Stream; };
namespace mscorlib::System::Threading::Tasks { struct Task; };
namespace mscorlib::System { template <typename T, typename TResult> struct Func_2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Runtime::Serialization { struct SerializationInfo; };
#include "..\mscorlib\System_Runtime_Serialization_StreamingContext.h"
namespace mscorlib::System::Runtime::Serialization { struct StreamingContext; };
namespace System::System::Net { struct BufferOffsetSize; };
#include "..\mscorlib\System_Threading_CancellationToken.h"
namespace mscorlib::System::Threading { struct CancellationToken; };
#include "..\mscorlib\System_Reflection_MethodInfo.h"
namespace mscorlib::System::Threading::Tasks { template <typename TResult> struct Task_1; };
namespace mscorlib::System { struct Action; };
#include "..\mscorlib\System_ValueTuple_5.h"
namespace mscorlib::System { template <typename T1, typename T2, typename T3, typename T4, typename T5> struct ValueTuple_5; };
namespace System::System::Net { struct WebResponseStream; };
namespace mscorlib::System { struct Exception; };
namespace System::System::Net { struct WebException; };
namespace mscorlib::System { struct IAsyncResult; };
namespace mscorlib::System { struct AsyncCallback; };
namespace System::System::Net { struct WebResponse; };
#include "System_Net_HttpStatusCode.h"
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_ValueTuple_2.h"
namespace mscorlib::System { template <typename T1, typename T2> struct ValueTuple_2; };
#include "..\mscorlib\System_ValueTuple_4.h"
namespace mscorlib::System { template <typename T1, typename T2, typename T3, typename T4> struct ValueTuple_4; };

namespace System::System::Net
{
	struct HttpWebRequest : System::Net::WebRequest
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::Uri* requestUri;
		System::Uri* actualUri;
		bool hostChanged;
		bool allowAutoRedirect;
		bool allowBuffering;
		System::Security::Cryptography::X509Certificates::X509CertificateCollection* certificates;
		mscorlib::System::String* connectionGroup;
		bool haveContentLength;
		int64_t contentLength;
		System::Net::HttpContinueDelegate* continueDelegate;
		System::Net::CookieContainer* cookieContainer;
		System::Net::ICredentials* credentials;
		bool haveResponse;
		bool requestSent;
		System::Net::WebHeaderCollection* webHeaders;
		bool keepAlive;
		int32_t maxAutoRedirect;
		mscorlib::System::String* mediaType;
		mscorlib::System::String* method;
		mscorlib::System::String* initialMethod;
		bool pipelined;
		bool preAuthenticate;
		bool usedPreAuth;
		mscorlib::System::Version* version;
		bool force_version;
		mscorlib::System::Version* actualVersion;
		System::Net::IWebProxy* proxy;
		bool sendChunked;
		System::Net::ServicePoint* servicePoint;
		int32_t timeout;
		System::Net::WebRequestStream* writeStream;
		System::Net::HttpWebResponse* webResponse;
		System::Net::WebCompletionSource* responseTask;
		System::Net::WebOperation* currentOperation;
		int32_t aborted;
		bool gotRequestStream;
		int32_t redirects;
		bool expectContinue;
		bool getResponseCalled;
		mscorlib::System::Object* locker;
		bool finished_reading;
		System::Net::DecompressionMethods auto_decomp;
		int32_t readWriteTimeout;
		Mono_Security::Mono::Security::Interface::MonoTlsProvider* tlsProvider;
		Mono_Security::Mono::Security::Interface::MonoTlsSettings* tlsSettings;
		System::Net::ServerCertValidationCallback* certValidationCallback;
		System::Net::HttpWebRequest_AuthorizationState auth_state;
		System::Net::HttpWebRequest_AuthorizationState proxy_auth_state;
		mscorlib::System::String* host;
		mscorlib::System::Func_2<mscorlib::System::IO::Stream, mscorlib::System::Threading::Tasks::Task>* ResendContentFactory;
		bool _ThrowOnError_k__BackingField;
		bool unsafe_auth_blah;
		struct StaticFields
		{
			int32_t defaultMaxResponseHeadersLength;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		void _ctor(System::Uri* uri);
		void _ctor(mscorlib::System::Runtime::Serialization::SerializationInfo* serializationInfo, mscorlib::System::Runtime::Serialization::StreamingContext streamingContext);
		void ResetAuthorization();
		void SetSpecialHeaders(mscorlib::System::String* HeaderName, mscorlib::System::String* value);
		void set_Accept(mscorlib::System::String* value);
		System::Uri* get_Address();
		void set_Address(System::Uri* value);
		bool get_AllowWriteStreamBuffering();
		System::Net::DecompressionMethods get_AutomaticDecompression();
		bool get_InternalAllowBuffering();
		bool get_MethodWithBuffer();
		Mono_Security::Mono::Security::Interface::MonoTlsProvider* get_TlsProvider();
		Mono_Security::Mono::Security::Interface::MonoTlsSettings* get_TlsSettings();
		System::Security::Cryptography::X509Certificates::X509CertificateCollection* get_ClientCertificates();
		void set_Connection(mscorlib::System::String* value);
		int64_t get_ContentLength();
		void set_ContentLength(int64_t value);
		void set_InternalContentLength(int64_t value);
		bool get_ThrowOnError();
		void set_ThrowOnError(bool value);
		void set_ContentType(mscorlib::System::String* value);
		System::Net::ICredentials* get_Credentials();
		void set_Credentials(System::Net::ICredentials* value);
		void set_Expect(mscorlib::System::String* value);
		System::Net::WebHeaderCollection* get_Headers();
		void set_Headers(System::Net::WebHeaderCollection* value);
		mscorlib::System::String* get_Host();
		void set_Host(mscorlib::System::String* value);
		static bool CheckValidHost(mscorlib::System::String* scheme, mscorlib::System::String* val);
		bool get_KeepAlive();
		int32_t get_ReadWriteTimeout();
		mscorlib::System::String* get_Method();
		void set_Method(mscorlib::System::String* value);
		mscorlib::System::Version* get_ProtocolVersion();
		System::Net::IWebProxy* get_Proxy();
		void set_Proxy(System::Net::IWebProxy* value);
		void set_Referer(mscorlib::System::String* value);
		System::Uri* get_RequestUri();
		bool get_SendChunked();
		System::Net::ServicePoint* get_ServicePoint();
		System::Net::ServicePoint* get_ServicePointNoLock();
		int32_t get_Timeout();
		mscorlib::System::String* get_TransferEncoding();
		bool get_UseDefaultCredentials();
		void set_UserAgent(mscorlib::System::String* value);
		bool get_UnsafeAuthenticatedConnectionSharing();
		bool get_ExpectContinue();
		void set_ExpectContinue(bool value);
		System::Uri* get_AuthUri();
		bool get_ProxyQuery();
		System::Net::ServerCertValidationCallback* get_ServerCertValidationCallback();
		System::Net::ServicePoint* GetServicePoint();
		System::Net::WebOperation* SendRequest(bool redirecting, System::Net::BufferOffsetSize* writeBuffer, mscorlib::System::Threading::CancellationToken cancellationToken);
		template <typename T> static mscorlib::System::Threading::Tasks::Task_1<T>* RunWithTimeout(mscorlib::System::Func_2<mscorlib::System::Threading::CancellationToken, mscorlib::System::Threading::Tasks::Task_1<T>>* func, int32_t timeout, mscorlib::System::Action* abort)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RunWithTimeout", std::vector<std::string> { "System.Func`2<System.Threading.CancellationToken,System.Threading.Tasks.Task`1<T>>", "System.Int32", "System.Action" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[3];
			params[0] = (intptr_t)func;
			params[1] = (intptr_t)&timeout;
			params[2] = (intptr_t)abort;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (mscorlib::System::Threading::Tasks::Task_1<T>*)returnValue;
		}
		template <typename T> mscorlib::System::Threading::Tasks::Task_1<T>* RunWithTimeout(mscorlib::System::Func_2<mscorlib::System::Threading::CancellationToken, mscorlib::System::Threading::Tasks::Task_1<T>>* func)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RunWithTimeout", std::vector<std::string> { "System.Func`2<System.Threading.CancellationToken,System.Threading.Tasks.Task`1<T>>" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)func;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (mscorlib::System::Threading::Tasks::Task_1<T>*)returnValue;
		}
		mscorlib::System::Threading::Tasks::Task_1<System::Net::HttpWebResponse>* MyGetResponseAsync(mscorlib::System::Threading::CancellationToken cancellationToken);
		mscorlib::System::Threading::Tasks::Task_1<mscorlib::System::ValueTuple_5<System::Net::HttpWebResponse, mscorlib::System::Boolean, mscorlib::System::Boolean, System::Net::BufferOffsetSize, System::Net::WebOperation>>* GetResponseFromData(System::Net::WebResponseStream* stream, mscorlib::System::Threading::CancellationToken cancellationToken);
		static mscorlib::System::Exception* FlattenException(mscorlib::System::Exception* e);
		System::Net::WebException* GetWebException(mscorlib::System::Exception* e);
		static System::Net::WebException* CreateRequestAbortedException();
		mscorlib::System::IAsyncResult* BeginGetResponse(mscorlib::System::AsyncCallback* callback, mscorlib::System::Object* state);
		System::Net::WebResponse* EndGetResponse(mscorlib::System::IAsyncResult* asyncResult);
		System::Net::WebResponse* GetResponse();
		void set_FinishedReading(bool value);
		bool get_Aborted();
		void Abort();
		void System_Runtime_Serialization_ISerializable_GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo* serializationInfo, mscorlib::System::Runtime::Serialization::StreamingContext streamingContext);
		void GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo* serializationInfo, mscorlib::System::Runtime::Serialization::StreamingContext streamingContext);
		void CheckRequestStarted();
		void DoContinueDelegate(int32_t statusCode, System::Net::WebHeaderCollection* headers);
		void RewriteRedirectToGet();
		bool Redirect(System::Net::HttpStatusCode code, System::Net::WebResponse* response);
		mscorlib::System::String* GetHeaders();
		void DoPreAuthenticate();
		IL2CPP::Array<uint8_t>* GetRequestHeaders();
		mscorlib::System::ValueTuple_2<System::Net::WebOperation, mscorlib::System::Boolean> HandleNtlmAuth(System::Net::WebResponseStream* stream, System::Net::HttpWebResponse* response, System::Net::BufferOffsetSize* writeBuffer, mscorlib::System::Threading::CancellationToken cancellationToken);
		bool CheckAuthorization(System::Net::WebResponse* response, System::Net::HttpStatusCode code);
		mscorlib::System::ValueTuple_2<mscorlib::System::Threading::Tasks::Task_1<System::Net::BufferOffsetSize>, System::Net::WebException> GetRewriteHandler(System::Net::HttpWebResponse* response, bool redirect);
		mscorlib::System::ValueTuple_4<mscorlib::System::Boolean, mscorlib::System::Boolean, mscorlib::System::Threading::Tasks::Task_1<System::Net::BufferOffsetSize>, System::Net::WebException> CheckFinalStatus(System::Net::HttpWebResponse* response);
		mscorlib::System::Threading::Tasks::Task_1<System::Net::BufferOffsetSize>* _GetRewriteHandler_b__263_0();
		void _ctor();
	};
}

