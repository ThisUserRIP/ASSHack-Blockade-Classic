#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_IO_Stream.h"
namespace mscorlib::System::IO { struct Stream; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "..\mscorlib\System_IO_SeekOrigin.h"

namespace Assembly_CSharp::BestHTTP::Extensions
{
	struct ReadOnlyBufferedStream : mscorlib::System::IO::Stream
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::IO::Stream* stream;
		IL2CPP::Array<uint8_t>* buf;
		int32_t available;
		int32_t pos;
		struct StaticFields
		{
			int32_t READBUFFER;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(mscorlib::System::IO::Stream* nstream);
		void _ctor(mscorlib::System::IO::Stream* nstream, int32_t bufferSize);
		int32_t Read(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t size);
		int32_t ReadByte();
		void Dispose(bool disposing);
		bool get_CanRead();
		bool get_CanSeek();
		bool get_CanWrite();
		int64_t get_Length();
		int64_t get_Position();
		void set_Position(int64_t value);
		void Flush();
		int64_t Seek(int64_t offset, mscorlib::System::IO::SeekOrigin origin);
		void SetLength(int64_t value);
		void Write(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t count);
	};
}

