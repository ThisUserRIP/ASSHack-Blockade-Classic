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
#include "Mono_Unity_UnityTls_unitytls_x509verify_result.h"
#include "Mono_Unity_UnityTls_unitytls_x509_ref.h"
namespace System::Mono::Unity { struct UnityTls_unitytls_x509_ref; };
namespace System::Mono::Unity { struct UnityTls_unitytls_errorstate; };
namespace System::Mono::Unity { struct UnityTls_unitytls_errorstate; };
namespace mscorlib::System { struct IAsyncResult; };
namespace mscorlib::System { struct AsyncCallback; };

namespace System::Mono::Unity
{
	struct UnityTls_unitytls_x509verify_callback : mscorlib::System::MulticastDelegate
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor(mscorlib::System::Object* object, intptr_t method);
		System::Mono::Unity::UnityTls_unitytls_x509verify_result Invoke(void* userData, System::Mono::Unity::UnityTls_unitytls_x509_ref cert, System::Mono::Unity::UnityTls_unitytls_x509verify_result result, System::Mono::Unity::UnityTls_unitytls_errorstate* errorState);
		mscorlib::System::IAsyncResult* BeginInvoke(void* userData, System::Mono::Unity::UnityTls_unitytls_x509_ref cert, System::Mono::Unity::UnityTls_unitytls_x509verify_result result, System::Mono::Unity::UnityTls_unitytls_errorstate* errorState, mscorlib::System::AsyncCallback* callback, mscorlib::System::Object* object);
		System::Mono::Unity::UnityTls_unitytls_x509verify_result EndInvoke(mscorlib::System::IAsyncResult* result);
	};
}

