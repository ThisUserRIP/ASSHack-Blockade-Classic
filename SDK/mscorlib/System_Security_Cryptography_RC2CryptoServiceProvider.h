#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Security_Cryptography_RC2.h"
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Security::Cryptography { struct KeySizes; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Security::Cryptography { struct ICryptoTransform; };
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };

namespace mscorlib::System::Security::Cryptography
{
	struct RC2CryptoServiceProvider : mscorlib::System::Security::Cryptography::RC2
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool m_use40bitSalt;
		struct StaticFields
		{
			IL2CPP::Array<mscorlib::System::Security::Cryptography::KeySizes*>* s_legalKeySizes;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		int32_t get_EffectiveKeySize();
		void set_EffectiveKeySize(int32_t value);
		bool get_UseSalt();
		void set_UseSalt(bool value);
		mscorlib::System::Security::Cryptography::ICryptoTransform* CreateEncryptor(IL2CPP::Array<uint8_t>* rgbKey, IL2CPP::Array<uint8_t>* rgbIV);
		mscorlib::System::Security::Cryptography::ICryptoTransform* CreateDecryptor(IL2CPP::Array<uint8_t>* rgbKey, IL2CPP::Array<uint8_t>* rgbIV);
		void GenerateKey();
		void GenerateIV();
		static void _cctor();
	};
}

