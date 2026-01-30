#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_IO_Stream.h"
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib { struct ZStream; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System::IO { struct Stream; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "..\mscorlib\System_IO_SeekOrigin.h"

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib
{
	struct ZInflaterInputStream : mscorlib::System::IO::Stream
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::ZStream* z;
		int32_t flushLevel;
		IL2CPP::Array<uint8_t>* buf;
		IL2CPP::Array<uint8_t>* buf1;
		mscorlib::System::IO::Stream* inp;
		bool nomoreinput;
		struct StaticFields
		{
			int32_t BUFSIZE;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(mscorlib::System::IO::Stream* inp);
		void _ctor(mscorlib::System::IO::Stream* inp, bool nowrap);
		bool get_CanRead();
		bool get_CanSeek();
		bool get_CanWrite();
		int64_t get_Length();
		int64_t get_Position();
		void set_Position(int64_t value);
		void Write(IL2CPP::Array<uint8_t>* b, int32_t off, int32_t len);
		int64_t Seek(int64_t offset, mscorlib::System::IO::SeekOrigin origin);
		void SetLength(int64_t value);
		int32_t Read(IL2CPP::Array<uint8_t>* b, int32_t off, int32_t len);
		void Flush();
		void WriteByte(uint8_t b);
		void Close();
		int32_t ReadByte();
	};
}

