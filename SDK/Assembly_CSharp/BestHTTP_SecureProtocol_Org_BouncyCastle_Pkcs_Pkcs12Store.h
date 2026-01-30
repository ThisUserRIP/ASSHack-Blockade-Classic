#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkcs { struct Pkcs12Store_IgnoresCaseHashtable; };
namespace mscorlib::System::Collections { struct IDictionary; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { struct DerObjectIdentifier; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkcs { struct AsymmetricKeyEntry; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { struct SubjectKeyIdentifier; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { struct AsymmetricKeyParameter; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::IO { struct Stream; };
#include "..\mscorlib\System_Char.h"
namespace mscorlib::System { struct Char; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Pkcs { struct PrivateKeyInfo; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { struct Asn1Set; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Pkcs { struct EncryptedPrivateKeyInfo; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Collections { struct IEnumerable; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkcs { struct X509CertificateEntry; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509 { struct X509Certificate; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security { struct SecureRandom; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { struct AlgorithmIdentifier; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkcs
{
	struct Pkcs12Store : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkcs::Pkcs12Store_IgnoresCaseHashtable* keys;
		mscorlib::System::Collections::IDictionary* localIds;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkcs::Pkcs12Store_IgnoresCaseHashtable* certs;
		mscorlib::System::Collections::IDictionary* chainCerts;
		mscorlib::System::Collections::IDictionary* keyCerts;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* keyAlgorithm;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* certAlgorithm;
		bool useDerEncoding;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkcs::AsymmetricKeyEntry* unmarkedKeyEntry;
		struct StaticFields
		{
			int32_t MinIterations;
			int32_t SaltSize;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier* CreateSubjectKeyID(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* pubKey);
		void _ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* keyAlgorithm, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* certAlgorithm, bool useDerEncoding);
		void _ctor();
		void _ctor(mscorlib::System::IO::Stream* input, IL2CPP::Array<wchar_t>* password);
		void LoadKeyBag(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo* privKeyInfo, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Set* bagAttributes);
		void LoadPkcs8ShroudedKeyBag(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo* encPrivKeyInfo, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Set* bagAttributes, IL2CPP::Array<wchar_t>* password, bool wrongPkcs12Zero);
		void Load(mscorlib::System::IO::Stream* input, IL2CPP::Array<wchar_t>* password);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkcs::AsymmetricKeyEntry* GetKey(mscorlib::System::String* alias);
		bool IsCertificateEntry(mscorlib::System::String* alias);
		bool IsKeyEntry(mscorlib::System::String* alias);
		mscorlib::System::Collections::IDictionary* GetAliasesTable();
		mscorlib::System::Collections::IEnumerable* get_Aliases();
		bool ContainsAlias(mscorlib::System::String* alias);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkcs::X509CertificateEntry* GetCertificate(mscorlib::System::String* alias);
		mscorlib::System::String* GetCertificateAlias(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* cert);
		IL2CPP::Array<Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkcs::X509CertificateEntry*>* GetCertificateChain(mscorlib::System::String* alias);
		void SetCertificateEntry(mscorlib::System::String* alias, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkcs::X509CertificateEntry* certEntry);
		void SetKeyEntry(mscorlib::System::String* alias, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkcs::AsymmetricKeyEntry* keyEntry, IL2CPP::Array<Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkcs::X509CertificateEntry*>* chain);
		void DeleteEntry(mscorlib::System::String* alias);
		bool IsEntryOfType(mscorlib::System::String* alias, mscorlib::System::Type* entryType);
		int32_t Size();
		int32_t get_Count();
		void Save(mscorlib::System::IO::Stream* stream, IL2CPP::Array<wchar_t>* password, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* random);
		static IL2CPP::Array<uint8_t>* CalculatePbeMac(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid, IL2CPP::Array<uint8_t>* salt, int32_t itCount, IL2CPP::Array<wchar_t>* password, bool wrongPkcs12Zero, IL2CPP::Array<uint8_t>* data);
		static IL2CPP::Array<uint8_t>* CryptPbeData(bool forEncryption, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algId, IL2CPP::Array<wchar_t>* password, bool wrongPkcs12Zero, IL2CPP::Array<uint8_t>* data);
	};
}

