#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "BestHTTP_SecureProtocol_Org_BouncyCastle_Crypto_Tls_AbstractTlsPeer.h"
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { struct TlsCipherFactory; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { struct TlsServerContext; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { struct ProtocolVersion; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System::Collections { struct IDictionary; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int16.h"
namespace mscorlib::System { struct Int16; };
namespace mscorlib::System::Collections { struct IList; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { struct TlsCredentials; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { struct CertificateStatus; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { struct TlsKeyExchange; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { struct CertificateRequest; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { struct Certificate; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { struct TlsCompression; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { struct TlsCipher; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { struct NewSessionTicket; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	struct AbstractTlsServer : Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::AbstractTlsPeer
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory* mCipherFactory;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsServerContext* mContext;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* mClientVersion;
		IL2CPP::Array<int32_t>* mOfferedCipherSuites;
		IL2CPP::Array<uint8_t>* mOfferedCompressionMethods;
		mscorlib::System::Collections::IDictionary* mClientExtensions;
		bool mEncryptThenMacOffered;
		int16_t mMaxFragmentLengthOffered;
		bool mTruncatedHMacOffered;
		mscorlib::System::Collections::IList* mSupportedSignatureAlgorithms;
		bool mEccCipherSuitesOffered;
		IL2CPP::Array<int32_t>* mNamedCurves;
		IL2CPP::Array<uint8_t>* mClientECPointFormats;
		IL2CPP::Array<uint8_t>* mServerECPointFormats;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* mServerVersion;
		int32_t mSelectedCipherSuite;
		uint8_t mSelectedCompressionMethod;
		mscorlib::System::Collections::IDictionary* mServerExtensions;
		void _ctor();
		void _ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory* cipherFactory);
		bool get_AllowEncryptThenMac();
		bool get_AllowTruncatedHMac();
		mscorlib::System::Collections::IDictionary* CheckServerExtensions();
		IL2CPP::Array<int32_t>* GetCipherSuites();
		IL2CPP::Array<uint8_t>* GetCompressionMethods();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* get_MaximumVersion();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* get_MinimumVersion();
		bool SupportsClientEccCapabilities(IL2CPP::Array<int32_t>* namedCurves, IL2CPP::Array<uint8_t>* ecPointFormats);
		void Init(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsServerContext* context);
		void NotifyClientVersion(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* clientVersion);
		void NotifyFallback(bool isFallback);
		void NotifyOfferedCipherSuites(IL2CPP::Array<int32_t>* offeredCipherSuites);
		void NotifyOfferedCompressionMethods(IL2CPP::Array<uint8_t>* offeredCompressionMethods);
		void ProcessClientExtensions(mscorlib::System::Collections::IDictionary* clientExtensions);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* GetServerVersion();
		int32_t GetSelectedCipherSuite();
		uint8_t GetSelectedCompressionMethod();
		mscorlib::System::Collections::IDictionary* GetServerExtensions();
		mscorlib::System::Collections::IList* GetServerSupplementalData();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsCredentials* GetCredentials();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::CertificateStatus* GetCertificateStatus();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* GetKeyExchange();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::CertificateRequest* GetCertificateRequest();
		void ProcessClientSupplementalData(mscorlib::System::Collections::IList* clientSupplementalData);
		void NotifyClientCertificate(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::Certificate* clientCertificate);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsCompression* GetCompression();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsCipher* GetCipher();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::NewSessionTicket* GetNewSessionTicket();
	};
}

