#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Net_WebResponse.h"
namespace System::System { struct Uri; };
namespace System::System::Net { struct WebHeaderCollection; };
namespace System::System::Net { struct CookieCollection; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct Version; };
#include "System_Net_HttpStatusCode.h"
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
namespace System::System::Net { struct CookieContainer; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::IO { struct Stream; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System::System::Net { struct WebResponseStream; };
namespace mscorlib::System::Runtime::Serialization { struct SerializationInfo; };
#include "..\mscorlib\System_Runtime_Serialization_StreamingContext.h"
namespace mscorlib::System::Runtime::Serialization { struct StreamingContext; };

namespace System::System::Net
{
	struct HttpWebResponse : System::Net::WebResponse
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::Uri* uri;
		System::Net::WebHeaderCollection* webHeaders;
		System::Net::CookieCollection* cookieCollection;
		mscorlib::System::String* method;
		mscorlib::System::Version* version;
		System::Net::HttpStatusCode statusCode;
		mscorlib::System::String* statusDescription;
		int64_t contentLength;
		mscorlib::System::String* contentType;
		System::Net::CookieContainer* cookie_container;
		bool disposed;
		mscorlib::System::IO::Stream* stream;
		void _ctor(System::Uri* uri, mscorlib::System::String* method, System::Net::HttpStatusCode status, System::Net::WebHeaderCollection* headers);
		void _ctor(System::Uri* uri, mscorlib::System::String* method, System::Net::WebResponseStream* stream, System::Net::CookieContainer* container);
		void _ctor(mscorlib::System::Runtime::Serialization::SerializationInfo* serializationInfo, mscorlib::System::Runtime::Serialization::StreamingContext streamingContext);
		System::Net::WebHeaderCollection* get_Headers();
		System::Uri* get_ResponseUri();
		System::Net::HttpStatusCode get_StatusCode();
		mscorlib::System::String* get_StatusDescription();
		mscorlib::System::IO::Stream* GetResponseStream();
		void System_Runtime_Serialization_ISerializable_GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo* serializationInfo, mscorlib::System::Runtime::Serialization::StreamingContext streamingContext);
		void GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo* serializationInfo, mscorlib::System::Runtime::Serialization::StreamingContext streamingContext);
		void Close();
		void System_IDisposable_Dispose();
		void Dispose(bool disposing);
		void CheckDisposed();
		void FillCookies();
		void _ctor();
	};
}

