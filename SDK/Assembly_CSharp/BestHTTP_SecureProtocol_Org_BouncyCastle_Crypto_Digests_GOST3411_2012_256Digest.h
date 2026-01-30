#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "BestHTTP_SecureProtocol_Org_BouncyCastle_Crypto_Digests_GOST3411_2012Digest.h"
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities { struct IMemoable; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests
{
	struct GOST3411_2012_256Digest : Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests::GOST3411_2012Digest
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			IL2CPP::Array<uint8_t>* IV;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		mscorlib::System::String* get_AlgorithmName();
		void _ctor();
		void _ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests::GOST3411_2012_256Digest* other);
		int32_t GetDigestSize();
		int32_t DoFinal(IL2CPP::Array<uint8_t>* output, int32_t outOff);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IMemoable* Copy();
		static void _cctor();
	};
}

