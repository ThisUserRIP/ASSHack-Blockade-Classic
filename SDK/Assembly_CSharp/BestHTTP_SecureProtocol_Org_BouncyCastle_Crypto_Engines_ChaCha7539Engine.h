#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "BestHTTP_SecureProtocol_Org_BouncyCastle_Crypto_Engines_Salsa20Engine.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Engines
{
	struct ChaCha7539Engine : Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Engines::Salsa20Engine
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor();
		mscorlib::System::String* get_AlgorithmName();
		int32_t get_NonceSize();
		void AdvanceCounter();
		void ResetCounter();
		void SetKey(IL2CPP::Array<uint8_t>* keyBytes, IL2CPP::Array<uint8_t>* ivBytes);
		void GenerateKeyStream(IL2CPP::Array<uint8_t>* output);
	};
}

