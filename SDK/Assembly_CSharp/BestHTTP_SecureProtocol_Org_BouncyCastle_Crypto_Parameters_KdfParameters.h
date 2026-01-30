#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters
{
	struct KdfParameters : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<uint8_t>* iv;
		IL2CPP::Array<uint8_t>* shared;
		void _ctor(IL2CPP::Array<uint8_t>* shared, IL2CPP::Array<uint8_t>* iv);
		IL2CPP::Array<uint8_t>* GetSharedSecret();
		IL2CPP::Array<uint8_t>* GetIV();
	};
}

