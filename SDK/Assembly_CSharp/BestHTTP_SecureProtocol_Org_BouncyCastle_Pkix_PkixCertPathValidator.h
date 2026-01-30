#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix { struct PkixCertPathValidatorResult; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix { struct PkixCertPath; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix { struct PkixParameters; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509 { struct X509Certificate; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix
{
	struct PkixCertPathValidator : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPathValidatorResult* Validate(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPath* certPath, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixParameters* paramsPkix);
		static void CheckCertificate(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* cert);
		void _ctor();
	};
}

