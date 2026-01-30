#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Security::Cryptography { struct AsymmetricAlgorithm; };
namespace mscorlib::System { struct String; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Security::Cryptography { struct HashAlgorithm; };
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };

namespace mscorlib::System::Security::Cryptography
{
	struct AsymmetricSignatureDeformatter : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor();
		void SetKey(mscorlib::System::Security::Cryptography::AsymmetricAlgorithm* key);
		void SetHashAlgorithm(mscorlib::System::String* strName);
		bool VerifySignature(mscorlib::System::Security::Cryptography::HashAlgorithm* hash, IL2CPP::Array<uint8_t>* rgbSignature);
		bool VerifySignature(IL2CPP::Array<uint8_t>* rgbHash, IL2CPP::Array<uint8_t>* rgbSignature);
	};
}

