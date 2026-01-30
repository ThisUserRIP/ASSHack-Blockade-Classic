#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Mono_Security::Mono::Security::Protocol::Ntlm { struct Type2Message; };
#include "Mono_Security_Protocol_Ntlm_NtlmAuthLevel.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace Mono_Security::Mono::Security::Protocol::Ntlm
{
	struct ChallengeResponse2 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			IL2CPP::Array<uint8_t>* magic;
			IL2CPP::Array<uint8_t>* nullEncMagic;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static IL2CPP::Array<uint8_t>* Compute_LM(mscorlib::System::String* password, IL2CPP::Array<uint8_t>* challenge);
		static IL2CPP::Array<uint8_t>* Compute_NTLM_Password(mscorlib::System::String* password);
		static IL2CPP::Array<uint8_t>* Compute_NTLM(mscorlib::System::String* password, IL2CPP::Array<uint8_t>* challenge);
		static void Compute_NTLMv2_Session(mscorlib::System::String* password, IL2CPP::Array<uint8_t>* challenge, IL2CPP::Array<uint8_t>& lm, IL2CPP::Array<uint8_t>& ntlm);
		static IL2CPP::Array<uint8_t>* Compute_NTLMv2(Mono_Security::Mono::Security::Protocol::Ntlm::Type2Message* type2, mscorlib::System::String* username, mscorlib::System::String* password, mscorlib::System::String* domain);
		static void Compute(Mono_Security::Mono::Security::Protocol::Ntlm::Type2Message* type2, Mono_Security::Mono::Security::Protocol::Ntlm::NtlmAuthLevel level, mscorlib::System::String* username, mscorlib::System::String* password, mscorlib::System::String* domain, IL2CPP::Array<uint8_t>& lm, IL2CPP::Array<uint8_t>& ntlm);
		static IL2CPP::Array<uint8_t>* GetResponse(IL2CPP::Array<uint8_t>* challenge, IL2CPP::Array<uint8_t>* pwd);
		static IL2CPP::Array<uint8_t>* PrepareDESKey(IL2CPP::Array<uint8_t>* key56bits, int32_t position);
		static IL2CPP::Array<uint8_t>* PasswordToKey(mscorlib::System::String* password, int32_t position);
		static void _cctor();
	};
}

