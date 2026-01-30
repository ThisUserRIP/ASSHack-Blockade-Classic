#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	struct ClientCertificateType : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			uint8_t rsa_sign;
			uint8_t dss_sign;
			uint8_t rsa_fixed_dh;
			uint8_t dss_fixed_dh;
			uint8_t rsa_ephemeral_dh_RESERVED;
			uint8_t dss_ephemeral_dh_RESERVED;
			uint8_t fortezza_dms_RESERVED;
			uint8_t ecdsa_sign;
			uint8_t rsa_fixed_ecdh;
			uint8_t ecdsa_fixed_ecdh;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
	};
}

