#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_IO_Stream.h"
namespace mscorlib::System::IO { struct Stream; };
#include "System_IO_Compression_CompressionMode.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace System::System::IO::Compression { struct DeflateStreamNative; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System { struct IAsyncResult; };
namespace mscorlib::System { struct AsyncCallback; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "..\mscorlib\System_IO_SeekOrigin.h"

namespace System::System::IO::Compression
{
	struct DeflateStream : mscorlib::System::IO::Stream
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::IO::Stream* base_stream;
		System::IO::Compression::CompressionMode mode;
		bool leaveOpen;
		bool disposed;
		System::IO::Compression::DeflateStreamNative* native;
		void _ctor(mscorlib::System::IO::Stream* stream, System::IO::Compression::CompressionMode mode);
		void _ctor(mscorlib::System::IO::Stream* stream, System::IO::Compression::CompressionMode mode, bool leaveOpen, int32_t windowsBits);
		void _ctor(mscorlib::System::IO::Stream* compressedStream, System::IO::Compression::CompressionMode mode, bool leaveOpen, bool gzip);
		void Dispose(bool disposing);
		int32_t ReadInternal(IL2CPP::Array<uint8_t>* array, int32_t offset, int32_t count);
		int32_t Read(IL2CPP::Array<uint8_t>* array, int32_t offset, int32_t count);
		void WriteInternal(IL2CPP::Array<uint8_t>* array, int32_t offset, int32_t count);
		void Write(IL2CPP::Array<uint8_t>* array, int32_t offset, int32_t count);
		void Flush();
		mscorlib::System::IAsyncResult* BeginRead(IL2CPP::Array<uint8_t>* array, int32_t offset, int32_t count, mscorlib::System::AsyncCallback* asyncCallback, mscorlib::System::Object* asyncState);
		mscorlib::System::IAsyncResult* BeginWrite(IL2CPP::Array<uint8_t>* array, int32_t offset, int32_t count, mscorlib::System::AsyncCallback* asyncCallback, mscorlib::System::Object* asyncState);
		int32_t EndRead(mscorlib::System::IAsyncResult* asyncResult);
		void EndWrite(mscorlib::System::IAsyncResult* asyncResult);
		int64_t Seek(int64_t offset, mscorlib::System::IO::SeekOrigin origin);
		void SetLength(int64_t value);
		bool get_CanRead();
		bool get_CanSeek();
		bool get_CanWrite();
		int64_t get_Length();
		int64_t get_Position();
		void set_Position(int64_t value);
	};
}

