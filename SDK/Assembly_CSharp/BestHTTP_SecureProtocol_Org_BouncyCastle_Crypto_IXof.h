#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto
{
	struct IXof
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t DoFinal(IL2CPP::Array<uint8_t>* output, int32_t outOff, int32_t outLen);
		int32_t DoOutput(IL2CPP::Array<uint8_t>* output, int32_t outOff, int32_t outLen);
	};
}

