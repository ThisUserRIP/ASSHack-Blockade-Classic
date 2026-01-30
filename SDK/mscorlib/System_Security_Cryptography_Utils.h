#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Security::Cryptography { struct RNGCryptoServiceProvider; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };
#include "System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
namespace mscorlib::System { struct UInt64; };
namespace mscorlib::System { struct UInt64; };
#include "System_UInt64.h"
namespace mscorlib::System::Security::Cryptography { struct RSA; };
namespace mscorlib::System::Security::Cryptography { struct HashAlgorithm; };
namespace mscorlib::System::Security::Cryptography { struct PKCS1MaskGenerationMethod; };
namespace mscorlib::System::Security::Cryptography { struct RandomNumberGenerator; };
#include "System_Security_Cryptography_HashAlgorithmName.h"
namespace mscorlib::System::Security::Cryptography { struct HashAlgorithmName; };

namespace mscorlib::System::Security::Cryptography
{
	struct Utils : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			int32_t DefaultRsaProviderType;
			mscorlib::System::Security::Cryptography::RNGCryptoServiceProvider* _rng;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		static mscorlib::System::Security::Cryptography::RNGCryptoServiceProvider* get_StaticRandomNumberGenerator();
		static IL2CPP::Array<uint8_t>* GenerateRandom(int32_t keySize);
		static bool HasAlgorithm(int32_t dwCalg, int32_t dwKeySize);
		static mscorlib::System::String* DiscardWhiteSpaces(mscorlib::System::String* inputBuffer);
		static mscorlib::System::String* DiscardWhiteSpaces(mscorlib::System::String* inputBuffer, int32_t inputOffset, int32_t inputCount);
		static int32_t ConvertByteArrayToInt(IL2CPP::Array<uint8_t>* input);
		static IL2CPP::Array<uint8_t>* ConvertIntToByteArray(int32_t dwInput);
		static void ConvertIntToByteArray(uint32_t dwInput, IL2CPP::Array<uint8_t>& counter);
		static IL2CPP::Array<uint8_t>* FixupKeyParity(IL2CPP::Array<uint8_t>* key);
		static void DWORDFromLittleEndian(uint32_t* x, int32_t digits, uint8_t* block);
		static void DWORDToLittleEndian(IL2CPP::Array<uint8_t>* block, IL2CPP::Array<uint32_t>* x, int32_t digits);
		static void DWORDFromBigEndian(uint32_t* x, int32_t digits, uint8_t* block);
		static void DWORDToBigEndian(IL2CPP::Array<uint8_t>* block, IL2CPP::Array<uint32_t>* x, int32_t digits);
		static void QuadWordFromBigEndian(uint64_t* x, int32_t digits, uint8_t* block);
		static void QuadWordToBigEndian(IL2CPP::Array<uint8_t>* block, IL2CPP::Array<uint64_t>* x, int32_t digits);
		static IL2CPP::Array<uint8_t>* Int(uint32_t i);
		static IL2CPP::Array<uint8_t>* RsaOaepEncrypt(mscorlib::System::Security::Cryptography::RSA* rsa, mscorlib::System::Security::Cryptography::HashAlgorithm* hash, mscorlib::System::Security::Cryptography::PKCS1MaskGenerationMethod* mgf, mscorlib::System::Security::Cryptography::RandomNumberGenerator* rng, IL2CPP::Array<uint8_t>* data);
		static IL2CPP::Array<uint8_t>* RsaOaepDecrypt(mscorlib::System::Security::Cryptography::RSA* rsa, mscorlib::System::Security::Cryptography::HashAlgorithm* hash, mscorlib::System::Security::Cryptography::PKCS1MaskGenerationMethod* mgf, IL2CPP::Array<uint8_t>* encryptedData);
		static IL2CPP::Array<uint8_t>* RsaPkcs1Padding(mscorlib::System::Security::Cryptography::RSA* rsa, IL2CPP::Array<uint8_t>* oid, IL2CPP::Array<uint8_t>* hash);
		static bool CompareBigIntArrays(IL2CPP::Array<uint8_t>* lhs, IL2CPP::Array<uint8_t>* rhs);
		static mscorlib::System::Security::Cryptography::HashAlgorithmName OidToHashAlgorithmName(mscorlib::System::String* oid);
		static bool DoesRsaKeyOverride(mscorlib::System::Security::Cryptography::RSA* rsaKey, mscorlib::System::String* methodName, IL2CPP::Array<mscorlib::System::Type*>* parameterTypes);
		static bool DoesRsaKeyOverrideSlowPath(mscorlib::System::Type* t, mscorlib::System::String* methodName, IL2CPP::Array<mscorlib::System::Type*>* parameterTypes);
		static bool _ProduceLegacyHmacValues();
	};
}

