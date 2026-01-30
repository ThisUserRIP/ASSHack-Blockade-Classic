#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "BestHTTP_SecureProtocol_Org_BouncyCastle_Asn1_Asn1Encodable.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { struct Asn1Encodable; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { struct Asn1TaggedObject; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { struct Asn1Object; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp
{
	struct PkiBody : Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t tagNo;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable* body;
		struct StaticFields
		{
			int32_t TYPE_INIT_REQ;
			int32_t TYPE_INIT_REP;
			int32_t TYPE_CERT_REQ;
			int32_t TYPE_CERT_REP;
			int32_t TYPE_P10_CERT_REQ;
			int32_t TYPE_POPO_CHALL;
			int32_t TYPE_POPO_REP;
			int32_t TYPE_KEY_UPDATE_REQ;
			int32_t TYPE_KEY_UPDATE_REP;
			int32_t TYPE_KEY_RECOVERY_REQ;
			int32_t TYPE_KEY_RECOVERY_REP;
			int32_t TYPE_REVOCATION_REQ;
			int32_t TYPE_REVOCATION_REP;
			int32_t TYPE_CROSS_CERT_REQ;
			int32_t TYPE_CROSS_CERT_REP;
			int32_t TYPE_CA_KEY_UPDATE_ANN;
			int32_t TYPE_CERT_ANN;
			int32_t TYPE_REVOCATION_ANN;
			int32_t TYPE_CRL_ANN;
			int32_t TYPE_CONFIRM;
			int32_t TYPE_NESTED;
			int32_t TYPE_GEN_MSG;
			int32_t TYPE_GEN_REP;
			int32_t TYPE_ERROR;
			int32_t TYPE_CERT_CONFIRM;
			int32_t TYPE_POLL_REQ;
			int32_t TYPE_POLL_REP;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::PkiBody* GetInstance(mscorlib::System::Object* obj);
		void _ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1TaggedObject* tagged);
		void _ctor(int32_t type, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable* content);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable* GetBodyForType(int32_t type, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable* o);
		int32_t get_Type();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable* get_Content();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();
	};
}

