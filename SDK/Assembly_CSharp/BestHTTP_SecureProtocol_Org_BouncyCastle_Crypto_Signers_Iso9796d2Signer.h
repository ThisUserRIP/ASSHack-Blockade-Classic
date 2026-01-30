#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { struct IDigest; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { struct IAsymmetricBlockCipher; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { struct ICipherParameters; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Signers
{
	struct Iso9796d2Signer : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* digest;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher;
		int32_t trailer;
		int32_t keyBits;
		IL2CPP::Array<uint8_t>* block;
		IL2CPP::Array<uint8_t>* mBuf;
		int32_t messageLength;
		bool fullMessage;
		IL2CPP::Array<uint8_t>* recoveredMessage;
		IL2CPP::Array<uint8_t>* preSig;
		IL2CPP::Array<uint8_t>* preBlock;
		struct StaticFields
		{
			int32_t TrailerImplicit;
			int32_t TrailerRipeMD160;
			int32_t TrailerRipeMD128;
			int32_t TrailerSha1;
			int32_t TrailerSha256;
			int32_t TrailerSha512;
			int32_t TrailerSha384;
			int32_t TrailerWhirlpool;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		IL2CPP::Array<uint8_t>* GetRecoveredMessage();
		void _ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* digest, bool isImplicit);
		void _ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* digest);
		mscorlib::System::String* get_AlgorithmName();
		void Init(bool forSigning, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* parameters);
		bool IsSameAs(IL2CPP::Array<uint8_t>* a, IL2CPP::Array<uint8_t>* b);
		void ClearBlock(IL2CPP::Array<uint8_t>* block);
		void UpdateWithRecoveredMessage(IL2CPP::Array<uint8_t>* signature);
		void Update(uint8_t input);
		void BlockUpdate(IL2CPP::Array<uint8_t>* input, int32_t inOff, int32_t length);
		void Reset();
		IL2CPP::Array<uint8_t>* GenerateSignature();
		bool VerifySignature(IL2CPP::Array<uint8_t>* signature);
		bool ReturnFalse(IL2CPP::Array<uint8_t>* block);
		bool HasFullMessage();
	};
}

