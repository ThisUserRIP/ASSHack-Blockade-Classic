#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Mono_Security_Protocol_Ntlm_MessageBase.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };

namespace Mono_Security::Mono::Security::Protocol::Ntlm
{
	struct Type1Message : Mono_Security::Mono::Security::Protocol::Ntlm::MessageBase
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* _host;
		mscorlib::System::String* _domain;
		void _ctor();
		void set_Domain(mscorlib::System::String* value);
		void set_Host(mscorlib::System::String* value);
		void Decode(IL2CPP::Array<uint8_t>* message);
		IL2CPP::Array<uint8_t>* GetBytes();
	};
}

