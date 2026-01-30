#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { struct IBasicAgreement; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { struct IDerivationFunction; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { struct IMac; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { struct BufferedBlockCipher; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { struct ICipherParameters; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters { struct IesParameters; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters { struct KdfParameters; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Engines
{
	struct IesEngine : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBasicAgreement* agree;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDerivationFunction* kdf;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IMac* mac;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::BufferedBlockCipher* cipher;
		IL2CPP::Array<uint8_t>* macBuf;
		bool forEncryption;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* privParam;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* pubParam;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::IesParameters* param;
		void _ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBasicAgreement* agree, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDerivationFunction* kdf, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IMac* mac);
		void _ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBasicAgreement* agree, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDerivationFunction* kdf, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IMac* mac, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::BufferedBlockCipher* cipher);
		void Init(bool forEncryption, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* privParameters, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* pubParameters, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* iesParameters);
		IL2CPP::Array<uint8_t>* DecryptBlock(IL2CPP::Array<uint8_t>* in_enc, int32_t inOff, int32_t inLen, IL2CPP::Array<uint8_t>* z);
		IL2CPP::Array<uint8_t>* EncryptBlock(IL2CPP::Array<uint8_t>* input, int32_t inOff, int32_t inLen, IL2CPP::Array<uint8_t>* z);
		IL2CPP::Array<uint8_t>* GenerateKdfBytes(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::KdfParameters* kParam, int32_t length);
		IL2CPP::Array<uint8_t>* ProcessBlock(IL2CPP::Array<uint8_t>* input, int32_t inOff, int32_t inLen);
	};
}

