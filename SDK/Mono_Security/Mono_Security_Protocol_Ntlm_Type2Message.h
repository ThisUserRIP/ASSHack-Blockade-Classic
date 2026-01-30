#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Mono_Security_Protocol_Ntlm_MessageBase.h"
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Mono_Security::Mono::Security::Protocol::Ntlm
{
	struct Type2Message : Mono_Security::Mono::Security::Protocol::Ntlm::MessageBase
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<uint8_t>* _nonce;
		mscorlib::System::String* _targetName;
		IL2CPP::Array<uint8_t>* _targetInfo;
		void _ctor(IL2CPP::Array<uint8_t>* message);
		void Finalize();
		IL2CPP::Array<uint8_t>* get_Nonce();
		mscorlib::System::String* get_TargetName();
		IL2CPP::Array<uint8_t>* get_TargetInfo();
		void Decode(IL2CPP::Array<uint8_t>* message);
		IL2CPP::Array<uint8_t>* GetBytes();
	};
}

