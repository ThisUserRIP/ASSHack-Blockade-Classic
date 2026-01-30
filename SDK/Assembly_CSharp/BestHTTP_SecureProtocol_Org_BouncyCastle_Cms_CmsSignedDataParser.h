#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "BestHTTP_SecureProtocol_Org_BouncyCastle_Cms_CmsContentInfoParser.h"
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms { struct CmsSignedHelper; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms { struct SignedDataParser; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { struct DerObjectIdentifier; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms { struct CmsTypedStream; };
namespace mscorlib::System::Collections { struct IDictionary; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections { struct ISet; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms { struct SignerInformationStore; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { struct Asn1Set; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store { struct IX509Store; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System::IO { struct Stream; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { struct Asn1SetParser; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms
{
	struct CmsSignedDataParser : Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsContentInfoParser
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::SignedDataParser* _signedData;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* _signedContentType;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsTypedStream* _signedContent;
		mscorlib::System::Collections::IDictionary* _digests;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* _digestOids;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::SignerInformationStore* _signerInfoStore;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Set* _certSet;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Set* _crlSet;
		bool _isCertCrlParsed;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Store* _attributeStore;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Store* _certificateStore;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Store* _crlStore;
		struct StaticFields
		{
			Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSignedHelper* Helper;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(IL2CPP::Array<uint8_t>* sigBlock);
		void _ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsTypedStream* signedContent, IL2CPP::Array<uint8_t>* sigBlock);
		void _ctor(mscorlib::System::IO::Stream* sigData);
		void _ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsTypedStream* signedContent, mscorlib::System::IO::Stream* sigData);
		int32_t get_Version();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* get_DigestOids();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::SignerInformationStore* GetSignerInfos();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Store* GetAttributeCertificates(mscorlib::System::String* type);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Store* GetCertificates(mscorlib::System::String* type);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Store* GetCrls(mscorlib::System::String* type);
		void PopulateCertCrlSets();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_SignedContentType();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsTypedStream* GetSignedContent();
		static mscorlib::System::IO::Stream* ReplaceSigners(mscorlib::System::IO::Stream* original, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::SignerInformationStore* signerInformationStore, mscorlib::System::IO::Stream* outStr);
		static mscorlib::System::IO::Stream* ReplaceCertificatesAndCrls(mscorlib::System::IO::Stream* original, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Store* x509Certs, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Store* x509Crls, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Store* x509AttrCerts, mscorlib::System::IO::Stream* outStr);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Set* GetAsn1Set(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1SetParser* asn1SetParser);
		static void _cctor();
	};
}

