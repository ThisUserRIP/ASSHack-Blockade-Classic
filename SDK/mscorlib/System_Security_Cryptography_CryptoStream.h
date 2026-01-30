#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_IO_Stream.h"
namespace mscorlib::System::IO { struct Stream; };
namespace mscorlib::System::Security::Cryptography { struct ICryptoTransform; };
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Security_Cryptography_CryptoStreamMode.h"
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Int64.h"
namespace mscorlib::System { struct Int64; };
namespace mscorlib::System::Threading::Tasks { struct Task; };
#include "System_Threading_CancellationToken.h"
namespace mscorlib::System::Threading { struct CancellationToken; };
#include "System_IO_SeekOrigin.h"
namespace mscorlib::System::Threading::Tasks { template <typename TResult> struct Task_1; };

namespace mscorlib::System::Security::Cryptography
{
	struct CryptoStream : mscorlib::System::IO::Stream
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::IO::Stream* _stream;
		mscorlib::System::Security::Cryptography::ICryptoTransform* _Transform;
		IL2CPP::Array<uint8_t>* _InputBuffer;
		int32_t _InputBufferIndex;
		int32_t _InputBlockSize;
		IL2CPP::Array<uint8_t>* _OutputBuffer;
		int32_t _OutputBufferIndex;
		int32_t _OutputBlockSize;
		mscorlib::System::Security::Cryptography::CryptoStreamMode _transformMode;
		bool _canRead;
		bool _canWrite;
		bool _finalBlockTransformed;
		void _ctor(mscorlib::System::IO::Stream* stream, mscorlib::System::Security::Cryptography::ICryptoTransform* transform, mscorlib::System::Security::Cryptography::CryptoStreamMode mode);
		bool get_CanRead();
		bool get_CanSeek();
		bool get_CanWrite();
		int64_t get_Length();
		int64_t get_Position();
		void set_Position(int64_t value);
		bool get_HasFlushedFinalBlock();
		void FlushFinalBlock();
		void Flush();
		mscorlib::System::Threading::Tasks::Task* FlushAsync(mscorlib::System::Threading::CancellationToken cancellationToken);
		int64_t Seek(int64_t offset, mscorlib::System::IO::SeekOrigin origin);
		void SetLength(int64_t value);
		int32_t Read(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t count);
		mscorlib::System::Threading::Tasks::Task_1<mscorlib::System::Int32>* ReadAsync(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t count, mscorlib::System::Threading::CancellationToken cancellationToken);
		mscorlib::System::Threading::Tasks::Task_1<mscorlib::System::Int32>* ReadAsyncInternal(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t count, mscorlib::System::Threading::CancellationToken cancellationToken);
		void Write(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t count);
		mscorlib::System::Threading::Tasks::Task* WriteAsync(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t count, mscorlib::System::Threading::CancellationToken cancellationToken);
		mscorlib::System::Threading::Tasks::Task* WriteAsyncInternal(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t count, mscorlib::System::Threading::CancellationToken cancellationToken);
		void Clear();
		void Dispose(bool disposing);
		void InitializeBuffer();
	};
}

