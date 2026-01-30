#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "BestHTTP_SecureProtocol_Org_BouncyCastle_Crypto_Tls_DefaultTlsClient.h"
namespace System::System { struct Uri; };
namespace Assembly_CSharp::Org::BouncyCastle::Crypto::Tls { struct ICertificateVerifyer; };
namespace Assembly_CSharp::Org::BouncyCastle::Crypto::Tls { struct IClientCredentialsProvider; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { struct TlsAuthentication; };

namespace Assembly_CSharp::Org::BouncyCastle::Crypto::Tls
{
	struct LegacyTlsClient : Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::DefaultTlsClient
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::System::Uri* TargetUri;
		Assembly_CSharp::Org::BouncyCastle::Crypto::Tls::ICertificateVerifyer* verifyer;
		Assembly_CSharp::Org::BouncyCastle::Crypto::Tls::IClientCredentialsProvider* credProvider;
		void _ctor(System::System::Uri* targetUri, Assembly_CSharp::Org::BouncyCastle::Crypto::Tls::ICertificateVerifyer* verifyer, Assembly_CSharp::Org::BouncyCastle::Crypto::Tls::IClientCredentialsProvider* prov, mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* hostNames);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsAuthentication* GetAuthentication();
	};
}

