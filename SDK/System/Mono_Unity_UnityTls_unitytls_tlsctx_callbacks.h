#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Mono_Unity_UnityTls.h"
namespace System::Mono::Unity { struct UnityTls; };
namespace System::Mono::Unity { struct UnityTls_unitytls_tlsctx_read_callback; };
namespace System::Mono::Unity { struct UnityTls_unitytls_tlsctx_write_callback; };
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Void; };

namespace System::Mono::Unity
{
	struct UnityTls_unitytls_tlsctx_callbacks
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::Mono::Unity::UnityTls_unitytls_tlsctx_read_callback* read;
		System::Mono::Unity::UnityTls_unitytls_tlsctx_write_callback* write;
		void* data;
	};
}

