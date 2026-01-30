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
	struct EncryptionAlgorithm : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			int32_t NULL_;
			int32_t RC4_40;
			int32_t RC4_128;
			int32_t RC2_CBC_40;
			int32_t IDEA_CBC;
			int32_t DES40_CBC;
			int32_t DES_CBC;
			int32_t cls_3DES_EDE_CBC;
			int32_t AES_128_CBC;
			int32_t AES_256_CBC;
			int32_t AES_128_GCM;
			int32_t AES_256_GCM;
			int32_t CAMELLIA_128_CBC;
			int32_t CAMELLIA_256_CBC;
			int32_t SEED_CBC;
			int32_t AES_128_CCM;
			int32_t AES_128_CCM_8;
			int32_t AES_256_CCM;
			int32_t AES_256_CCM_8;
			int32_t CAMELLIA_128_GCM;
			int32_t CAMELLIA_256_GCM;
			int32_t CHACHA20_POLY1305;
			int32_t AES_128_OCB_TAGLEN96;
			int32_t AES_256_OCB_TAGLEN96;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
	};
}

