#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "BestHTTP_SecureProtocol_Org_BouncyCastle_X509_X509ExtensionBase.h"
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { struct X509CertificateStructure; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { struct BasicConstraints; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_DateTime.h"
namespace mscorlib::System { struct DateTime; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math { struct BigInteger; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { struct X509Name; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System { struct String; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { struct DerBitString; };
namespace mscorlib::System::Collections { struct IList; };
namespace mscorlib::System::Collections { struct ICollection; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { struct X509Extensions; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { struct AsymmetricKeyParameter; };
namespace mscorlib::System { struct Object; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { struct IVerifierFactoryProvider; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { struct IVerifierFactory; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { struct AlgorithmIdentifier; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509
{
	struct X509Certificate : Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509ExtensionBase
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* c;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::BasicConstraints* basicConstraints;
		IL2CPP::Array<bool>* keyUsage;
		bool hashValueSet;
		int32_t hashValue;
		void _ctor();
		void _ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* c);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* get_CertificateStructure();
		bool get_IsValidNow();
		bool IsValid(mscorlib::System::DateTime time);
		void CheckValidity();
		void CheckValidity(mscorlib::System::DateTime time);
		int32_t get_Version();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* get_SerialNumber();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Name* get_IssuerDN();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Name* get_SubjectDN();
		mscorlib::System::DateTime get_NotBefore();
		mscorlib::System::DateTime get_NotAfter();
		IL2CPP::Array<uint8_t>* GetTbsCertificate();
		IL2CPP::Array<uint8_t>* GetSignature();
		mscorlib::System::String* get_SigAlgName();
		mscorlib::System::String* get_SigAlgOid();
		IL2CPP::Array<uint8_t>* GetSigAlgParams();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerBitString* get_IssuerUniqueID();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerBitString* get_SubjectUniqueID();
		IL2CPP::Array<bool>* GetKeyUsage();
		mscorlib::System::Collections::IList* GetExtendedKeyUsage();
		int32_t GetBasicConstraints();
		mscorlib::System::Collections::ICollection* GetSubjectAlternativeNames();
		mscorlib::System::Collections::ICollection* GetIssuerAlternativeNames();
		mscorlib::System::Collections::ICollection* GetAlternativeNames(mscorlib::System::String* oid);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Extensions* GetX509Extensions();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* GetPublicKey();
		IL2CPP::Array<uint8_t>* GetEncoded();
		bool Equals(mscorlib::System::Object* obj);
		int32_t GetHashCode();
		mscorlib::System::String* ToString();
		void Verify(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* key);
		void Verify(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IVerifierFactoryProvider* verifierProvider);
		void CheckSignature(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IVerifierFactory* verifier);
		static bool IsAlgIDEqual(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* id1, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* id2);
	};
}

