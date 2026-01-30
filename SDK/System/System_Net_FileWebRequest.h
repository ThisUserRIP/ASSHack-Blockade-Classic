#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Net_WebRequest.h"
namespace mscorlib::System::Threading { struct WaitCallback; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
namespace System::System::Net { struct ICredentials; };
#include "..\mscorlib\System_IO_FileAccess.h"
namespace System::System::Net { struct WebHeaderCollection; };
namespace System::System::Net { struct IWebProxy; };
namespace mscorlib::System::Threading { struct ManualResetEvent; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace System::System::Net { struct WebResponse; };
namespace mscorlib::System::IO { struct Stream; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace System::System { struct Uri; };
namespace System::System::Net { struct LazyAsyncResult; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Runtime::Serialization { struct SerializationInfo; };
#include "..\mscorlib\System_Runtime_Serialization_StreamingContext.h"
namespace mscorlib::System::Runtime::Serialization { struct StreamingContext; };
namespace mscorlib::System { struct IAsyncResult; };
namespace mscorlib::System { struct AsyncCallback; };
namespace mscorlib::System { struct Object; };

namespace System::System::Net
{
	struct FileWebRequest : System::Net::WebRequest
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* m_connectionGroupName;
		int64_t m_contentLength;
		System::Net::ICredentials* m_credentials;
		mscorlib::System::IO::FileAccess m_fileAccess;
		System::Net::WebHeaderCollection* m_headers;
		mscorlib::System::String* m_method;
		System::Net::IWebProxy* m_proxy;
		mscorlib::System::Threading::ManualResetEvent* m_readerEvent;
		bool m_readPending;
		System::Net::WebResponse* m_response;
		mscorlib::System::IO::Stream* m_stream;
		bool m_syncHint;
		int32_t m_timeout;
		System::Uri* m_uri;
		bool m_writePending;
		bool m_writing;
		System::Net::LazyAsyncResult* m_WriteAResult;
		System::Net::LazyAsyncResult* m_ReadAResult;
		int32_t m_Aborted;
		struct StaticFields
		{
			mscorlib::System::Threading::WaitCallback* s_GetRequestStreamCallback;
			mscorlib::System::Threading::WaitCallback* s_GetResponseCallback;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(System::Uri* uri);
		void _ctor(mscorlib::System::Runtime::Serialization::SerializationInfo* serializationInfo, mscorlib::System::Runtime::Serialization::StreamingContext streamingContext);
		void System_Runtime_Serialization_ISerializable_GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo* serializationInfo, mscorlib::System::Runtime::Serialization::StreamingContext streamingContext);
		void GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo* serializationInfo, mscorlib::System::Runtime::Serialization::StreamingContext streamingContext);
		bool get_Aborted();
		int64_t get_ContentLength();
		void set_ContentLength(int64_t value);
		void set_ContentType(mscorlib::System::String* value);
		System::Net::ICredentials* get_Credentials();
		void set_Credentials(System::Net::ICredentials* value);
		System::Net::WebHeaderCollection* get_Headers();
		mscorlib::System::String* get_Method();
		void set_Method(mscorlib::System::String* value);
		System::Net::IWebProxy* get_Proxy();
		void set_Proxy(System::Net::IWebProxy* value);
		int32_t get_Timeout();
		System::Uri* get_RequestUri();
		mscorlib::System::IAsyncResult* BeginGetResponse(mscorlib::System::AsyncCallback* callback, mscorlib::System::Object* state);
		System::Net::WebResponse* EndGetResponse(mscorlib::System::IAsyncResult* asyncResult);
		System::Net::WebResponse* GetResponse();
		static void GetRequestStreamCallback(mscorlib::System::Object* state);
		static void GetResponseCallback(mscorlib::System::Object* state);
		void UnblockReader();
		bool get_UseDefaultCredentials();
		void Abort();
		static void _cctor();
	};
}

