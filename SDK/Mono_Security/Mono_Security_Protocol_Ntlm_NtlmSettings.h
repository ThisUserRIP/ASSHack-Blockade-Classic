#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Mono_Security_Protocol_Ntlm_NtlmAuthLevel.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Mono_Security::Mono::Security::Protocol::Ntlm
{
	struct NtlmSettings : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			Mono_Security::Mono::Security::Protocol::Ntlm::NtlmAuthLevel defaultAuthLevel;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static Mono_Security::Mono::Security::Protocol::Ntlm::NtlmAuthLevel get_DefaultAuthLevel();
		static void _cctor();
	};
}

