#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_IO_Stream.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace System::System::Net { struct HttpWebRequest; };
namespace System::System::Net { struct WebConnection; };
namespace System::System::Net { struct WebOperation; };
namespace mscorlib::System::IO { struct Stream; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System::System::Net { struct ServicePoint; };
namespace mscorlib::System { struct Exception; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System { struct IAsyncResult; };
namespace mscorlib::System { struct AsyncCallback; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "..\mscorlib\System_IO_SeekOrigin.h"

namespace System::System::Net
{
	struct WebConnectionStream : mscorlib::System::IO::Stream
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool closed;
		bool disposed;
		mscorlib::System::Object* locker;
		int32_t read_timeout;
		int32_t write_timeout;
		bool IgnoreIOErrors;
		System::Net::HttpWebRequest* _Request_k__BackingField;
		System::Net::WebConnection* _Connection_k__BackingField;
		System::Net::WebOperation* _Operation_k__BackingField;
		mscorlib::System::IO::Stream* _InnerStream_k__BackingField;
		void _ctor(System::Net::WebConnection* cnc, System::Net::WebOperation* operation, mscorlib::System::IO::Stream* stream);
		System::Net::HttpWebRequest* get_Request();
		System::Net::WebConnection* get_Connection();
		System::Net::WebOperation* get_Operation();
		System::Net::ServicePoint* get_ServicePoint();
		mscorlib::System::IO::Stream* get_InnerStream();
		int32_t get_ReadTimeout();
		void set_ReadTimeout(int32_t value);
		int32_t get_WriteTimeout();
		mscorlib::System::Exception* GetException(mscorlib::System::Exception* e);
		int32_t Read(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t size);
		mscorlib::System::IAsyncResult* BeginRead(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t size, mscorlib::System::AsyncCallback* cb, mscorlib::System::Object* state);
		int32_t EndRead(mscorlib::System::IAsyncResult* r);
		mscorlib::System::IAsyncResult* BeginWrite(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t size, mscorlib::System::AsyncCallback* cb, mscorlib::System::Object* state);
		void EndWrite(mscorlib::System::IAsyncResult* r);
		void Write(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t size);
		void Flush();
		void InternalClose();
		void Close_internal(bool& disposed);
		void Close();
		int64_t Seek(int64_t a, mscorlib::System::IO::SeekOrigin b);
		void SetLength(int64_t a);
		bool get_CanSeek();
		int64_t get_Position();
		void set_Position(int64_t value);
	};
}

