#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_MulticastDelegate.h"
#include "Mono_Unity_UnityTls_unitytls_interface_struct.h"
namespace System::Mono::Unity { struct UnityTls_unitytls_interface_struct; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
namespace System::Mono::Unity { struct UnityTls_unitytls_tlsctx; };
namespace System::Mono::Unity { struct UnityTls_unitytls_tlsctx; };
#include "Mono_Unity_UnityTls_unitytls_tlsctx_protocolrange.h"
namespace System::Mono::Unity { struct UnityTls_unitytls_tlsctx_protocolrange; };
#include "Mono_Unity_UnityTls_unitytls_tlsctx_callbacks.h"
namespace System::Mono::Unity { struct UnityTls_unitytls_tlsctx_callbacks; };
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System { struct Byte; };
namespace System::Mono::Unity { struct UnityTls_unitytls_errorstate; };
namespace System::Mono::Unity { struct UnityTls_unitytls_errorstate; };
namespace mscorlib::System { struct IAsyncResult; };
namespace mscorlib::System { struct AsyncCallback; };

namespace System::Mono::Unity
{
	struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_create_client_t : mscorlib::System::MulticastDelegate
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor(mscorlib::System::Object* object, intptr_t method);
		System::Mono::Unity::UnityTls_unitytls_tlsctx* Invoke(System::Mono::Unity::UnityTls_unitytls_tlsctx_protocolrange supportedProtocols, System::Mono::Unity::UnityTls_unitytls_tlsctx_callbacks callbacks, uint8_t* cn, intptr_t cnLen, System::Mono::Unity::UnityTls_unitytls_errorstate* errorState);
		mscorlib::System::IAsyncResult* BeginInvoke(System::Mono::Unity::UnityTls_unitytls_tlsctx_protocolrange supportedProtocols, System::Mono::Unity::UnityTls_unitytls_tlsctx_callbacks callbacks, uint8_t* cn, intptr_t cnLen, System::Mono::Unity::UnityTls_unitytls_errorstate* errorState, mscorlib::System::AsyncCallback* callback, mscorlib::System::Object* object);
		System::Mono::Unity::UnityTls_unitytls_tlsctx* EndInvoke(mscorlib::System::IAsyncResult* result);
	};
}

