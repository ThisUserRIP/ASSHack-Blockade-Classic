#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections { struct ISet; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509 { struct IX509AttributeCertificate; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix { struct PkixCertPath; };
namespace mscorlib::System::Collections { struct ICollection; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix
{
	struct PkixAttrCertChecker : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* GetSupportedExtensions();
		void Check(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::IX509AttributeCertificate* attrCert, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPath* certPath, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPath* holderCertPath, mscorlib::System::Collections::ICollection* unresolvedCritExts);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixAttrCertChecker* Clone();
		void _ctor();
	};
}

