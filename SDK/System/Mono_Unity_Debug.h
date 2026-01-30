#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "Mono_Unity_UnityTls_unitytls_errorstate.h"
namespace System::Mono::Unity { struct UnityTls_unitytls_errorstate; };
namespace mscorlib::System { struct String; };
#include "..\Mono_Security\Mono_Security_Interface_AlertDescription.h"
#include "Mono_Unity_UnityTls_unitytls_x509verify_result.h"

namespace System::Mono::Unity
{
	struct Debug : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static void CheckAndThrow(System::Mono::Unity::UnityTls_unitytls_errorstate errorState, mscorlib::System::String* context, Mono_Security::Mono::Security::Interface::AlertDescription defaultAlert);
		static void CheckAndThrow(System::Mono::Unity::UnityTls_unitytls_errorstate errorState, System::Mono::Unity::UnityTls_unitytls_x509verify_result verifyResult, mscorlib::System::String* context, Mono_Security::Mono::Security::Interface::AlertDescription defaultAlert);
	};
}

