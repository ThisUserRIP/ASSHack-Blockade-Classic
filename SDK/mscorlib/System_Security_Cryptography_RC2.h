#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Security_Cryptography_SymmetricAlgorithm.h"
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Security::Cryptography { struct KeySizes; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };

namespace mscorlib::System::Security::Cryptography
{
	struct RC2 : mscorlib::System::Security::Cryptography::SymmetricAlgorithm
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t EffectiveKeySizeValue;
		struct StaticFields
		{
			IL2CPP::Array<mscorlib::System::Security::Cryptography::KeySizes*>* s_legalBlockSizes;
			IL2CPP::Array<mscorlib::System::Security::Cryptography::KeySizes*>* s_legalKeySizes;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		int32_t get_EffectiveKeySize();
		void set_EffectiveKeySize(int32_t value);
		int32_t get_KeySize();
		void set_KeySize(int32_t value);
		static mscorlib::System::Security::Cryptography::RC2* Create();
		static mscorlib::System::Security::Cryptography::RC2* Create(mscorlib::System::String* AlgName);
		static void _cctor();
	};
}

