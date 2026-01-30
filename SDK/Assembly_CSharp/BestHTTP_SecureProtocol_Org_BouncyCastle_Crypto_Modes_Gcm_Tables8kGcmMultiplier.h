#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Modes::Gcm
{
	struct Tables8kGcmMultiplier : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<uint8_t>* H;
		IL2CPP::Array<IL2CPP::Array<IL2CPP::Array<uint32_t>*>*>* M;
		IL2CPP::Array<uint32_t>* z;
		void Init(IL2CPP::Array<uint8_t>* H);
		void MultiplyH(IL2CPP::Array<uint8_t>* x);
		void _ctor();
	};
}

