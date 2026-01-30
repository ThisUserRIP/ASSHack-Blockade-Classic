#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Security_Cryptography_X509Certificates_X509CertificateImpl.h"
namespace mscorlib::System::Security::Cryptography { struct AsymmetricAlgorithm; };
namespace System::System::Security::Cryptography::X509Certificates { struct PublicKey; };
namespace System::System::Security::Cryptography { struct Oid; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace System::System::Security::Cryptography::X509Certificates { struct X509CertificateImplCollection; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Security_Cryptography_X509Certificates_X509KeyStorageFlags.h"

namespace System::System::Security::Cryptography::X509Certificates
{
	struct X509Certificate2Impl : mscorlib::System::Security::Cryptography::X509Certificates::X509CertificateImpl
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Security::Cryptography::AsymmetricAlgorithm* get_PrivateKey();
		System::Security::Cryptography::X509Certificates::PublicKey* get_PublicKey();
		System::Security::Cryptography::Oid* get_SignatureAlgorithm();
		int32_t get_Version();
		System::Security::Cryptography::X509Certificates::X509CertificateImplCollection* get_IntermediateCertificates();
		void Import(IL2CPP::Array<uint8_t>* rawData, mscorlib::System::String* password, mscorlib::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags keyStorageFlags);
		void Reset();
		void _ctor();
	};
}

