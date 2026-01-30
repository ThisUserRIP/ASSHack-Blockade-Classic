#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Security_Cryptography_SignatureDescription.h"
namespace mscorlib::System { struct String; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Security::Cryptography { struct AsymmetricSignatureDeformatter; };
namespace mscorlib::System::Security::Cryptography { struct AsymmetricAlgorithm; };
namespace mscorlib::System::Security::Cryptography { struct AsymmetricSignatureFormatter; };

namespace mscorlib::System::Security::Cryptography
{
	struct RSAPKCS1SignatureDescription : mscorlib::System::Security::Cryptography::SignatureDescription
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* _hashAlgorithm;
		void _ctor(mscorlib::System::String* hashAlgorithm, mscorlib::System::String* digestAlgorithm);
		mscorlib::System::Security::Cryptography::AsymmetricSignatureDeformatter* CreateDeformatter(mscorlib::System::Security::Cryptography::AsymmetricAlgorithm* key);
		mscorlib::System::Security::Cryptography::AsymmetricSignatureFormatter* CreateFormatter(mscorlib::System::Security::Cryptography::AsymmetricAlgorithm* key);
	};
}

