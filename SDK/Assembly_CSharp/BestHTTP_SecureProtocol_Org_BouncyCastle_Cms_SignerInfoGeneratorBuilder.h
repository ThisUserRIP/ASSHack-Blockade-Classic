#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms { struct CmsAttributeTableGenerator; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms { struct SignerInfoGenerator; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { struct ISignatureFactory; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509 { struct X509Certificate; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms { struct SignerIdentifier; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms
{
	struct SignerInfoGeneratorBuilder : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool directSignature;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* signedGen;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* unsignedGen;
		void _ctor();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder* SetDirectSignature(bool hasNoSignedAttributes);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder* WithSignedAttributeGenerator(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* signedGen);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder* WithUnsignedAttributeGenerator(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* unsignedGen);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::SignerInfoGenerator* Build(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ISignatureFactory* contentSigner, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* certificate);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::SignerInfoGenerator* Build(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ISignatureFactory* signerFactory, IL2CPP::Array<uint8_t>* subjectKeyIdentifier);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::SignerInfoGenerator* CreateGenerator(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ISignatureFactory* contentSigner, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::SignerIdentifier* sigId);
	};
}

