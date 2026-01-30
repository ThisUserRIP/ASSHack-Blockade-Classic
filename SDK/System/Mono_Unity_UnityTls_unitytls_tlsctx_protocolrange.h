#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Mono_Unity_UnityTls.h"
namespace System::Mono::Unity { struct UnityTls; };
#include "Mono_Unity_UnityTls_unitytls_protocol.h"

namespace System::Mono::Unity
{
	struct UnityTls_unitytls_tlsctx_protocolrange
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::Mono::Unity::UnityTls_unitytls_protocol min;
		System::Mono::Unity::UnityTls_unitytls_protocol max;
	};
}

