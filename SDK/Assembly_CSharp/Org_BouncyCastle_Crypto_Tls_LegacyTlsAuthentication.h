#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Assembly_CSharp::Org::BouncyCastle::Crypto::Tls { struct ICertificateVerifyer; };
namespace Assembly_CSharp::Org::BouncyCastle::Crypto::Tls { struct IClientCredentialsProvider; };
namespace System::System { struct Uri; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { struct Certificate; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { struct TlsCredentials; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { struct TlsContext; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { struct CertificateRequest; };

namespace Assembly_CSharp::Org::BouncyCastle::Crypto::Tls
{
	struct LegacyTlsAuthentication : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::Org::BouncyCastle::Crypto::Tls::ICertificateVerifyer* verifyer;
		Assembly_CSharp::Org::BouncyCastle::Crypto::Tls::IClientCredentialsProvider* credProvider;
		System::System::Uri* TargetUri;
		void _ctor(System::System::Uri* targetUri, Assembly_CSharp::Org::BouncyCastle::Crypto::Tls::ICertificateVerifyer* verifyer, Assembly_CSharp::Org::BouncyCastle::Crypto::Tls::IClientCredentialsProvider* prov);
		void NotifyServerCertificate(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::Certificate* serverCertificate);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsCredentials* GetClientCredentials(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsContext* context, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::CertificateRequest* certificateRequest);
	};
}

