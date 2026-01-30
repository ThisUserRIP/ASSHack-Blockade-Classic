#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "BestHTTP_SecureProtocol_Org_BouncyCastle_Asn1_DerObjectIdentifier.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509
{
	struct KeyPurposeID : Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::String* IdKP;
			Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::KeyPurposeID* AnyExtendedKeyUsage;
			Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::KeyPurposeID* IdKPServerAuth;
			Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::KeyPurposeID* IdKPClientAuth;
			Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::KeyPurposeID* IdKPCodeSigning;
			Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::KeyPurposeID* IdKPEmailProtection;
			Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::KeyPurposeID* IdKPIpsecEndSystem;
			Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::KeyPurposeID* IdKPIpsecTunnel;
			Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::KeyPurposeID* IdKPIpsecUser;
			Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::KeyPurposeID* IdKPTimeStamping;
			Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::KeyPurposeID* IdKPOcspSigning;
			Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::KeyPurposeID* IdKPSmartCardLogon;
			Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::KeyPurposeID* IdKPMacAddress;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(mscorlib::System::String* id);
		static void _cctor();
	};
}

