#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_IO_Stream.h"
namespace mscorlib::System::Runtime::InteropServices { struct SafeBuffer; };
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System { struct Byte; };
#include "System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "System_IO_FileAccess.h"
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Threading::Tasks { template <typename TResult> struct Task_1; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Threading::Tasks { struct Task; };
#include "System_Threading_CancellationToken.h"
namespace mscorlib::System::Threading { struct CancellationToken; };
#include "System_Byte.h"
#include "System_IO_SeekOrigin.h"

namespace mscorlib::System::IO
{
	struct UnmanagedMemoryStream : mscorlib::System::IO::Stream
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Runtime::InteropServices::SafeBuffer* _buffer;
		uint8_t* _mem;
		int64_t _length;
		int64_t _capacity;
		int64_t _position;
		int64_t _offset;
		mscorlib::System::IO::FileAccess _access;
		bool _isOpen;
		mscorlib::System::Threading::Tasks::Task_1<mscorlib::System::Int32>* _lastReadTask;
		void _ctor();
		void _ctor(uint8_t* pointer, int64_t length);
		void _ctor(uint8_t* pointer, int64_t length, int64_t capacity, mscorlib::System::IO::FileAccess access, bool skipSecurityCheck);
		void Initialize(uint8_t* pointer, int64_t length, int64_t capacity, mscorlib::System::IO::FileAccess access, bool skipSecurityCheck);
		bool get_CanRead();
		bool get_CanSeek();
		bool get_CanWrite();
		void Dispose(bool disposing);
		void Flush();
		mscorlib::System::Threading::Tasks::Task* FlushAsync(mscorlib::System::Threading::CancellationToken cancellationToken);
		int64_t get_Length();
		int64_t get_Position();
		void set_Position(int64_t value);
		uint8_t* get_PositionPointer();
		int32_t Read(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t count);
		mscorlib::System::Threading::Tasks::Task_1<mscorlib::System::Int32>* ReadAsync(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t count, mscorlib::System::Threading::CancellationToken cancellationToken);
		int32_t ReadByte();
		int64_t Seek(int64_t offset, mscorlib::System::IO::SeekOrigin loc);
		void SetLength(int64_t value);
		void Write(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t count);
		mscorlib::System::Threading::Tasks::Task* WriteAsync(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t count, mscorlib::System::Threading::CancellationToken cancellationToken);
		void WriteByte(uint8_t value);
	};
}

