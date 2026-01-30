#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security { struct SecureRandom; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { struct IAsymmetricBlockCipher; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { struct ICipherParameters; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Encodings
{
	struct Pkcs1Encoding : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* random;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* engine;
		bool forEncryption;
		bool forPrivateKey;
		bool useStrictLength;
		int32_t pLen;
		IL2CPP::Array<uint8_t>* fallback;
		IL2CPP::Array<uint8_t>* blockBuffer;
		struct StaticFields
		{
			mscorlib::System::String* StrictLengthEnabledProperty;
			int32_t HeaderLength;
			IL2CPP::Array<bool>* strictLengthEnabled;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static bool get_StrictLengthEnabled();
		static void set_StrictLengthEnabled(bool value);
		static void _cctor();
		void _ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher);
		void _ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher, int32_t pLen);
		void _ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher, IL2CPP::Array<uint8_t>* fallback);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* GetUnderlyingCipher();
		mscorlib::System::String* get_AlgorithmName();
		void Init(bool forEncryption, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* parameters);
		int32_t GetInputBlockSize();
		int32_t GetOutputBlockSize();
		IL2CPP::Array<uint8_t>* ProcessBlock(IL2CPP::Array<uint8_t>* input, int32_t inOff, int32_t length);
		IL2CPP::Array<uint8_t>* EncodeBlock(IL2CPP::Array<uint8_t>* input, int32_t inOff, int32_t inLen);
		static int32_t CheckPkcs1Encoding(IL2CPP::Array<uint8_t>* encoded, int32_t pLen);
		IL2CPP::Array<uint8_t>* DecodeBlockOrRandom(IL2CPP::Array<uint8_t>* input, int32_t inOff, int32_t inLen);
		IL2CPP::Array<uint8_t>* DecodeBlock(IL2CPP::Array<uint8_t>* input, int32_t inOff, int32_t inLen);
		int32_t FindStart(uint8_t type, IL2CPP::Array<uint8_t>* block);
	};
}

