#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Security_Cryptography_AsymmetricKeyExchangeDeformatter.h"
namespace mscorlib::System::Security::Cryptography { struct RSA; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Nullable_1.h"
namespace mscorlib::System { template <typename T> struct Nullable_1; };
namespace mscorlib::System::Security::Cryptography { struct RandomNumberGenerator; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Security::Cryptography { struct AsymmetricAlgorithm; };
namespace mscorlib::System { struct String; };
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };

namespace mscorlib::System::Security::Cryptography
{
	struct RSAPKCS1KeyExchangeDeformatter : mscorlib::System::Security::Cryptography::AsymmetricKeyExchangeDeformatter
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Security::Cryptography::RSA* _rsaKey;
		mscorlib::System::Nullable_1<mscorlib::System::Boolean> _rsaOverridesDecrypt;
		mscorlib::System::Security::Cryptography::RandomNumberGenerator* RngValue;
		void _ctor();
		void _ctor(mscorlib::System::Security::Cryptography::AsymmetricAlgorithm* key);
		mscorlib::System::Security::Cryptography::RandomNumberGenerator* get_RNG();
		void set_RNG(mscorlib::System::Security::Cryptography::RandomNumberGenerator* value);
		mscorlib::System::String* get_Parameters();
		void set_Parameters(mscorlib::System::String* value);
		IL2CPP::Array<uint8_t>* DecryptKeyExchange(IL2CPP::Array<uint8_t>* rgbIn);
		void SetKey(mscorlib::System::Security::Cryptography::AsymmetricAlgorithm* key);
		bool get_OverridesDecrypt();
	};
}

