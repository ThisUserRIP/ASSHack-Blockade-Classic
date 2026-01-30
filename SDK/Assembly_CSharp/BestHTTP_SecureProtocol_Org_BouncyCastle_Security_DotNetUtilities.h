#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Security::Cryptography::X509Certificates { struct X509Certificate; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { struct X509CertificateStructure; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509 { struct X509Certificate; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { struct AsymmetricCipherKeyPair; };
namespace mscorlib::System::Security::Cryptography { struct DSA; };
#include "..\mscorlib\System_Security_Cryptography_DSAParameters.h"
namespace mscorlib::System::Security::Cryptography { struct DSAParameters; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters { struct DsaPublicKeyParameters; };
namespace mscorlib::System::Security::Cryptography { struct RSA; };
#include "..\mscorlib\System_Security_Cryptography_RSAParameters.h"
namespace mscorlib::System::Security::Cryptography { struct RSAParameters; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters { struct RsaKeyParameters; };
namespace mscorlib::System::Security::Cryptography { struct AsymmetricAlgorithm; };
namespace mscorlib::System::Security::Cryptography { struct CspParameters; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters { struct RsaPrivateCrtKeyParameters; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Pkcs { struct RsaPrivateKeyStructure; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math { struct BigInteger; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security
{
	struct DotNetUtilities : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor();
		static mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate* ToX509Certificate(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* x509Struct);
		static mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate* ToX509Certificate(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* x509Cert);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* FromX509Certificate(mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate* x509Cert);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* GetDsaKeyPair(mscorlib::System::Security::Cryptography::DSA* dsa);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* GetDsaKeyPair(mscorlib::System::Security::Cryptography::DSAParameters dp);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DsaPublicKeyParameters* GetDsaPublicKey(mscorlib::System::Security::Cryptography::DSA* dsa);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DsaPublicKeyParameters* GetDsaPublicKey(mscorlib::System::Security::Cryptography::DSAParameters dp);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* GetRsaKeyPair(mscorlib::System::Security::Cryptography::RSA* rsa);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* GetRsaKeyPair(mscorlib::System::Security::Cryptography::RSAParameters rp);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* GetRsaPublicKey(mscorlib::System::Security::Cryptography::RSA* rsa);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* GetRsaPublicKey(mscorlib::System::Security::Cryptography::RSAParameters rp);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* GetKeyPair(mscorlib::System::Security::Cryptography::AsymmetricAlgorithm* privateKey);
		static mscorlib::System::Security::Cryptography::RSA* ToRSA(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* rsaKey);
		static mscorlib::System::Security::Cryptography::RSA* ToRSA(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* rsaKey, mscorlib::System::Security::Cryptography::CspParameters* csp);
		static mscorlib::System::Security::Cryptography::RSA* ToRSA(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters* privKey);
		static mscorlib::System::Security::Cryptography::RSA* ToRSA(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters* privKey, mscorlib::System::Security::Cryptography::CspParameters* csp);
		static mscorlib::System::Security::Cryptography::RSA* ToRSA(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure* privKey);
		static mscorlib::System::Security::Cryptography::RSA* ToRSA(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure* privKey, mscorlib::System::Security::Cryptography::CspParameters* csp);
		static mscorlib::System::Security::Cryptography::RSAParameters ToRSAParameters(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* rsaKey);
		static mscorlib::System::Security::Cryptography::RSAParameters ToRSAParameters(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters* privKey);
		static mscorlib::System::Security::Cryptography::RSAParameters ToRSAParameters(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure* privKey);
		static IL2CPP::Array<uint8_t>* ConvertRSAParametersField(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* n, int32_t size);
		static mscorlib::System::Security::Cryptography::RSA* CreateRSAProvider(mscorlib::System::Security::Cryptography::RSAParameters rp);
		static mscorlib::System::Security::Cryptography::RSA* CreateRSAProvider(mscorlib::System::Security::Cryptography::RSAParameters rp, mscorlib::System::Security::Cryptography::CspParameters* csp);
	};
}

