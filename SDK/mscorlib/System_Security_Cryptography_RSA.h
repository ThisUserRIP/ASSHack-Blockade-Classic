#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Security_Cryptography_AsymmetricAlgorithm.h"
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System::Security::Cryptography { struct RSAEncryptionPadding; };
#include "System_Security_Cryptography_HashAlgorithmName.h"
namespace mscorlib::System::Security::Cryptography { struct HashAlgorithmName; };
namespace mscorlib::System::Security::Cryptography { struct RSASignaturePadding; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::IO { struct Stream; };
namespace mscorlib::System { struct Exception; };
#include "System_Security_Cryptography_RSAParameters.h"
namespace mscorlib::System::Security::Cryptography { struct RSAParameters; };

namespace mscorlib::System::Security::Cryptography
{
	struct RSA : mscorlib::System::Security::Cryptography::AsymmetricAlgorithm
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor();
		static mscorlib::System::Security::Cryptography::RSA* Create();
		static mscorlib::System::Security::Cryptography::RSA* Create(mscorlib::System::String* algName);
		IL2CPP::Array<uint8_t>* Encrypt(IL2CPP::Array<uint8_t>* data, mscorlib::System::Security::Cryptography::RSAEncryptionPadding* padding);
		IL2CPP::Array<uint8_t>* Decrypt(IL2CPP::Array<uint8_t>* data, mscorlib::System::Security::Cryptography::RSAEncryptionPadding* padding);
		IL2CPP::Array<uint8_t>* SignHash(IL2CPP::Array<uint8_t>* hash, mscorlib::System::Security::Cryptography::HashAlgorithmName hashAlgorithm, mscorlib::System::Security::Cryptography::RSASignaturePadding* padding);
		bool VerifyHash(IL2CPP::Array<uint8_t>* hash, IL2CPP::Array<uint8_t>* signature, mscorlib::System::Security::Cryptography::HashAlgorithmName hashAlgorithm, mscorlib::System::Security::Cryptography::RSASignaturePadding* padding);
		IL2CPP::Array<uint8_t>* HashData(IL2CPP::Array<uint8_t>* data, int32_t offset, int32_t count, mscorlib::System::Security::Cryptography::HashAlgorithmName hashAlgorithm);
		IL2CPP::Array<uint8_t>* HashData(mscorlib::System::IO::Stream* data, mscorlib::System::Security::Cryptography::HashAlgorithmName hashAlgorithm);
		IL2CPP::Array<uint8_t>* SignData(IL2CPP::Array<uint8_t>* data, mscorlib::System::Security::Cryptography::HashAlgorithmName hashAlgorithm, mscorlib::System::Security::Cryptography::RSASignaturePadding* padding);
		IL2CPP::Array<uint8_t>* SignData(IL2CPP::Array<uint8_t>* data, int32_t offset, int32_t count, mscorlib::System::Security::Cryptography::HashAlgorithmName hashAlgorithm, mscorlib::System::Security::Cryptography::RSASignaturePadding* padding);
		IL2CPP::Array<uint8_t>* SignData(mscorlib::System::IO::Stream* data, mscorlib::System::Security::Cryptography::HashAlgorithmName hashAlgorithm, mscorlib::System::Security::Cryptography::RSASignaturePadding* padding);
		bool VerifyData(IL2CPP::Array<uint8_t>* data, IL2CPP::Array<uint8_t>* signature, mscorlib::System::Security::Cryptography::HashAlgorithmName hashAlgorithm, mscorlib::System::Security::Cryptography::RSASignaturePadding* padding);
		bool VerifyData(IL2CPP::Array<uint8_t>* data, int32_t offset, int32_t count, IL2CPP::Array<uint8_t>* signature, mscorlib::System::Security::Cryptography::HashAlgorithmName hashAlgorithm, mscorlib::System::Security::Cryptography::RSASignaturePadding* padding);
		bool VerifyData(mscorlib::System::IO::Stream* data, IL2CPP::Array<uint8_t>* signature, mscorlib::System::Security::Cryptography::HashAlgorithmName hashAlgorithm, mscorlib::System::Security::Cryptography::RSASignaturePadding* padding);
		static mscorlib::System::Exception* DerivedClassMustOverride();
		static mscorlib::System::Exception* HashAlgorithmNameNullOrEmpty();
		IL2CPP::Array<uint8_t>* DecryptValue(IL2CPP::Array<uint8_t>* rgb);
		IL2CPP::Array<uint8_t>* EncryptValue(IL2CPP::Array<uint8_t>* rgb);
		mscorlib::System::String* get_KeyExchangeAlgorithm();
		mscorlib::System::String* get_SignatureAlgorithm();
		void FromXmlString(mscorlib::System::String* xmlString);
		mscorlib::System::String* ToXmlString(bool includePrivateParameters);
		mscorlib::System::Security::Cryptography::RSAParameters ExportParameters(bool includePrivateParameters);
		void ImportParameters(mscorlib::System::Security::Cryptography::RSAParameters parameters);
	};
}

