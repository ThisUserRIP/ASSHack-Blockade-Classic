#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace System::Mono::Unity { struct UnityTls_unitytls_interface_struct; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace System::Mono::Unity
{
	struct UnityTls : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			System::Mono::Unity::UnityTls_unitytls_interface_struct* marshalledInterface;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static intptr_t GetUnityTlsInterface();
		static bool get_IsSupported();
		static System::Mono::Unity::UnityTls_unitytls_interface_struct* get_NativeInterface();
	};
}

