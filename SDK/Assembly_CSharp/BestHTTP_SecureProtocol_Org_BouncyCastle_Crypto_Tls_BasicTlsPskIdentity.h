#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	struct BasicTlsPskIdentity : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<uint8_t>* mIdentity;
		IL2CPP::Array<uint8_t>* mPsk;
		void _ctor(IL2CPP::Array<uint8_t>* identity, IL2CPP::Array<uint8_t>* psk);
		void _ctor(mscorlib::System::String* identity, IL2CPP::Array<uint8_t>* psk);
		void SkipIdentityHint();
		void NotifyIdentityHint(IL2CPP::Array<uint8_t>* psk_identity_hint);
		IL2CPP::Array<uint8_t>* GetPskIdentity();
		IL2CPP::Array<uint8_t>* GetPsk();
	};
}

