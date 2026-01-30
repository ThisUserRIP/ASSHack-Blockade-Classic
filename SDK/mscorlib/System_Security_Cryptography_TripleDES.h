#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Security_Cryptography_SymmetricAlgorithm.h"
namespace mscorlib::System::Security::Cryptography { struct KeySizes; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System { struct String; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace mscorlib::System::Security::Cryptography
{
	struct TripleDES : mscorlib::System::Security::Cryptography::SymmetricAlgorithm
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
		IL2CPP::Array<uint8_t>* get_Key();
		void set_Key(IL2CPP::Array<uint8_t>* value);
		static mscorlib::System::Security::Cryptography::TripleDES* Create();
		static mscorlib::System::Security::Cryptography::TripleDES* Create(mscorlib::System::String* str);
		static bool IsWeakKey(IL2CPP::Array<uint8_t>* rgbKey);
		static bool EqualBytes(IL2CPP::Array<uint8_t>* rgbKey, int32_t start1, int32_t start2, int32_t count);
		static bool IsLegalKeySize(IL2CPP::Array<uint8_t>* rgbKey);
		static void _cctor();
	};
}

