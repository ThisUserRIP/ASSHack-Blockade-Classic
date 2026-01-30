#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::Security::Cryptography { struct AsymmetricAlgorithm; };
namespace System::System::Security::Cryptography { struct AsnEncodedData; };
namespace System::System::Security::Cryptography { struct Oid; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Mono_Security::Mono::Security::X509 { struct X509Certificate; };
namespace mscorlib::System::Security::Cryptography { struct DSA; };
namespace mscorlib::System::Security::Cryptography { struct RSA; };

namespace System::System::Security::Cryptography::X509Certificates
{
	struct PublicKey : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Security::Cryptography::AsymmetricAlgorithm* _key;
		System::Security::Cryptography::AsnEncodedData* _keyValue;
		System::Security::Cryptography::AsnEncodedData* _params;
		System::Security::Cryptography::Oid* _oid;
		struct StaticFields
		{
			IL2CPP::Array<uint8_t>* Empty;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(Mono_Security::Mono::Security::X509::X509Certificate* certificate);
		System::Security::Cryptography::AsnEncodedData* get_EncodedKeyValue();
		System::Security::Cryptography::AsnEncodedData* get_EncodedParameters();
		mscorlib::System::Security::Cryptography::AsymmetricAlgorithm* get_Key();
		System::Security::Cryptography::Oid* get_Oid();
		static IL2CPP::Array<uint8_t>* GetUnsignedBigInteger(IL2CPP::Array<uint8_t>* integer);
		static mscorlib::System::Security::Cryptography::DSA* DecodeDSA(IL2CPP::Array<uint8_t>* rawPublicKey, IL2CPP::Array<uint8_t>* rawParameters);
		static mscorlib::System::Security::Cryptography::RSA* DecodeRSA(IL2CPP::Array<uint8_t>* rawPublicKey);
		static void _cctor();
	};
}

