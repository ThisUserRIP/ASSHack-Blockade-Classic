#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "BestHTTP_SecureProtocol_Org_BouncyCastle_Asn1_DerBitString.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { struct DerBitString; };
namespace mscorlib::System { struct String; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp
{
	struct PkiFailureInfo : Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerBitString
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			int32_t BadAlg;
			int32_t BadMessageCheck;
			int32_t BadRequest;
			int32_t BadTime;
			int32_t BadCertId;
			int32_t BadDataFormat;
			int32_t WrongAuthority;
			int32_t IncorrectData;
			int32_t MissingTimeStamp;
			int32_t BadPop;
			int32_t CertRevoked;
			int32_t CertConfirmed;
			int32_t WrongIntegrity;
			int32_t BadRecipientNonce;
			int32_t TimeNotAvailable;
			int32_t UnacceptedPolicy;
			int32_t UnacceptedExtension;
			int32_t AddInfoNotAvailable;
			int32_t BadSenderNonce;
			int32_t BadCertTemplate;
			int32_t SignerNotTrusted;
			int32_t TransactionIdInUse;
			int32_t UnsupportedVersion;
			int32_t NotAuthorized;
			int32_t SystemUnavail;
			int32_t SystemFailure;
			int32_t DuplicateCertReq;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(int32_t info);
		void _ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerBitString* info);
		mscorlib::System::String* ToString();
	};
}

