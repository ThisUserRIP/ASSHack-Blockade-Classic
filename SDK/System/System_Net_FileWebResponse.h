#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Net_WebResponse.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "..\mscorlib\System_IO_FileAccess.h"
namespace System::System::Net { struct WebHeaderCollection; };
namespace mscorlib::System::IO { struct Stream; };
namespace System::System { struct Uri; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System::System::Net { struct FileWebRequest; };
namespace mscorlib::System::Runtime::Serialization { struct SerializationInfo; };
#include "..\mscorlib\System_Runtime_Serialization_StreamingContext.h"
namespace mscorlib::System::Runtime::Serialization { struct StreamingContext; };
#include "System_Net_CloseExState.h"

namespace System::System::Net
{
	struct FileWebResponse : System::Net::WebResponse
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool m_closed;
		int64_t m_contentLength;
		mscorlib::System::IO::FileAccess m_fileAccess;
		System::Net::WebHeaderCollection* m_headers;
		mscorlib::System::IO::Stream* m_stream;
		System::Uri* m_uri;
		void _ctor(System::Net::FileWebRequest* request, System::Uri* uri, mscorlib::System::IO::FileAccess access, bool asyncHint);
		void _ctor(mscorlib::System::Runtime::Serialization::SerializationInfo* serializationInfo, mscorlib::System::Runtime::Serialization::StreamingContext streamingContext);
		void System_Runtime_Serialization_ISerializable_GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo* serializationInfo, mscorlib::System::Runtime::Serialization::StreamingContext streamingContext);
		void GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo* serializationInfo, mscorlib::System::Runtime::Serialization::StreamingContext streamingContext);
		System::Net::WebHeaderCollection* get_Headers();
		System::Uri* get_ResponseUri();
		void CheckDisposed();
		void Close();
		void System_Net_ICloseEx_CloseEx(System::Net::CloseExState closeState);
		mscorlib::System::IO::Stream* GetResponseStream();
	};
}

