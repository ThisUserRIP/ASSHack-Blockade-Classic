#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "BestHTTP_SecureProtocol_Org_BouncyCastle_X509_X509ExtensionBase.h"
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { struct AttributeCertificate; };
#include "..\mscorlib\System_DateTime.h"
namespace mscorlib::System { struct DateTime; };
namespace mscorlib::System::IO { struct Stream; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math { struct BigInteger; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509 { struct AttributeCertificateHolder; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509 { struct AttributeCertificateIssuer; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { struct AlgorithmIdentifier; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { struct AsymmetricKeyParameter; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { struct IVerifierFactoryProvider; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { struct IVerifierFactory; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { struct X509Extensions; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509 { struct X509Attribute; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct Object; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509
{
	struct X509V2AttributeCertificate : Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509ExtensionBase
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AttributeCertificate* cert;
		mscorlib::System::DateTime notBefore;
		mscorlib::System::DateTime notAfter;
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AttributeCertificate* GetObject(mscorlib::System::IO::Stream* input);
		void _ctor(mscorlib::System::IO::Stream* encIn);
		void _ctor(IL2CPP::Array<uint8_t>* encoded);
		void _ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AttributeCertificate* cert);
		int32_t get_Version();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* get_SerialNumber();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::AttributeCertificateHolder* get_Holder();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::AttributeCertificateIssuer* get_Issuer();
		mscorlib::System::DateTime get_NotBefore();
		mscorlib::System::DateTime get_NotAfter();
		IL2CPP::Array<bool>* GetIssuerUniqueID();
		bool get_IsValidNow();
		bool IsValid(mscorlib::System::DateTime date);
		void CheckValidity();
		void CheckValidity(mscorlib::System::DateTime date);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_SignatureAlgorithm();
		IL2CPP::Array<uint8_t>* GetSignature();
		void Verify(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* key);
		void Verify(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IVerifierFactoryProvider* verifierProvider);
		void CheckSignature(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IVerifierFactory* verifier);
		IL2CPP::Array<uint8_t>* GetEncoded();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Extensions* GetX509Extensions();
		IL2CPP::Array<Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Attribute*>* GetAttributes();
		IL2CPP::Array<Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Attribute*>* GetAttributes(mscorlib::System::String* oid);
		bool Equals(mscorlib::System::Object* obj);
		int32_t GetHashCode();
	};
}

