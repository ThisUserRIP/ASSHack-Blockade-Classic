#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	struct SrtpProtectionProfile : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			int32_t SRTP_AES128_CM_HMAC_SHA1_80;
			int32_t SRTP_AES128_CM_HMAC_SHA1_32;
			int32_t SRTP_NULL_HMAC_SHA1_80;
			int32_t SRTP_NULL_HMAC_SHA1_32;
			int32_t SRTP_AEAD_AES_128_GCM;
			int32_t SRTP_AEAD_AES_256_GCM;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
	};
}

