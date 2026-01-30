#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "BestHTTP_SecureProtocol_Org_BouncyCastle_Crypto_Engines_Salsa20Engine.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Engines
{
	struct ChaChaEngine : Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Engines::Salsa20Engine
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor();
		void _ctor(int32_t rounds);
		mscorlib::System::String* get_AlgorithmName();
		void AdvanceCounter();
		void ResetCounter();
		void SetKey(IL2CPP::Array<uint8_t>* keyBytes, IL2CPP::Array<uint8_t>* ivBytes);
		void GenerateKeyStream(IL2CPP::Array<uint8_t>* output);
		static void ChachaCore(int32_t rounds, IL2CPP::Array<uint32_t>* input, IL2CPP::Array<uint32_t>* x);
	};
}

