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
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Security_Cryptography_HashAlgorithmName.h"
namespace mscorlib::System::Security::Cryptography { struct HashAlgorithmName; };
namespace mscorlib::System::IO { struct Stream; };
#include "System_Security_Cryptography_DSAParameters.h"
namespace mscorlib::System::Security::Cryptography { struct DSAParameters; };
namespace mscorlib::System { struct Exception; };

namespace mscorlib::System::Security::Cryptography
{
	struct DSA : mscorlib::System::Security::Cryptography::AsymmetricAlgorithm
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor();
		static mscorlib::System::Security::Cryptography::DSA* Create();
		static mscorlib::System::Security::Cryptography::DSA* Create(mscorlib::System::String* algName);
		IL2CPP::Array<uint8_t>* CreateSignature(IL2CPP::Array<uint8_t>* rgbHash);
		bool VerifySignature(IL2CPP::Array<uint8_t>* rgbHash, IL2CPP::Array<uint8_t>* rgbSignature);
		IL2CPP::Array<uint8_t>* HashData(IL2CPP::Array<uint8_t>* data, int32_t offset, int32_t count, mscorlib::System::Security::Cryptography::HashAlgorithmName hashAlgorithm);
		IL2CPP::Array<uint8_t>* HashData(mscorlib::System::IO::Stream* data, mscorlib::System::Security::Cryptography::HashAlgorithmName hashAlgorithm);
		IL2CPP::Array<uint8_t>* SignData(IL2CPP::Array<uint8_t>* data, mscorlib::System::Security::Cryptography::HashAlgorithmName hashAlgorithm);
		IL2CPP::Array<uint8_t>* SignData(IL2CPP::Array<uint8_t>* data, int32_t offset, int32_t count, mscorlib::System::Security::Cryptography::HashAlgorithmName hashAlgorithm);
		IL2CPP::Array<uint8_t>* SignData(mscorlib::System::IO::Stream* data, mscorlib::System::Security::Cryptography::HashAlgorithmName hashAlgorithm);
		bool VerifyData(IL2CPP::Array<uint8_t>* data, IL2CPP::Array<uint8_t>* signature, mscorlib::System::Security::Cryptography::HashAlgorithmName hashAlgorithm);
		bool VerifyData(IL2CPP::Array<uint8_t>* data, int32_t offset, int32_t count, IL2CPP::Array<uint8_t>* signature, mscorlib::System::Security::Cryptography::HashAlgorithmName hashAlgorithm);
		bool VerifyData(mscorlib::System::IO::Stream* data, IL2CPP::Array<uint8_t>* signature, mscorlib::System::Security::Cryptography::HashAlgorithmName hashAlgorithm);
		void FromXmlString(mscorlib::System::String* xmlString);
		mscorlib::System::String* ToXmlString(bool includePrivateParameters);
		mscorlib::System::Security::Cryptography::DSAParameters ExportParameters(bool includePrivateParameters);
		void ImportParameters(mscorlib::System::Security::Cryptography::DSAParameters parameters);
		static mscorlib::System::Exception* DerivedClassMustOverride();
		static mscorlib::System::Exception* HashAlgorithmNameNullOrEmpty();
	};
}

