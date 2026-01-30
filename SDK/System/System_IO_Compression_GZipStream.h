#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_IO_Stream.h"
namespace System::System::IO::Compression { struct DeflateStream; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::IO { struct Stream; };
#include "System_IO_Compression_CompressionMode.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "..\mscorlib\System_IO_SeekOrigin.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct IAsyncResult; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System { struct AsyncCallback; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Threading::Tasks { template <typename TResult> struct Task_1; };
#include "..\mscorlib\System_Threading_CancellationToken.h"
namespace mscorlib::System::Threading { struct CancellationToken; };
namespace mscorlib::System::Threading::Tasks { struct Task; };

namespace System::System::IO::Compression
{
	struct GZipStream : mscorlib::System::IO::Stream
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::IO::Compression::DeflateStream* _deflateStream;
		void _ctor(mscorlib::System::IO::Stream* stream, System::IO::Compression::CompressionMode mode);
		void _ctor(mscorlib::System::IO::Stream* stream, System::IO::Compression::CompressionMode mode, bool leaveOpen);
		bool get_CanRead();
		bool get_CanWrite();
		bool get_CanSeek();
		int64_t get_Length();
		int64_t get_Position();
		void set_Position(int64_t value);
		void Flush();
		int64_t Seek(int64_t offset, mscorlib::System::IO::SeekOrigin origin);
		void SetLength(int64_t value);
		int32_t ReadByte();
		mscorlib::System::IAsyncResult* BeginRead(IL2CPP::Array<uint8_t>* array, int32_t offset, int32_t count, mscorlib::System::AsyncCallback* asyncCallback, mscorlib::System::Object* asyncState);
		int32_t EndRead(mscorlib::System::IAsyncResult* asyncResult);
		int32_t Read(IL2CPP::Array<uint8_t>* array, int32_t offset, int32_t count);
		mscorlib::System::IAsyncResult* BeginWrite(IL2CPP::Array<uint8_t>* array, int32_t offset, int32_t count, mscorlib::System::AsyncCallback* asyncCallback, mscorlib::System::Object* asyncState);
		void EndWrite(mscorlib::System::IAsyncResult* asyncResult);
		void Write(IL2CPP::Array<uint8_t>* array, int32_t offset, int32_t count);
		void Dispose(bool disposing);
		mscorlib::System::Threading::Tasks::Task_1<mscorlib::System::Int32>* ReadAsync(IL2CPP::Array<uint8_t>* array, int32_t offset, int32_t count, mscorlib::System::Threading::CancellationToken cancellationToken);
		mscorlib::System::Threading::Tasks::Task* WriteAsync(IL2CPP::Array<uint8_t>* array, int32_t offset, int32_t count, mscorlib::System::Threading::CancellationToken cancellationToken);
		mscorlib::System::Threading::Tasks::Task* FlushAsync(mscorlib::System::Threading::CancellationToken cancellationToken);
		void CheckDeflateStream();
		static void ThrowStreamClosedException();
	};
}

