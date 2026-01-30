#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "BestHTTP_SecureProtocol_Org_BouncyCastle_Crypto_Engines_ThreefishEngine_ThreefishCipher.h"
#include "BestHTTP_SecureProtocol_Org_BouncyCastle_Crypto_Engines_ThreefishEngine.h"
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Engines { struct ThreefishEngine; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Engines
{
	struct ThreefishEngine_Threefish256Cipher : Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Engines::ThreefishEngine_ThreefishCipher
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			int32_t ROTATION_0_0;
			int32_t ROTATION_0_1;
			int32_t ROTATION_1_0;
			int32_t ROTATION_1_1;
			int32_t ROTATION_2_0;
			int32_t ROTATION_2_1;
			int32_t ROTATION_3_0;
			int32_t ROTATION_3_1;
			int32_t ROTATION_4_0;
			int32_t ROTATION_4_1;
			int32_t ROTATION_5_0;
			int32_t ROTATION_5_1;
			int32_t ROTATION_6_0;
			int32_t ROTATION_6_1;
			int32_t ROTATION_7_0;
			int32_t ROTATION_7_1;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(IL2CPP::Array<uint64_t>* kw, IL2CPP::Array<uint64_t>* t);
		void EncryptBlock(IL2CPP::Array<uint64_t>* block, IL2CPP::Array<uint64_t>* outWords);
		void DecryptBlock(IL2CPP::Array<uint64_t>* block, IL2CPP::Array<uint64_t>* state);
	};
}

