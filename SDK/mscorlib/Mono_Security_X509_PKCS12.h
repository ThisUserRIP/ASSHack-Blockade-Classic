#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System::Collections { struct ArrayList; };
namespace mscorlib::Mono::Security::X509 { struct X509CertificateCollection; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Security::Cryptography { struct RandomNumberGenerator; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Security::Cryptography { struct SymmetricAlgorithm; };
namespace mscorlib::Mono::Security { struct PKCS7_EncryptedData; };
#include "System_Security_Cryptography_DSAParameters.h"
namespace mscorlib::System::Security::Cryptography { struct DSAParameters; };
namespace mscorlib::Mono::Security::Cryptography { struct PKCS8_PrivateKeyInfo; };
namespace mscorlib::Mono::Security { struct ASN1; };
namespace mscorlib::Mono::Security::X509 { struct X509Certificate; };
namespace mscorlib::System::Collections { struct IDictionary; };
namespace mscorlib::Mono::Security { struct PKCS7_ContentInfo; };
namespace mscorlib::System { struct Object; };

namespace mscorlib::Mono::Security::X509
{
	struct PKCS12 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<uint8_t>* _password;
		mscorlib::System::Collections::ArrayList* _keyBags;
		mscorlib::System::Collections::ArrayList* _secretBags;
		mscorlib::Mono::Security::X509::X509CertificateCollection* _certs;
		bool _keyBagsChanged;
		bool _secretBagsChanged;
		bool _certsChanged;
		int32_t _iterations;
		mscorlib::System::Collections::ArrayList* _safeBags;
		mscorlib::System::Security::Cryptography::RandomNumberGenerator* _rng;
		struct StaticFields
		{
			int32_t password_max_length;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		void _ctor(IL2CPP::Array<uint8_t>* data);
		void _ctor(IL2CPP::Array<uint8_t>* data, mscorlib::System::String* password);
		void Decode(IL2CPP::Array<uint8_t>* data);
		void Finalize();
		void set_Password(mscorlib::System::String* value);
		int32_t get_IterationCount();
		void set_IterationCount(int32_t value);
		mscorlib::System::Collections::ArrayList* get_Keys();
		mscorlib::Mono::Security::X509::X509CertificateCollection* get_Certificates();
		mscorlib::System::Security::Cryptography::RandomNumberGenerator* get_RNG();
		bool Compare(IL2CPP::Array<uint8_t>* expected, IL2CPP::Array<uint8_t>* actual);
		mscorlib::System::Security::Cryptography::SymmetricAlgorithm* GetSymmetricAlgorithm(mscorlib::System::String* algorithmOid, IL2CPP::Array<uint8_t>* salt, int32_t iterationCount);
		IL2CPP::Array<uint8_t>* Decrypt(mscorlib::System::String* algorithmOid, IL2CPP::Array<uint8_t>* salt, int32_t iterationCount, IL2CPP::Array<uint8_t>* encryptedData);
		IL2CPP::Array<uint8_t>* Decrypt(mscorlib::Mono::Security::PKCS7_EncryptedData* ed);
		IL2CPP::Array<uint8_t>* Encrypt(mscorlib::System::String* algorithmOid, IL2CPP::Array<uint8_t>* salt, int32_t iterationCount, IL2CPP::Array<uint8_t>* data);
		mscorlib::System::Security::Cryptography::DSAParameters GetExistingParameters(bool& found);
		void AddPrivateKey(mscorlib::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo* pki);
		void ReadSafeBag(mscorlib::Mono::Security::ASN1* safeBag);
		mscorlib::Mono::Security::ASN1* CertificateSafeBag(mscorlib::Mono::Security::X509::X509Certificate* x509, mscorlib::System::Collections::IDictionary* attributes);
		IL2CPP::Array<uint8_t>* MAC(IL2CPP::Array<uint8_t>* password, IL2CPP::Array<uint8_t>* salt, int32_t iterations, IL2CPP::Array<uint8_t>* data);
		IL2CPP::Array<uint8_t>* GetBytes();
		mscorlib::Mono::Security::PKCS7_ContentInfo* EncryptedContentInfo(mscorlib::Mono::Security::ASN1* safeBags, mscorlib::System::String* algorithmOid);
		void AddCertificate(mscorlib::Mono::Security::X509::X509Certificate* cert);
		void AddCertificate(mscorlib::Mono::Security::X509::X509Certificate* cert, mscorlib::System::Collections::IDictionary* attributes);
		void RemoveCertificate(mscorlib::Mono::Security::X509::X509Certificate* cert);
		void RemoveCertificate(mscorlib::Mono::Security::X509::X509Certificate* cert, mscorlib::System::Collections::IDictionary* attrs);
		mscorlib::System::Object* Clone();
		static int32_t get_MaximumPasswordLength();
		static void _cctor();
	};
}

