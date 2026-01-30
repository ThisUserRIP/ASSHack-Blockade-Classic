#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Security_Cryptography_X509Certificates_X509Certificate2Impl.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace System::System::Security::Cryptography::X509Certificates { struct X509ExtensionCollection; };
namespace System::System::Security::Cryptography::X509Certificates { struct PublicKey; };
namespace System::System::Security::Cryptography::X509Certificates { struct X500DistinguishedName; };
namespace System::System::Security::Cryptography { struct Oid; };
namespace System::System::Security::Cryptography::X509Certificates { struct X509CertificateImplCollection; };
namespace Mono_Security::Mono::Security::X509 { struct X509Certificate; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Security::Cryptography::X509Certificates { struct X509CertificateImpl; };
#include "..\mscorlib\System_DateTime.h"
namespace mscorlib::System { struct DateTime; };
namespace mscorlib::System::Security::Cryptography { struct AsymmetricAlgorithm; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Security_Cryptography_X509Certificates_X509KeyStorageFlags.h"
namespace mscorlib::System::Text { struct StringBuilder; };

namespace System::System::Security::Cryptography::X509Certificates
{
	struct X509Certificate2ImplMono : System::Security::Cryptography::X509Certificates::X509Certificate2Impl
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool _archived;
		System::Security::Cryptography::X509Certificates::X509ExtensionCollection* _extensions;
		System::Security::Cryptography::X509Certificates::PublicKey* _publicKey;
		System::Security::Cryptography::X509Certificates::X500DistinguishedName* issuer_name;
		System::Security::Cryptography::X509Certificates::X500DistinguishedName* subject_name;
		System::Security::Cryptography::Oid* signature_algorithm;
		System::Security::Cryptography::X509Certificates::X509CertificateImplCollection* intermediateCerts;
		Mono_Security::Mono::Security::X509::X509Certificate* _cert;
		struct StaticFields
		{
			mscorlib::System::String* empty_error;
			IL2CPP::Array<uint8_t>* commonName;
			IL2CPP::Array<uint8_t>* email;
			IL2CPP::Array<uint8_t>* signedData;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		bool get_IsValid();
		void _ctor(Mono_Security::Mono::Security::X509::X509Certificate* cert);
		void _ctor(System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono* other);
		mscorlib::System::Security::Cryptography::X509Certificates::X509CertificateImpl* Clone();
		mscorlib::System::String* GetIssuerName(bool legacyV1Mode);
		mscorlib::System::String* GetSubjectName(bool legacyV1Mode);
		IL2CPP::Array<uint8_t>* GetRawCertData();
		IL2CPP::Array<uint8_t>* GetCertHash(bool lazy);
		mscorlib::System::DateTime GetValidFrom();
		mscorlib::System::DateTime GetValidUntil();
		bool Equals(mscorlib::System::Security::Cryptography::X509Certificates::X509CertificateImpl* other, bool& result);
		IL2CPP::Array<uint8_t>* GetSerialNumber();
		void _ctor();
		mscorlib::System::Security::Cryptography::AsymmetricAlgorithm* get_PrivateKey();
		System::Security::Cryptography::X509Certificates::PublicKey* get_PublicKey();
		System::Security::Cryptography::Oid* get_SignatureAlgorithm();
		int32_t get_Version();
		Mono_Security::Mono::Security::X509::X509Certificate* ImportPkcs12(IL2CPP::Array<uint8_t>* rawData, mscorlib::System::String* password);
		void Import(IL2CPP::Array<uint8_t>* rawData, mscorlib::System::String* password, mscorlib::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags keyStorageFlags);
		void Reset();
		mscorlib::System::String* ToString();
		mscorlib::System::String* ToString(bool verbose);
		static void AppendBuffer(mscorlib::System::Text::StringBuilder* sb, IL2CPP::Array<uint8_t>* buffer);
		System::Security::Cryptography::X509Certificates::X509CertificateImplCollection* get_IntermediateCertificates();
		static void _cctor();
	};
}

