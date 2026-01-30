#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "BestHTTP_SecureProtocol_Org_BouncyCastle_Crypto_KeyGenerationParameters.h"
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters { struct ECDomainParameters; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { struct DerObjectIdentifier; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security { struct SecureRandom; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters
{
	struct ECKeyGenerationParameters : Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::KeyGenerationParameters
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* domainParams;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* publicKeyParamSet;
		void _ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* domainParameters, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* random);
		void _ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* publicKeyParamSet, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* random);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* get_DomainParameters();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_PublicKeyParamSet();
	};
}

