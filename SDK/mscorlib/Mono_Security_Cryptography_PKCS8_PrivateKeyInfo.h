#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Mono_Security_Cryptography_PKCS8.h"
namespace mscorlib::Mono::Security::Cryptography { struct PKCS8; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System::Collections { struct ArrayList; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Security::Cryptography { struct RSA; };
namespace mscorlib::System::Security::Cryptography { struct DSA; };
#include "System_Security_Cryptography_DSAParameters.h"
namespace mscorlib::System::Security::Cryptography { struct DSAParameters; };

namespace mscorlib::Mono::Security::Cryptography
{
	struct PKCS8_PrivateKeyInfo : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t _version;
		mscorlib::System::String* _algorithm;
		IL2CPP::Array<uint8_t>* _key;
		mscorlib::System::Collections::ArrayList* _list;
		void _ctor();
		void _ctor(IL2CPP::Array<uint8_t>* data);
		IL2CPP::Array<uint8_t>* get_PrivateKey();
		void Decode(IL2CPP::Array<uint8_t>* data);
		static IL2CPP::Array<uint8_t>* RemoveLeadingZero(IL2CPP::Array<uint8_t>* bigInt);
		static IL2CPP::Array<uint8_t>* Normalize(IL2CPP::Array<uint8_t>* bigInt, int32_t length);
		static mscorlib::System::Security::Cryptography::RSA* DecodeRSA(IL2CPP::Array<uint8_t>* keypair);
		static mscorlib::System::Security::Cryptography::DSA* DecodeDSA(IL2CPP::Array<uint8_t>* privateKey, mscorlib::System::Security::Cryptography::DSAParameters dsaParameters);
	};
}

