#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Mono_Security_Cryptography_SymmetricTransform.h"
namespace mscorlib::System::Security::Cryptography { struct DESTransform; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Security::Cryptography { struct TripleDES; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };

namespace mscorlib::System::Security::Cryptography
{
	struct TripleDESTransform : mscorlib::Mono::Security::Cryptography::SymmetricTransform
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Security::Cryptography::DESTransform* E1;
		mscorlib::System::Security::Cryptography::DESTransform* D2;
		mscorlib::System::Security::Cryptography::DESTransform* E3;
		mscorlib::System::Security::Cryptography::DESTransform* D1;
		mscorlib::System::Security::Cryptography::DESTransform* E2;
		mscorlib::System::Security::Cryptography::DESTransform* D3;
		void _ctor(mscorlib::System::Security::Cryptography::TripleDES* algo, bool encryption, IL2CPP::Array<uint8_t>* key, IL2CPP::Array<uint8_t>* iv);
		void ECB(IL2CPP::Array<uint8_t>* input, IL2CPP::Array<uint8_t>* output);
		static IL2CPP::Array<uint8_t>* GetStrongKey();
	};
}

