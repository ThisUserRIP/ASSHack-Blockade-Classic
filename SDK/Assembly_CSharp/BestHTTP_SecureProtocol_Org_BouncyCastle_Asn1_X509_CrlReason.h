#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "BestHTTP_SecureProtocol_Org_BouncyCastle_Asn1_DerEnumerated.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { struct DerEnumerated; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509
{
	struct CrlReason : Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerEnumerated
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			int32_t Unspecified;
			int32_t KeyCompromise;
			int32_t CACompromise;
			int32_t AffiliationChanged;
			int32_t Superseded;
			int32_t CessationOfOperation;
			int32_t CertificateHold;
			int32_t RemoveFromCrl;
			int32_t PrivilegeWithdrawn;
			int32_t AACompromise;
			IL2CPP::Array<mscorlib::System::String*>* ReasonString;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(int32_t reason);
		void _ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerEnumerated* reason);
		mscorlib::System::String* ToString();
		static void _cctor();
	};
}

