#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters { struct Srp6GroupParameters; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Agreement::Srp { struct Srp6VerifierGenerator; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { struct IMac; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { struct TlsSrpLoginParameters; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	struct SimulatedTlsSrpIdentityManager : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters* mGroup;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator* mVerifierGenerator;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IMac* mMac;
		struct StaticFields
		{
			IL2CPP::Array<uint8_t>* PREFIX_PASSWORD;
			IL2CPP::Array<uint8_t>* PREFIX_SALT;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager* GetRfc5054Default(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters* group, IL2CPP::Array<uint8_t>* seedKey);
		void _ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters* group, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator* verifierGenerator, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IMac* mac);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters* GetLoginParameters(IL2CPP::Array<uint8_t>* identity);
		static void _cctor();
	};
}

