#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	struct UseSrtpData : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<int32_t>* mProtectionProfiles;
		IL2CPP::Array<uint8_t>* mMki;
		void _ctor(IL2CPP::Array<int32_t>* protectionProfiles, IL2CPP::Array<uint8_t>* mki);
		IL2CPP::Array<int32_t>* get_ProtectionProfiles();
		IL2CPP::Array<uint8_t>* get_Mki();
	};
}

