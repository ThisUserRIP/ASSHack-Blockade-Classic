#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "BestHTTP_SecureProtocol_Org_BouncyCastle_Crypto_BufferedCipherBase.h"
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { struct IBlockCipher; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { struct ICipherParameters; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto
{
	struct BufferedBlockCipher : Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::BufferedCipherBase
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<uint8_t>* buf;
		int32_t bufOff;
		bool forEncryption;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBlockCipher* cipher;
		void _ctor();
		void _ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBlockCipher* cipher);
		mscorlib::System::String* get_AlgorithmName();
		void Init(bool forEncryption, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* parameters);
		int32_t GetBlockSize();
		int32_t GetUpdateOutputSize(int32_t length);
		int32_t GetOutputSize(int32_t length);
		int32_t ProcessByte(uint8_t input, IL2CPP::Array<uint8_t>* output, int32_t outOff);
		IL2CPP::Array<uint8_t>* ProcessByte(uint8_t input);
		IL2CPP::Array<uint8_t>* ProcessBytes(IL2CPP::Array<uint8_t>* input, int32_t inOff, int32_t length);
		int32_t ProcessBytes(IL2CPP::Array<uint8_t>* input, int32_t inOff, int32_t length, IL2CPP::Array<uint8_t>* output, int32_t outOff);
		IL2CPP::Array<uint8_t>* DoFinal();
		IL2CPP::Array<uint8_t>* DoFinal(IL2CPP::Array<uint8_t>* input, int32_t inOff, int32_t inLen);
		int32_t DoFinal(IL2CPP::Array<uint8_t>* output, int32_t outOff);
		void Reset();
	};
}

