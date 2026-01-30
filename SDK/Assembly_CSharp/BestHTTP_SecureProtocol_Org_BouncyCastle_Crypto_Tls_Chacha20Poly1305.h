#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { struct TlsContext; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Engines { struct ChaCha7539Engine; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters { struct KeyParameter; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { struct IStreamCipher; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { struct IMac; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	struct Chacha20Poly1305 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsContext* context;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Engines::ChaCha7539Engine* encryptCipher;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Engines::ChaCha7539Engine* decryptCipher;
		IL2CPP::Array<uint8_t>* encryptIV;
		IL2CPP::Array<uint8_t>* decryptIV;
		struct StaticFields
		{
			IL2CPP::Array<uint8_t>* Zeroes;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsContext* context);
		int32_t GetPlaintextLimit(int32_t ciphertextLimit);
		IL2CPP::Array<uint8_t>* EncodePlaintext(int64_t seqNo, uint8_t type, IL2CPP::Array<uint8_t>* plaintext, int32_t offset, int32_t len);
		IL2CPP::Array<uint8_t>* DecodeCiphertext(int64_t seqNo, uint8_t type, IL2CPP::Array<uint8_t>* ciphertext, int32_t offset, int32_t len);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::KeyParameter* InitRecord(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IStreamCipher* cipher, bool forEncryption, int64_t seqNo, IL2CPP::Array<uint8_t>* iv);
		IL2CPP::Array<uint8_t>* CalculateNonce(int64_t seqNo, IL2CPP::Array<uint8_t>* iv);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::KeyParameter* GenerateRecordMacKey(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IStreamCipher* cipher);
		IL2CPP::Array<uint8_t>* CalculateRecordMac(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::KeyParameter* macKey, IL2CPP::Array<uint8_t>* additionalData, IL2CPP::Array<uint8_t>* buf, int32_t off, int32_t len);
		void UpdateRecordMacLength(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IMac* mac, int32_t len);
		void UpdateRecordMacText(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IMac* mac, IL2CPP::Array<uint8_t>* buf, int32_t off, int32_t len);
		IL2CPP::Array<uint8_t>* GetAdditionalData(int64_t seqNo, uint8_t type, int32_t len);
		static void _cctor();
	};
}

