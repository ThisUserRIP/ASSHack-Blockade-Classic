#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_InvalidOperationException.h"
#include "System_Net_WebExceptionStatus.h"
namespace System::System::Net { struct WebResponse; };
#include "System_Net_WebExceptionInternalStatus.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct Exception; };
namespace mscorlib::System::Runtime::Serialization { struct SerializationInfo; };
#include "..\mscorlib\System_Runtime_Serialization_StreamingContext.h"
namespace mscorlib::System::Runtime::Serialization { struct StreamingContext; };

namespace System::System::Net
{
	struct WebException : mscorlib::System::InvalidOperationException
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::Net::WebExceptionStatus m_Status;
		System::Net::WebResponse* m_Response;
		System::Net::WebExceptionInternalStatus m_InternalStatus;
		void _ctor();
		void _ctor(mscorlib::System::String* message);
		void _ctor(mscorlib::System::String* message, mscorlib::System::Exception* innerException);
		void _ctor(mscorlib::System::String* message, System::Net::WebExceptionStatus status);
		void _ctor(mscorlib::System::String* message, System::Net::WebExceptionStatus status, System::Net::WebExceptionInternalStatus internalStatus, mscorlib::System::Exception* innerException);
		void _ctor(mscorlib::System::String* message, mscorlib::System::Exception* innerException, System::Net::WebExceptionStatus status, System::Net::WebResponse* response);
		void _ctor(mscorlib::System::String* message, mscorlib::System::String* data, mscorlib::System::Exception* innerException, System::Net::WebExceptionStatus status, System::Net::WebResponse* response);
		void _ctor(mscorlib::System::String* message, mscorlib::System::Exception* innerException, System::Net::WebExceptionStatus status, System::Net::WebResponse* response, System::Net::WebExceptionInternalStatus internalStatus);
		void _ctor(mscorlib::System::String* message, mscorlib::System::String* data, mscorlib::System::Exception* innerException, System::Net::WebExceptionStatus status, System::Net::WebResponse* response, System::Net::WebExceptionInternalStatus internalStatus);
		void _ctor(mscorlib::System::Runtime::Serialization::SerializationInfo* serializationInfo, mscorlib::System::Runtime::Serialization::StreamingContext streamingContext);
		void System_Runtime_Serialization_ISerializable_GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo* serializationInfo, mscorlib::System::Runtime::Serialization::StreamingContext streamingContext);
		void GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo* serializationInfo, mscorlib::System::Runtime::Serialization::StreamingContext streamingContext);
		System::Net::WebExceptionStatus get_Status();
	};
}

