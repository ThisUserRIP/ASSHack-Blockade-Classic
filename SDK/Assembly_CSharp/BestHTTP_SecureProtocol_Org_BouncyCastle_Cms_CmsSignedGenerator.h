#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Collections { struct IList; };
namespace mscorlib::System::Collections { struct IDictionary; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security { struct SecureRandom; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { struct DerObjectIdentifier; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { struct AlgorithmIdentifier; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { struct Asn1Set; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms { struct AttributeTable; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store { struct IX509Store; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms { struct SignerInformationStore; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms { struct SignerInformation; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms { struct SignerIdentifier; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509 { struct X509Certificate; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms
{
	struct CmsSignedGenerator : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::IList* _certs;
		mscorlib::System::Collections::IList* _crls;
		mscorlib::System::Collections::IList* _signers;
		mscorlib::System::Collections::IDictionary* _digests;
		bool _useDerForCerts;
		bool _useDerForCrls;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* rand;
		struct StaticFields
		{
			mscorlib::System::String* Data;
			mscorlib::System::String* DigestSha1;
			mscorlib::System::String* DigestSha224;
			mscorlib::System::String* DigestSha256;
			mscorlib::System::String* DigestSha384;
			mscorlib::System::String* DigestSha512;
			mscorlib::System::String* DigestMD5;
			mscorlib::System::String* DigestGost3411;
			mscorlib::System::String* DigestRipeMD128;
			mscorlib::System::String* DigestRipeMD160;
			mscorlib::System::String* DigestRipeMD256;
			mscorlib::System::String* EncryptionRsa;
			mscorlib::System::String* EncryptionDsa;
			mscorlib::System::String* EncryptionECDsa;
			mscorlib::System::String* EncryptionRsaPss;
			mscorlib::System::String* EncryptionGost3410;
			mscorlib::System::String* EncryptionECGost3410;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		void _ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* rand);
		mscorlib::System::Collections::IDictionary* GetBaseParameters(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* contentType, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* digAlgId, IL2CPP::Array<uint8_t>* hash);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Set* GetAttributeSet(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::AttributeTable* attr);
		void AddCertificates(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Store* certStore);
		void AddCrls(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Store* crlStore);
		void AddAttributeCertificates(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Store* store);
		void AddSigners(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::SignerInformationStore* signerStore);
		mscorlib::System::Collections::IDictionary* GetGeneratedDigests();
		bool get_UseDerForCerts();
		void set_UseDerForCerts(bool value);
		bool get_UseDerForCrls();
		void set_UseDerForCrls(bool value);
		void AddSignerCallback(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::SignerInformation* si);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::SignerIdentifier* GetSignerIdentifier(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* cert);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::SignerIdentifier* GetSignerIdentifier(IL2CPP::Array<uint8_t>* subjectKeyIdentifier);
		static void _cctor();
	};
}

