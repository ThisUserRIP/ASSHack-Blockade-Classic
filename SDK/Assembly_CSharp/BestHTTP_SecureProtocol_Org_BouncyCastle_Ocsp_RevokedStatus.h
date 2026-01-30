#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "BestHTTP_SecureProtocol_Org_BouncyCastle_Ocsp_CertificateStatus.h"
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ocsp { struct RevokedInfo; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_DateTime.h"
namespace mscorlib::System { struct DateTime; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp
{
	struct RevokedStatus : Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp::CertificateStatus
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo* info;
		void _ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo* info);
		void _ctor(mscorlib::System::DateTime revocationDate, int32_t reason);
		mscorlib::System::DateTime get_RevocationTime();
		bool get_HasRevocationReason();
		int32_t get_RevocationReason();
	};
}

