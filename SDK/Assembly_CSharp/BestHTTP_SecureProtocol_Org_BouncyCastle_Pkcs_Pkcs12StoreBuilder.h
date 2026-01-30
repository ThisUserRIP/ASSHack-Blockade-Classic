#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { struct DerObjectIdentifier; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkcs { struct Pkcs12Store; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkcs
{
	struct Pkcs12StoreBuilder : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* keyAlgorithm;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* certAlgorithm;
		bool useDerEncoding;
		void _ctor();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkcs::Pkcs12Store* Build();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkcs::Pkcs12StoreBuilder* SetCertAlgorithm(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* certAlgorithm);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkcs::Pkcs12StoreBuilder* SetKeyAlgorithm(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* keyAlgorithm);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkcs::Pkcs12StoreBuilder* SetUseDerEncoding(bool useDerEncoding);
	};
}

