#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { struct TlsContext; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { struct IMac; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { struct IDigest; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	struct TlsMac : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsContext* context;
		IL2CPP::Array<uint8_t>* secret;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IMac* mac;
		int32_t digestBlockSize;
		int32_t digestOverhead;
		int32_t macLength;
		void _ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsContext* context, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* digest, IL2CPP::Array<uint8_t>* key, int32_t keyOff, int32_t keyLen);
		IL2CPP::Array<uint8_t>* get_MacSecret();
		int32_t get_Size();
		IL2CPP::Array<uint8_t>* CalculateMac(int64_t seqNo, uint8_t type, IL2CPP::Array<uint8_t>* message, int32_t offset, int32_t length);
		IL2CPP::Array<uint8_t>* CalculateMacConstantTime(int64_t seqNo, uint8_t type, IL2CPP::Array<uint8_t>* message, int32_t offset, int32_t length, int32_t fullLength, IL2CPP::Array<uint8_t>* dummyData);
		int32_t GetDigestBlockCount(int32_t inputLength);
		IL2CPP::Array<uint8_t>* Truncate(IL2CPP::Array<uint8_t>* bs);
	};
}

