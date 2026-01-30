#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::IO { struct MemoryStream; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests
{
	struct NullDigest : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::IO::MemoryStream* bOut;
		mscorlib::System::String* get_AlgorithmName();
		int32_t GetByteLength();
		int32_t GetDigestSize();
		void Update(uint8_t b);
		void BlockUpdate(IL2CPP::Array<uint8_t>* inBytes, int32_t inOff, int32_t len);
		int32_t DoFinal(IL2CPP::Array<uint8_t>* outBytes, int32_t outOff);
		void Reset();
		void _ctor();
	};
}

