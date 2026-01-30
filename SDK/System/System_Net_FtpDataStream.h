#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_IO_Stream.h"
namespace System::System::Net { struct FtpWebRequest; };
namespace mscorlib::System::IO { struct Stream; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "..\mscorlib\System_IO_SeekOrigin.h"
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System { struct IAsyncResult; };
namespace mscorlib::System { struct AsyncCallback; };
namespace mscorlib::System { struct Object; };

namespace System::System::Net
{
	struct FtpDataStream : mscorlib::System::IO::Stream
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::Net::FtpWebRequest* request;
		mscorlib::System::IO::Stream* networkStream;
		bool disposed;
		bool isRead;
		int32_t totalRead;
		void _ctor(System::Net::FtpWebRequest* request, mscorlib::System::IO::Stream* stream, bool isRead);
		bool get_CanRead();
		bool get_CanWrite();
		bool get_CanSeek();
		int64_t get_Length();
		int64_t get_Position();
		void set_Position(int64_t value);
		void Close();
		void Flush();
		int64_t Seek(int64_t offset, mscorlib::System::IO::SeekOrigin origin);
		void SetLength(int64_t value);
		int32_t ReadInternal(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t size);
		mscorlib::System::IAsyncResult* BeginRead(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t size, mscorlib::System::AsyncCallback* cb, mscorlib::System::Object* state);
		int32_t EndRead(mscorlib::System::IAsyncResult* asyncResult);
		int32_t Read(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t size);
		void WriteInternal(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t size);
		mscorlib::System::IAsyncResult* BeginWrite(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t size, mscorlib::System::AsyncCallback* cb, mscorlib::System::Object* state);
		void EndWrite(mscorlib::System::IAsyncResult* asyncResult);
		void Write(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t size);
		void Finalize();
		void System_IDisposable_Dispose();
		void Dispose(bool disposing);
		void CheckDisposed();
	};
}

