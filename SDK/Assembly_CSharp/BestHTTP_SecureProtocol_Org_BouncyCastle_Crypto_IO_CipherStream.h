#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_IO_Stream.h"
namespace mscorlib::System::IO { struct Stream; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { struct IBufferedCipher; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "..\mscorlib\System_IO_SeekOrigin.h"

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IO
{
	struct CipherStream : mscorlib::System::IO::Stream
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::IO::Stream* stream;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBufferedCipher* inCipher;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBufferedCipher* outCipher;
		IL2CPP::Array<uint8_t>* mInBuf;
		int32_t mInPos;
		bool inStreamEnded;
		void _ctor(mscorlib::System::IO::Stream* stream, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBufferedCipher* readCipher, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBufferedCipher* writeCipher);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBufferedCipher* get_ReadCipher();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBufferedCipher* get_WriteCipher();
		int32_t ReadByte();
		int32_t Read(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t count);
		bool FillInBuf();
		IL2CPP::Array<uint8_t>* ReadAndProcessBlock();
		void Write(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t count);
		void WriteByte(uint8_t b);
		bool get_CanRead();
		bool get_CanWrite();
		bool get_CanSeek();
		int64_t get_Length();
		int64_t get_Position();
		void set_Position(int64_t value);
		void Close();
		void Flush();
		int64_t Seek(int64_t offset, mscorlib::System::IO::SeekOrigin origin);
		void SetLength(int64_t length);
	};
}

