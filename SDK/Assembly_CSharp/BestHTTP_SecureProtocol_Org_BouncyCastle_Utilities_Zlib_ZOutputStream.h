#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_IO_Stream.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib { struct ZStream; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::IO { struct Stream; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "..\mscorlib\System_IO_SeekOrigin.h"

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib
{
	struct ZOutputStream : mscorlib::System::IO::Stream
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::ZStream* z;
		int32_t flushLevel;
		IL2CPP::Array<uint8_t>* buf;
		IL2CPP::Array<uint8_t>* buf1;
		bool compress;
		mscorlib::System::IO::Stream* output;
		bool closed;
		struct StaticFields
		{
			int32_t BufferSize;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::ZStream* GetDefaultZStream(bool nowrap);
		void _ctor(mscorlib::System::IO::Stream* output);
		void _ctor(mscorlib::System::IO::Stream* output, bool nowrap);
		void _ctor(mscorlib::System::IO::Stream* output, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::ZStream* z);
		void _ctor(mscorlib::System::IO::Stream* output, int32_t level);
		void _ctor(mscorlib::System::IO::Stream* output, int32_t level, bool nowrap);
		bool get_CanRead();
		bool get_CanSeek();
		bool get_CanWrite();
		void Close();
		void DoClose();
		void End();
		void Finish();
		void Flush();
		int32_t get_FlushMode();
		void set_FlushMode(int32_t value);
		int64_t get_Length();
		int64_t get_Position();
		void set_Position(int64_t value);
		int32_t Read(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t count);
		int64_t Seek(int64_t offset, mscorlib::System::IO::SeekOrigin origin);
		void SetLength(int64_t value);
		int64_t get_TotalIn();
		int64_t get_TotalOut();
		void Write(IL2CPP::Array<uint8_t>* b, int32_t off, int32_t len);
		void WriteByte(uint8_t b);
	};
}

