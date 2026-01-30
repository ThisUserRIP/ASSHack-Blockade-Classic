#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { struct X509ExtensionsGenerator; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { struct V2TbsCertListGenerator; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { struct DerObjectIdentifier; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { struct AlgorithmIdentifier; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { struct X509Name; };
#include "..\mscorlib\System_DateTime.h"
namespace mscorlib::System { struct DateTime; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math { struct BigInteger; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { struct X509Extensions; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509 { struct X509Crl; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { struct Asn1Encodable; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { struct AsymmetricKeyParameter; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security { struct SecureRandom; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { struct ISignatureFactory; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { struct TbsCertificateList; };
namespace mscorlib::System::Collections { struct IEnumerable; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509
{
	struct X509V2CrlGenerator : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509ExtensionsGenerator* extGenerator;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator* tbsGen;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* sigOID;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* sigAlgId;
		mscorlib::System::String* signatureAlgorithm;
		void _ctor();
		void Reset();
		void SetIssuerDN(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Name* issuer);
		void SetThisUpdate(mscorlib::System::DateTime date);
		void SetNextUpdate(mscorlib::System::DateTime date);
		void AddCrlEntry(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* userCertificate, mscorlib::System::DateTime revocationDate, int32_t reason);
		void AddCrlEntry(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* userCertificate, mscorlib::System::DateTime revocationDate, int32_t reason, mscorlib::System::DateTime invalidityDate);
		void AddCrlEntry(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* userCertificate, mscorlib::System::DateTime revocationDate, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Extensions* extensions);
		void AddCrl(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Crl* other);
		void SetSignatureAlgorithm(mscorlib::System::String* signatureAlgorithm);
		void AddExtension(mscorlib::System::String* oid, bool critical, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable* extensionValue);
		void AddExtension(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid, bool critical, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable* extensionValue);
		void AddExtension(mscorlib::System::String* oid, bool critical, IL2CPP::Array<uint8_t>* extensionValue);
		void AddExtension(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid, bool critical, IL2CPP::Array<uint8_t>* extensionValue);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Crl* Generate(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Crl* Generate(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* random);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Crl* Generate(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ISignatureFactory* signatureCalculatorFactory);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::TbsCertificateList* GenerateCertList();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Crl* GenerateJcaObject(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::TbsCertificateList* tbsCrl, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algId, IL2CPP::Array<uint8_t>* signature);
		mscorlib::System::Collections::IEnumerable* get_SignatureAlgNames();
	};
}

