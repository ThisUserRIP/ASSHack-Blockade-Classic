#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "BestHTTP_SecureProtocol_Org_BouncyCastle_Crypto_Tls_AbstractTlsKeyExchange.h"
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { struct TlsSigner; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { struct AsymmetricKeyParameter; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { struct TlsAgreementCredentials; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters { struct ECPrivateKeyParameters; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters { struct ECPublicKeyParameters; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Collections { struct IList; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { struct TlsContext; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { struct Certificate; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::IO { struct Stream; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { struct CertificateRequest; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { struct TlsCredentials; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	struct TlsECDHKeyExchange : Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsSigner* mTlsSigner;
		IL2CPP::Array<int32_t>* mNamedCurves;
		IL2CPP::Array<uint8_t>* mClientECPointFormats;
		IL2CPP::Array<uint8_t>* mServerECPointFormats;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* mServerPublicKey;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsAgreementCredentials* mAgreementCredentials;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* mECAgreePrivateKey;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* mECAgreePublicKey;
		void _ctor(int32_t keyExchange, mscorlib::System::Collections::IList* supportedSignatureAlgorithms, IL2CPP::Array<int32_t>* namedCurves, IL2CPP::Array<uint8_t>* clientECPointFormats, IL2CPP::Array<uint8_t>* serverECPointFormats);
		void Init(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsContext* context);
		void SkipServerCredentials();
		void ProcessServerCertificate(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::Certificate* serverCertificate);
		bool get_RequiresServerKeyExchange();
		IL2CPP::Array<uint8_t>* GenerateServerKeyExchange();
		void ProcessServerKeyExchange(mscorlib::System::IO::Stream* input);
		void ValidateCertificateRequest(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::CertificateRequest* certificateRequest);
		void ProcessClientCredentials(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsCredentials* clientCredentials);
		void GenerateClientKeyExchange(mscorlib::System::IO::Stream* output);
		void ProcessClientCertificate(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::Certificate* clientCertificate);
		void ProcessClientKeyExchange(mscorlib::System::IO::Stream* input);
		IL2CPP::Array<uint8_t>* GeneratePremasterSecret();
	};
}

