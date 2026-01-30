#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters
{
	struct IesParameters : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<uint8_t>* derivation;
		IL2CPP::Array<uint8_t>* encoding;
		int32_t macKeySize;
		void _ctor(IL2CPP::Array<uint8_t>* derivation, IL2CPP::Array<uint8_t>* encoding, int32_t macKeySize);
		IL2CPP::Array<uint8_t>* GetDerivationV();
		IL2CPP::Array<uint8_t>* GetEncodingV();
		int32_t get_MacKeySize();
	};
}

