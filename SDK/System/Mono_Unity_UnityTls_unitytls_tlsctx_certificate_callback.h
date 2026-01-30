#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_MulticastDelegate.h"
#include "Mono_Unity_UnityTls.h"
namespace System::Mono::Unity { struct UnityTls; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
namespace System::Mono::Unity { struct UnityTls_unitytls_tlsctx; };
namespace System::Mono::Unity { struct UnityTls_unitytls_tlsctx; };
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System { struct Byte; };
namespace System::Mono::Unity { struct UnityTls_unitytls_x509name; };
namespace System::Mono::Unity { struct UnityTls_unitytls_x509name; };
namespace System::Mono::Unity { struct UnityTls_unitytls_x509list_ref; };
namespace System::Mono::Unity { struct UnityTls_unitytls_x509list_ref; };
namespace System::Mono::Unity { struct UnityTls_unitytls_key_ref; };
namespace System::Mono::Unity { struct UnityTls_unitytls_key_ref; };
namespace System::Mono::Unity { struct UnityTls_unitytls_errorstate; };
namespace System::Mono::Unity { struct UnityTls_unitytls_errorstate; };
namespace mscorlib::System { struct IAsyncResult; };
namespace mscorlib::System { struct AsyncCallback; };

namespace System::Mono::Unity
{
	struct UnityTls_unitytls_tlsctx_certificate_callback : mscorlib::System::MulticastDelegate
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor(mscorlib::System::Object* object, intptr_t method);
		void Invoke(void* userData, System::Mono::Unity::UnityTls_unitytls_tlsctx* ctx, uint8_t* cn, intptr_t cnLen, System::Mono::Unity::UnityTls_unitytls_x509name* caList, intptr_t caListLen, System::Mono::Unity::UnityTls_unitytls_x509list_ref* chain, System::Mono::Unity::UnityTls_unitytls_key_ref* key, System::Mono::Unity::UnityTls_unitytls_errorstate* errorState);
		mscorlib::System::IAsyncResult* BeginInvoke(void* userData, System::Mono::Unity::UnityTls_unitytls_tlsctx* ctx, uint8_t* cn, intptr_t cnLen, System::Mono::Unity::UnityTls_unitytls_x509name* caList, intptr_t caListLen, System::Mono::Unity::UnityTls_unitytls_x509list_ref* chain, System::Mono::Unity::UnityTls_unitytls_key_ref* key, System::Mono::Unity::UnityTls_unitytls_errorstate* errorState, mscorlib::System::AsyncCallback* callback, mscorlib::System::Object* object);
		void EndInvoke(mscorlib::System::IAsyncResult* result);
	};
}

