#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "BestHTTP_SecureProtocol_Org_BouncyCastle_Asn1_DerBitString.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { struct DerBitString; };
namespace mscorlib::System { struct String; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509
{
	struct KeyUsage : Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerBitString
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			int32_t DigitalSignature;
			int32_t NonRepudiation;
			int32_t KeyEncipherment;
			int32_t DataEncipherment;
			int32_t KeyAgreement;
			int32_t KeyCertSign;
			int32_t CrlSign;
			int32_t EncipherOnly;
			int32_t DecipherOnly;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::KeyUsage* GetInstance(mscorlib::System::Object* obj);
		void _ctor(int32_t usage);
		void _ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerBitString* usage);
		mscorlib::System::String* ToString();
	};
}

