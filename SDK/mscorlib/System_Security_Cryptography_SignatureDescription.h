#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Security { struct SecurityElement; };
namespace mscorlib::System::Security::Cryptography { struct AsymmetricSignatureDeformatter; };
namespace mscorlib::System::Security::Cryptography { struct AsymmetricAlgorithm; };
namespace mscorlib::System::Security::Cryptography { struct AsymmetricSignatureFormatter; };
namespace mscorlib::System::Security::Cryptography { struct HashAlgorithm; };

namespace mscorlib::System::Security::Cryptography
{
	struct SignatureDescription : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* _strKey;
		mscorlib::System::String* _strDigest;
		mscorlib::System::String* _strFormatter;
		mscorlib::System::String* _strDeformatter;
		void _ctor();
		void _ctor(mscorlib::System::Security::SecurityElement* el);
		mscorlib::System::String* get_KeyAlgorithm();
		void set_KeyAlgorithm(mscorlib::System::String* value);
		mscorlib::System::String* get_DigestAlgorithm();
		void set_DigestAlgorithm(mscorlib::System::String* value);
		mscorlib::System::String* get_FormatterAlgorithm();
		void set_FormatterAlgorithm(mscorlib::System::String* value);
		mscorlib::System::String* get_DeformatterAlgorithm();
		void set_DeformatterAlgorithm(mscorlib::System::String* value);
		mscorlib::System::Security::Cryptography::AsymmetricSignatureDeformatter* CreateDeformatter(mscorlib::System::Security::Cryptography::AsymmetricAlgorithm* key);
		mscorlib::System::Security::Cryptography::AsymmetricSignatureFormatter* CreateFormatter(mscorlib::System::Security::Cryptography::AsymmetricAlgorithm* key);
		mscorlib::System::Security::Cryptography::HashAlgorithm* CreateDigest();
	};
}

