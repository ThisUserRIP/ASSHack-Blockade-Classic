#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int16.h"
namespace mscorlib::System { struct Int16; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Collections { struct IList; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security { struct SecureRandom; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms { struct CmsAttributeTableGenerator; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509 { struct X509Certificate; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { struct AsymmetricKeyParameter; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters { struct KeyParameter; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms { struct KekIdentifier; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms { struct CmsPbeKey; };
namespace mscorlib::System::Collections { struct ICollection; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { struct AlgorithmIdentifier; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { struct Asn1Encodable; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { struct ICipherParameters; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms
{
	struct CmsEnvelopedGenerator : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::IList* recipientInfoGenerators;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* rand;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* unprotectedAttributeGenerator;
		struct StaticFields
		{
			IL2CPP::Array<int16_t>* rc2Table;
			mscorlib::System::String* DesEde3Cbc;
			mscorlib::System::String* RC2Cbc;
			mscorlib::System::String* IdeaCbc;
			mscorlib::System::String* Cast5Cbc;
			mscorlib::System::String* Aes128Cbc;
			mscorlib::System::String* Aes192Cbc;
			mscorlib::System::String* Aes256Cbc;
			mscorlib::System::String* Camellia128Cbc;
			mscorlib::System::String* Camellia192Cbc;
			mscorlib::System::String* Camellia256Cbc;
			mscorlib::System::String* SeedCbc;
			mscorlib::System::String* DesEde3Wrap;
			mscorlib::System::String* Aes128Wrap;
			mscorlib::System::String* Aes192Wrap;
			mscorlib::System::String* Aes256Wrap;
			mscorlib::System::String* Camellia128Wrap;
			mscorlib::System::String* Camellia192Wrap;
			mscorlib::System::String* Camellia256Wrap;
			mscorlib::System::String* SeedWrap;
			mscorlib::System::String* ECDHSha1Kdf;
			mscorlib::System::String* ECMqvSha1Kdf;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		void _ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* rand);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* get_UnprotectedAttributeGenerator();
		void set_UnprotectedAttributeGenerator(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* value);
		void AddKeyTransRecipient(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* cert);
		void AddKeyTransRecipient(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* pubKey, IL2CPP::Array<uint8_t>* subKeyId);
		void AddKekRecipient(mscorlib::System::String* keyAlgorithm, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::KeyParameter* key, IL2CPP::Array<uint8_t>* keyIdentifier);
		void AddKekRecipient(mscorlib::System::String* keyAlgorithm, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::KeyParameter* key, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::KekIdentifier* kekIdentifier);
		void AddPasswordRecipient(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsPbeKey* pbeKey, mscorlib::System::String* kekAlgorithmOid);
		void AddKeyAgreementRecipient(mscorlib::System::String* agreementAlgorithm, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* senderPrivateKey, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* senderPublicKey, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* recipientCert, mscorlib::System::String* cekWrapAlgorithm);
		void AddKeyAgreementRecipients(mscorlib::System::String* agreementAlgorithm, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* senderPrivateKey, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* senderPublicKey, mscorlib::System::Collections::ICollection* recipientCerts, mscorlib::System::String* cekWrapAlgorithm);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* GetAlgorithmIdentifier(mscorlib::System::String* encryptionOid, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::KeyParameter* encKey, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable* asn1Params, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters& cipherParameters);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable* GenerateAsn1Parameters(mscorlib::System::String* encryptionOid, IL2CPP::Array<uint8_t>* encKeyBytes);
		static void _cctor();
	};
}

