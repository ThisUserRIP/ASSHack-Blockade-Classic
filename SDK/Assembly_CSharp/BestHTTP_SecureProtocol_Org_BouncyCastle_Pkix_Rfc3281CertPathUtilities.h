#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509 { struct IX509AttributeCertificate; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix { struct PkixCertPath; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix { struct PkixParameters; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509 { struct X509Certificate; };
#include "..\mscorlib\System_DateTime.h"
namespace mscorlib::System { struct DateTime; };
namespace mscorlib::System::Collections { struct IList; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix { struct PkixCertPathValidatorResult; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { struct DistributionPoint; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix { struct CertStatus; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix { struct ReasonsMask; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix
{
	struct Rfc3281CertPathUtilities : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static void ProcessAttrCert7(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::IX509AttributeCertificate* attrCert, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPath* certPath, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPath* holderCertPath, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixParameters* pkixParams);
		static void CheckCrls(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::IX509AttributeCertificate* attrCert, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixParameters* paramsPKIX, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* issuerCert, mscorlib::System::DateTime validDate, mscorlib::System::Collections::IList* certPathCerts);
		static void AdditionalChecks(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::IX509AttributeCertificate* attrCert, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixParameters* pkixParams);
		static void ProcessAttrCert5(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::IX509AttributeCertificate* attrCert, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixParameters* pkixParams);
		static void ProcessAttrCert4(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* acIssuerCert, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixParameters* pkixParams);
		static void ProcessAttrCert3(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* acIssuerCert, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixParameters* pkixParams);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPathValidatorResult* ProcessAttrCert2(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPath* certPath, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixParameters* pkixParams);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPath* ProcessAttrCert1(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::IX509AttributeCertificate* attrCert, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixParameters* pkixParams);
		static void CheckCrl(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::DistributionPoint* dp, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::IX509AttributeCertificate* attrCert, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixParameters* paramsPKIX, mscorlib::System::DateTime validDate, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* issuerCert, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::CertStatus* certStatus, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::ReasonsMask* reasonMask, mscorlib::System::Collections::IList* certPathCerts);
		void _ctor();
	};
}

