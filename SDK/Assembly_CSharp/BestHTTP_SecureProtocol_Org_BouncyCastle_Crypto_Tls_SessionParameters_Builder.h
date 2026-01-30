#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "BestHTTP_SecureProtocol_Org_BouncyCastle_Crypto_Tls_SessionParameters.h"
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { struct SessionParameters; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Int16.h"
namespace mscorlib::System { struct Int16; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { struct Certificate; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Collections { struct IDictionary; };
namespace mscorlib::System { struct String; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	struct SessionParameters_Builder : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t mCipherSuite;
		int16_t mCompressionAlgorithm;
		IL2CPP::Array<uint8_t>* mMasterSecret;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::Certificate* mPeerCertificate;
		IL2CPP::Array<uint8_t>* mPskIdentity;
		IL2CPP::Array<uint8_t>* mSrpIdentity;
		IL2CPP::Array<uint8_t>* mEncodedServerExtensions;
		bool mExtendedMasterSecret;
		void _ctor();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::SessionParameters* Build();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder* SetCipherSuite(int32_t cipherSuite);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder* SetCompressionAlgorithm(uint8_t compressionAlgorithm);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder* SetExtendedMasterSecret(bool extendedMasterSecret);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder* SetMasterSecret(IL2CPP::Array<uint8_t>* masterSecret);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder* SetPeerCertificate(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::Certificate* peerCertificate);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder* SetPskIdentity(IL2CPP::Array<uint8_t>* pskIdentity);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder* SetSrpIdentity(IL2CPP::Array<uint8_t>* srpIdentity);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder* SetServerExtensions(mscorlib::System::Collections::IDictionary* serverExtensions);
		void Validate(bool condition, mscorlib::System::String* parameter);
	};
}

