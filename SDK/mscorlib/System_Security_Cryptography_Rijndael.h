#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Security_Cryptography_SymmetricAlgorithm.h"
namespace mscorlib::System::Security::Cryptography { struct KeySizes; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };

namespace mscorlib::System::Security::Cryptography
{
	struct Rijndael : mscorlib::System::Security::Cryptography::SymmetricAlgorithm
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			IL2CPP::Array<mscorlib::System::Security::Cryptography::KeySizes*>* s_legalBlockSizes;
			IL2CPP::Array<mscorlib::System::Security::Cryptography::KeySizes*>* s_legalKeySizes;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		static mscorlib::System::Security::Cryptography::Rijndael* Create();
		static mscorlib::System::Security::Cryptography::Rijndael* Create(mscorlib::System::String* algName);
		static void _cctor();
	};
}

