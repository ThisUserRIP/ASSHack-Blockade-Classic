#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_IO_Stream.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "..\mscorlib\System_IO_SeekOrigin.h"
namespace mscorlib::System::IO { struct Stream; };

namespace Assembly_CSharp::BestHTTP::Extensions
{
	struct BufferPoolMemoryStream : mscorlib::System::IO::Stream
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool canWrite;
		bool allowGetBuffer;
		int32_t capacity;
		int32_t length;
		IL2CPP::Array<uint8_t>* internalBuffer;
		int32_t initialIndex;
		bool expandable;
		bool streamClosed;
		int32_t position;
		int32_t dirty_bytes;
		void _ctor();
		void _ctor(int32_t capacity);
		void _ctor(IL2CPP::Array<uint8_t>* buffer);
		void _ctor(IL2CPP::Array<uint8_t>* buffer, bool writable);
		void _ctor(IL2CPP::Array<uint8_t>* buffer, int32_t index, int32_t count);
		void _ctor(IL2CPP::Array<uint8_t>* buffer, int32_t index, int32_t count, bool writable);
		void _ctor(IL2CPP::Array<uint8_t>* buffer, int32_t index, int32_t count, bool writable, bool publiclyVisible);
		void InternalConstructor(IL2CPP::Array<uint8_t>* buffer, int32_t index, int32_t count, bool writable, bool publicallyVisible);
		void CheckIfClosedThrowDisposed();
		bool get_CanRead();
		bool get_CanSeek();
		bool get_CanWrite();
		int32_t get_Capacity();
		void set_Capacity(int32_t value);
		int64_t get_Length();
		int64_t get_Position();
		void set_Position(int64_t value);
		void Dispose(bool disposing);
		void Flush();
		IL2CPP::Array<uint8_t>* GetBuffer();
		int32_t Read(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t count);
		int32_t ReadByte();
		int64_t Seek(int64_t offset, mscorlib::System::IO::SeekOrigin loc);
		int32_t CalculateNewCapacity(int32_t minimum);
		void Expand(int32_t newSize);
		void SetLength(int64_t value);
		IL2CPP::Array<uint8_t>* ToArray();
		IL2CPP::Array<uint8_t>* ToArray(bool canBeLarger);
		void Write(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t count);
		void WriteByte(uint8_t value);
		void WriteTo(mscorlib::System::IO::Stream* stream);
	};
}

