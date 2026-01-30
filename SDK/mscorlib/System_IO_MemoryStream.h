#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_IO_Stream.h"
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Threading::Tasks { template <typename TResult> struct Task_1; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Threading::Tasks { struct Task; };
#include "System_Threading_CancellationToken.h"
namespace mscorlib::System::Threading { struct CancellationToken; };
#include "System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "System_IO_SeekOrigin.h"
namespace mscorlib::System::IO { struct Stream; };

namespace mscorlib::System::IO
{
	struct MemoryStream : mscorlib::System::IO::Stream
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<uint8_t>* _buffer;
		int32_t _origin;
		int32_t _position;
		int32_t _length;
		int32_t _capacity;
		bool _expandable;
		bool _writable;
		bool _exposable;
		bool _isOpen;
		mscorlib::System::Threading::Tasks::Task_1<mscorlib::System::Int32>* _lastReadTask;
		void _ctor();
		void _ctor(int32_t capacity);
		void _ctor(IL2CPP::Array<uint8_t>* buffer);
		void _ctor(IL2CPP::Array<uint8_t>* buffer, bool writable);
		void _ctor(IL2CPP::Array<uint8_t>* buffer, int32_t index, int32_t count);
		void _ctor(IL2CPP::Array<uint8_t>* buffer, int32_t index, int32_t count, bool writable);
		void _ctor(IL2CPP::Array<uint8_t>* buffer, int32_t index, int32_t count, bool writable, bool publiclyVisible);
		bool get_CanRead();
		bool get_CanSeek();
		bool get_CanWrite();
		void EnsureWriteable();
		void Dispose(bool disposing);
		bool EnsureCapacity(int32_t value);
		void Flush();
		mscorlib::System::Threading::Tasks::Task* FlushAsync(mscorlib::System::Threading::CancellationToken cancellationToken);
		IL2CPP::Array<uint8_t>* GetBuffer();
		IL2CPP::Array<uint8_t>* InternalGetBuffer();
		int32_t InternalGetPosition();
		int32_t InternalReadInt32();
		int32_t InternalEmulateRead(int32_t count);
		int32_t get_Capacity();
		void set_Capacity(int32_t value);
		int64_t get_Length();
		int64_t get_Position();
		void set_Position(int64_t value);
		int32_t Read(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t count);
		mscorlib::System::Threading::Tasks::Task_1<mscorlib::System::Int32>* ReadAsync(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t count, mscorlib::System::Threading::CancellationToken cancellationToken);
		int32_t ReadByte();
		int64_t Seek(int64_t offset, mscorlib::System::IO::SeekOrigin loc);
		void SetLength(int64_t value);
		IL2CPP::Array<uint8_t>* ToArray();
		void Write(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t count);
		mscorlib::System::Threading::Tasks::Task* WriteAsync(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t count, mscorlib::System::Threading::CancellationToken cancellationToken);
		void WriteByte(uint8_t value);
		void WriteTo(mscorlib::System::IO::Stream* stream);
	};
}

