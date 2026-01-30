#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "BestHTTP_SecureProtocol_Org_BouncyCastle_Crypto_Engines_ThreefishEngine.h"
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Engines { struct ThreefishEngine; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Engines
{
	struct ThreefishEngine_ThreefishCipher : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<uint64_t>* t;
		IL2CPP::Array<uint64_t>* kw;
		void _ctor(IL2CPP::Array<uint64_t>* kw, IL2CPP::Array<uint64_t>* t);
		void EncryptBlock(IL2CPP::Array<uint64_t>* block, IL2CPP::Array<uint64_t>* outWords);
		void DecryptBlock(IL2CPP::Array<uint64_t>* block, IL2CPP::Array<uint64_t>* outWords);
	};
}

