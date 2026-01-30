#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_ComponentModel_Component.h"
namespace System::System { struct Uri; };
namespace System::System::Net { struct ICredentials; };
namespace System::System::Net { struct WebHeaderCollection; };
namespace System::System::Collections::Specialized { struct NameValueCollection; };
namespace System::System::Net { struct WebResponse; };
namespace System::System::Net { struct WebRequest; };
namespace mscorlib::System::Text { struct Encoding; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace System::System::Net { struct WebClient_ProgressData; };
namespace System::System::Net { struct IWebProxy; };
namespace System::System::Net::Cache { struct RequestCachePolicy; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::IO { struct Stream; };

namespace System::System::Net
{
	struct WebClient : System::ComponentModel::Component
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::Uri* m_baseAddress;
		System::Net::ICredentials* m_credentials;
		System::Net::WebHeaderCollection* m_headers;
		System::Collections::Specialized::NameValueCollection* m_requestParameters;
		System::Net::WebResponse* m_WebResponse;
		System::Net::WebRequest* m_WebRequest;
		mscorlib::System::Text::Encoding* m_Encoding;
		mscorlib::System::String* m_Method;
		int64_t m_ContentLength;
		bool m_Cancelled;
		System::Net::WebClient_ProgressData* m_Progress;
		System::Net::IWebProxy* m_Proxy;
		bool m_ProxySet;
		System::Net::Cache::RequestCachePolicy* m_CachePolicy;
		int32_t m_CallNesting;
		void _ctor();
		void ClearWebClientState();
		void CompleteWebClientState();
		System::Net::ICredentials* get_Credentials();
		void set_Credentials(System::Net::ICredentials* value);
		System::Net::WebRequest* GetWebRequest(System::Uri* address);
		System::Net::WebResponse* GetWebResponse(System::Net::WebRequest* request);
		mscorlib::System::IO::Stream* OpenRead(mscorlib::System::String* address);
		mscorlib::System::IO::Stream* OpenRead(System::Uri* address);
		static void AbortRequest(System::Net::WebRequest* request);
		void CopyHeadersTo(System::Net::WebRequest* request);
		System::Uri* GetUri(mscorlib::System::String* path);
		System::Uri* GetUri(System::Uri* address);
		bool AnotherCallInProgress(int32_t callNesting);
	};
}

