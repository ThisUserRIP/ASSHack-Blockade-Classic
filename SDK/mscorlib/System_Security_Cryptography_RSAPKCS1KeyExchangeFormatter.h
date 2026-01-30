#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Security_Cryptography_AsymmetricKeyExchangeFormatter.h"
namespace mscorlib::System::Security::Cryptography { struct RandomNumberGenerator; };
namespace mscorlib::System::Security::Cryptography { struct RSA; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Nullable_1.h"
namespace mscorlib::System { template <typename T> struct Nullable_1; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Security::Cryptography { struct AsymmetricAlgorithm; };
namespace mscorlib::System { struct String; };
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };

namespace mscorlib::System::Security::Cryptography
{
	struct RSAPKCS1KeyExchangeFormatter : mscorlib::System::Security::Cryptography::AsymmetricKeyExchangeFormatter
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Security::Cryptography::RandomNumberGenerator* RngValue;
		mscorlib::System::Security::Cryptography::RSA* _rsaKey;
		mscorlib::System::Nullable_1<mscorlib::System::Boolean> _rsaOverridesEncrypt;
		void _ctor();
		void _ctor(mscorlib::System::Security::Cryptography::AsymmetricAlgorithm* key);
		mscorlib::System::String* get_Parameters();
		mscorlib::System::Security::Cryptography::RandomNumberGenerator* get_Rng();
		void set_Rng(mscorlib::System::Security::Cryptography::RandomNumberGenerator* value);
		void SetKey(mscorlib::System::Security::Cryptography::AsymmetricAlgorithm* key);
		IL2CPP::Array<uint8_t>* CreateKeyExchange(IL2CPP::Array<uint8_t>* rgbData);
		IL2CPP::Array<uint8_t>* CreateKeyExchange(IL2CPP::Array<uint8_t>* rgbData, mscorlib::System::Type* symAlgType);
		bool get_OverridesEncrypt();
	};
}

