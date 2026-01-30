#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Security_Cryptography_AsymmetricSignatureDeformatter.h"
namespace mscorlib::System::Security::Cryptography { struct RSA; };
namespace mscorlib::System { struct String; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Security::Cryptography { struct AsymmetricAlgorithm; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };

namespace mscorlib::System::Security::Cryptography
{
	struct RSAPKCS1SignatureDeformatter : mscorlib::System::Security::Cryptography::AsymmetricSignatureDeformatter
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Security::Cryptography::RSA* rsa;
		mscorlib::System::String* hashName;
		void _ctor();
		void _ctor(mscorlib::System::Security::Cryptography::AsymmetricAlgorithm* key);
		void SetHashAlgorithm(mscorlib::System::String* strName);
		void SetKey(mscorlib::System::Security::Cryptography::AsymmetricAlgorithm* key);
		bool VerifySignature(IL2CPP::Array<uint8_t>* rgbHash, IL2CPP::Array<uint8_t>* rgbSignature);
	};
}

