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
	struct ThreefishEngine_Threefish1024Cipher : Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Engines::ThreefishEngine_ThreefishCipher
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			int32_t ROTATION_0_0;
			int32_t ROTATION_0_1;
			int32_t ROTATION_0_2;
			int32_t ROTATION_0_3;
			int32_t ROTATION_0_4;
			int32_t ROTATION_0_5;
			int32_t ROTATION_0_6;
			int32_t ROTATION_0_7;
			int32_t ROTATION_1_0;
			int32_t ROTATION_1_1;
			int32_t ROTATION_1_2;
			int32_t ROTATION_1_3;
			int32_t ROTATION_1_4;
			int32_t ROTATION_1_5;
			int32_t ROTATION_1_6;
			int32_t ROTATION_1_7;
			int32_t ROTATION_2_0;
			int32_t ROTATION_2_1;
			int32_t ROTATION_2_2;
			int32_t ROTATION_2_3;
			int32_t ROTATION_2_4;
			int32_t ROTATION_2_5;
			int32_t ROTATION_2_6;
			int32_t ROTATION_2_7;
			int32_t ROTATION_3_0;
			int32_t ROTATION_3_1;
			int32_t ROTATION_3_2;
			int32_t ROTATION_3_3;
			int32_t ROTATION_3_4;
			int32_t ROTATION_3_5;
			int32_t ROTATION_3_6;
			int32_t ROTATION_3_7;
			int32_t ROTATION_4_0;
			int32_t ROTATION_4_1;
			int32_t ROTATION_4_2;
			int32_t ROTATION_4_3;
			int32_t ROTATION_4_4;
			int32_t ROTATION_4_5;
			int32_t ROTATION_4_6;
			int32_t ROTATION_4_7;
			int32_t ROTATION_5_0;
			int32_t ROTATION_5_1;
			int32_t ROTATION_5_2;
			int32_t ROTATION_5_3;
			int32_t ROTATION_5_4;
			int32_t ROTATION_5_5;
			int32_t ROTATION_5_6;
			int32_t ROTATION_5_7;
			int32_t ROTATION_6_0;
			int32_t ROTATION_6_1;
			int32_t ROTATION_6_2;
			int32_t ROTATION_6_3;
			int32_t ROTATION_6_4;
			int32_t ROTATION_6_5;
			int32_t ROTATION_6_6;
			int32_t ROTATION_6_7;
			int32_t ROTATION_7_0;
			int32_t ROTATION_7_1;
			int32_t ROTATION_7_2;
			int32_t ROTATION_7_3;
			int32_t ROTATION_7_4;
			int32_t ROTATION_7_5;
			int32_t ROTATION_7_6;
			int32_t ROTATION_7_7;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(IL2CPP::Array<uint64_t>* kw, IL2CPP::Array<uint64_t>* t);
		void EncryptBlock(IL2CPP::Array<uint64_t>* block, IL2CPP::Array<uint64_t>* outWords);
		void DecryptBlock(IL2CPP::Array<uint64_t>* block, IL2CPP::Array<uint64_t>* state);
	};
}

