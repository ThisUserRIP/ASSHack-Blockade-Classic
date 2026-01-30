#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Mono_RuntimeStructs.h"
namespace mscorlib::Mono { struct RuntimeStructs; };
#include "System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
namespace mscorlib::Mono { struct RuntimeStructs_MonoClass; };
namespace mscorlib::Mono { struct RuntimeStructs_MonoClass; };
#include "System_UInt32.h"
namespace mscorlib::System { struct UInt32; };

namespace mscorlib::Mono
{
	struct RuntimeStructs_RemoteClass
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		intptr_t default_vtable;
		intptr_t xdomain_vtable;
		mscorlib::Mono::RuntimeStructs_MonoClass* proxy_class;
		intptr_t proxy_class_name;
		uint32_t interface_count;
	};
}

