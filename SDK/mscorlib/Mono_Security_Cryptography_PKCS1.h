#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Security::Cryptography { struct HashAlgorithm; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Security::Cryptography { struct RSA; };
namespace mscorlib::System::Security::Cryptography { struct RandomNumberGenerator; };
namespace mscorlib::System { struct String; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::Mono::Security::Cryptography
{
	struct PKCS1 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			IL2CPP::Array<uint8_t>* emptySHA1;
			IL2CPP::Array<uint8_t>* emptySHA256;
			IL2CPP::Array<uint8_t>* emptySHA384;
			IL2CPP::Array<uint8_t>* emptySHA512;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static bool Compare(IL2CPP::Array<uint8_t>* array1, IL2CPP::Array<uint8_t>* array2);
		static IL2CPP::Array<uint8_t>* xor_(IL2CPP::Array<uint8_t>* array1, IL2CPP::Array<uint8_t>* array2);
		static IL2CPP::Array<uint8_t>* GetEmptyHash(mscorlib::System::Security::Cryptography::HashAlgorithm* hash);
		static IL2CPP::Array<uint8_t>* I2OSP(int32_t x, int32_t size);
		static IL2CPP::Array<uint8_t>* I2OSP(IL2CPP::Array<uint8_t>* x, int32_t size);
		static IL2CPP::Array<uint8_t>* OS2IP(IL2CPP::Array<uint8_t>* x);
		static IL2CPP::Array<uint8_t>* RSAEP(mscorlib::System::Security::Cryptography::RSA* rsa, IL2CPP::Array<uint8_t>* m);
		static IL2CPP::Array<uint8_t>* RSADP(mscorlib::System::Security::Cryptography::RSA* rsa, IL2CPP::Array<uint8_t>* c);
		static IL2CPP::Array<uint8_t>* RSASP1(mscorlib::System::Security::Cryptography::RSA* rsa, IL2CPP::Array<uint8_t>* m);
		static IL2CPP::Array<uint8_t>* RSAVP1(mscorlib::System::Security::Cryptography::RSA* rsa, IL2CPP::Array<uint8_t>* s);
		static IL2CPP::Array<uint8_t>* Encrypt_OAEP(mscorlib::System::Security::Cryptography::RSA* rsa, mscorlib::System::Security::Cryptography::HashAlgorithm* hash, mscorlib::System::Security::Cryptography::RandomNumberGenerator* rng, IL2CPP::Array<uint8_t>* M);
		static IL2CPP::Array<uint8_t>* Decrypt_OAEP(mscorlib::System::Security::Cryptography::RSA* rsa, mscorlib::System::Security::Cryptography::HashAlgorithm* hash, IL2CPP::Array<uint8_t>* C);
		static IL2CPP::Array<uint8_t>* Sign_v15(mscorlib::System::Security::Cryptography::RSA* rsa, mscorlib::System::Security::Cryptography::HashAlgorithm* hash, IL2CPP::Array<uint8_t>* hashValue);
		static IL2CPP::Array<uint8_t>* Sign_v15(mscorlib::System::Security::Cryptography::RSA* rsa, mscorlib::System::String* hashName, IL2CPP::Array<uint8_t>* hashValue);
		static bool Verify_v15(mscorlib::System::Security::Cryptography::RSA* rsa, mscorlib::System::Security::Cryptography::HashAlgorithm* hash, IL2CPP::Array<uint8_t>* hashValue, IL2CPP::Array<uint8_t>* signature);
		static bool Verify_v15(mscorlib::System::Security::Cryptography::RSA* rsa, mscorlib::System::String* hashName, IL2CPP::Array<uint8_t>* hashValue, IL2CPP::Array<uint8_t>* signature);
		static bool Verify_v15(mscorlib::System::Security::Cryptography::RSA* rsa, mscorlib::System::Security::Cryptography::HashAlgorithm* hash, IL2CPP::Array<uint8_t>* hashValue, IL2CPP::Array<uint8_t>* signature, bool tryNonStandardEncoding);
		static IL2CPP::Array<uint8_t>* Encode_v15(mscorlib::System::Security::Cryptography::HashAlgorithm* hash, IL2CPP::Array<uint8_t>* hashValue, int32_t emLength);
		static IL2CPP::Array<uint8_t>* MGF1(mscorlib::System::Security::Cryptography::HashAlgorithm* hash, IL2CPP::Array<uint8_t>* mgfSeed, int32_t maskLen);
		static mscorlib::System::Security::Cryptography::HashAlgorithm* CreateFromName(mscorlib::System::String* name);
		static void _cctor();
	};
}

