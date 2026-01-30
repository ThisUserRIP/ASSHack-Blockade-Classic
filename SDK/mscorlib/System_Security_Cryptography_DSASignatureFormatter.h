#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Security_Cryptography_AsymmetricSignatureFormatter.h"
namespace mscorlib::System::Security::Cryptography { struct DSA; };
namespace mscorlib::System { struct String; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Security::Cryptography { struct AsymmetricAlgorithm; };
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };

namespace mscorlib::System::Security::Cryptography
{
	struct DSASignatureFormatter : mscorlib::System::Security::Cryptography::AsymmetricSignatureFormatter
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Security::Cryptography::DSA* _dsaKey;
		mscorlib::System::String* _oid;
		void _ctor();
		void _ctor(mscorlib::System::Security::Cryptography::AsymmetricAlgorithm* key);
		void SetKey(mscorlib::System::Security::Cryptography::AsymmetricAlgorithm* key);
		void SetHashAlgorithm(mscorlib::System::String* strName);
		IL2CPP::Array<uint8_t>* CreateSignature(IL2CPP::Array<uint8_t>* rgbHash);
	};
}

