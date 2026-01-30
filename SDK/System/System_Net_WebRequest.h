#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_MarshalByRefObject.h"
namespace mscorlib::System::Collections { struct ArrayList; };
namespace mscorlib::System { struct Object; };
namespace System::System::Net { struct TimerThread_Queue; };
#include "System_Net_Security_AuthenticationLevel.h"
#include "..\mscorlib\System_Security_Principal_TokenImpersonationLevel.h"
namespace System::System::Net::Cache { struct RequestCachePolicy; };
namespace System::System::Net::Cache { struct RequestCacheProtocol; };
namespace System::System::Net::Cache { struct RequestCacheBinding; };
namespace System::System::Net { struct WebRequest_DesignerWebRequestCreate; };
namespace System::System::Net { struct IWebProxy; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace System::System { struct Uri; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Runtime::Serialization { struct SerializationInfo; };
#include "..\mscorlib\System_Runtime_Serialization_StreamingContext.h"
namespace mscorlib::System::Runtime::Serialization { struct StreamingContext; };
namespace System::System::Net { struct WebHeaderCollection; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
namespace System::System::Net { struct ICredentials; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace System::System::Net { struct WebResponse; };
namespace mscorlib::System { struct IAsyncResult; };
namespace mscorlib::System { struct AsyncCallback; };
namespace mscorlib::System::Threading::Tasks { template <typename TResult> struct Task_1; };
namespace mscorlib::System::Security::Principal { struct WindowsIdentity; };

namespace System::System::Net
{
	struct WebRequest : mscorlib::System::MarshalByRefObject
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::Net::Security::AuthenticationLevel m_AuthenticationLevel;
		mscorlib::System::Security::Principal::TokenImpersonationLevel m_ImpersonationLevel;
		System::Net::Cache::RequestCachePolicy* m_CachePolicy;
		System::Net::Cache::RequestCacheProtocol* m_CacheProtocol;
		System::Net::Cache::RequestCacheBinding* m_CacheBinding;
		struct StaticFields
		{
			mscorlib::System::Collections::ArrayList* s_PrefixList;
			mscorlib::System::Object* s_InternalSyncObject;
			System::Net::TimerThread_Queue* s_DefaultTimerQueue;
			System::Net::WebRequest_DesignerWebRequestCreate* webRequestCreate;
			System::Net::IWebProxy* s_DefaultWebProxy;
			bool s_DefaultWebProxyInitialized;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static mscorlib::System::Object* get_InternalSyncObject();
		static System::Net::WebRequest* Create(System::Uri* requestUri, bool useUriBase);
		static System::Net::WebRequest* Create(mscorlib::System::String* requestUriString);
		static System::Net::WebRequest* Create(System::Uri* requestUri);
		static mscorlib::System::Collections::ArrayList* get_PrefixList();
		static mscorlib::System::Collections::ArrayList* PopulatePrefixList();
		void _ctor();
		void _ctor(mscorlib::System::Runtime::Serialization::SerializationInfo* serializationInfo, mscorlib::System::Runtime::Serialization::StreamingContext streamingContext);
		void System_Runtime_Serialization_ISerializable_GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo* serializationInfo, mscorlib::System::Runtime::Serialization::StreamingContext streamingContext);
		void GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo* serializationInfo, mscorlib::System::Runtime::Serialization::StreamingContext streamingContext);
		void set_CachePolicy(System::Net::Cache::RequestCachePolicy* value);
		void InternalSetCachePolicy(System::Net::Cache::RequestCachePolicy* policy);
		mscorlib::System::String* get_Method();
		void set_Method(mscorlib::System::String* value);
		System::Uri* get_RequestUri();
		System::Net::WebHeaderCollection* get_Headers();
		void set_Headers(System::Net::WebHeaderCollection* value);
		int64_t get_ContentLength();
		void set_ContentLength(int64_t value);
		void set_ContentType(mscorlib::System::String* value);
		System::Net::ICredentials* get_Credentials();
		void set_Credentials(System::Net::ICredentials* value);
		bool get_UseDefaultCredentials();
		System::Net::IWebProxy* get_Proxy();
		void set_Proxy(System::Net::IWebProxy* value);
		int32_t get_Timeout();
		System::Net::WebResponse* GetResponse();
		mscorlib::System::IAsyncResult* BeginGetResponse(mscorlib::System::AsyncCallback* callback, mscorlib::System::Object* state);
		System::Net::WebResponse* EndGetResponse(mscorlib::System::IAsyncResult* asyncResult);
		mscorlib::System::Threading::Tasks::Task_1<System::Net::WebResponse>* GetResponseAsync();
		mscorlib::System::Security::Principal::WindowsIdentity* SafeCaptureIdenity();
		void Abort();
		System::Net::Cache::RequestCacheProtocol* get_CacheProtocol();
		void set_CacheProtocol(System::Net::Cache::RequestCacheProtocol* value);
		static System::Net::IWebProxy* get_InternalDefaultWebProxy();
		static System::Net::IWebProxy* get_DefaultWebProxy();
		static void _cctor();
		mscorlib::System::Threading::Tasks::Task_1<System::Net::WebResponse>* _GetResponseAsync_b__79_0();
	};
}

