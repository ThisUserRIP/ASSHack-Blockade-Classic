#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Mono_Security_Protocol_Ntlm_MessageBase.h"
#include "Mono_Security_Protocol_Ntlm_NtlmAuthLevel.h"
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System { struct String; };
namespace Mono_Security::Mono::Security::Protocol::Ntlm { struct Type2Message; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace Mono_Security::Mono::Security::Protocol::Ntlm
{
	struct Type3Message : Mono_Security::Mono::Security::Protocol::Ntlm::MessageBase
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Mono_Security::Mono::Security::Protocol::Ntlm::NtlmAuthLevel _level;
		IL2CPP::Array<uint8_t>* _challenge;
		mscorlib::System::String* _host;
		mscorlib::System::String* _domain;
		mscorlib::System::String* _username;
		mscorlib::System::String* _password;
		Mono_Security::Mono::Security::Protocol::Ntlm::Type2Message* _type2;
		IL2CPP::Array<uint8_t>* _lm;
		IL2CPP::Array<uint8_t>* _nt;
		void _ctor(Mono_Security::Mono::Security::Protocol::Ntlm::Type2Message* type2);
		void Finalize();
		void set_Domain(mscorlib::System::String* value);
		void set_Password(mscorlib::System::String* value);
		void set_Username(mscorlib::System::String* value);
		void Decode(IL2CPP::Array<uint8_t>* message);
		mscorlib::System::String* DecodeString(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t len);
		IL2CPP::Array<uint8_t>* EncodeString(mscorlib::System::String* text);
		IL2CPP::Array<uint8_t>* GetBytes();
	};
}

