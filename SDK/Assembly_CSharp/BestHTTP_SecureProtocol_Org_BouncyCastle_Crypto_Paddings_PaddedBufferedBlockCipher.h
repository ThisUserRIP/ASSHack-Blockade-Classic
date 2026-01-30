#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "BestHTTP_SecureProtocol_Org_BouncyCastle_Crypto_BufferedBlockCipher.h"
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Paddings { struct IBlockCipherPadding; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { struct IBlockCipher; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { struct ICipherParameters; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Paddings
{
	struct PaddedBufferedBlockCipher : Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::BufferedBlockCipher
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding* padding;
		void _ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBlockCipher* cipher, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding* padding);
		void _ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBlockCipher* cipher);
		void Init(bool forEncryption, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* parameters);
		int32_t GetOutputSize(int32_t length);
		int32_t GetUpdateOutputSize(int32_t length);
		int32_t ProcessByte(uint8_t input, IL2CPP::Array<uint8_t>* output, int32_t outOff);
		int32_t ProcessBytes(IL2CPP::Array<uint8_t>* input, int32_t inOff, int32_t length, IL2CPP::Array<uint8_t>* output, int32_t outOff);
		int32_t DoFinal(IL2CPP::Array<uint8_t>* output, int32_t outOff);
	};
}

