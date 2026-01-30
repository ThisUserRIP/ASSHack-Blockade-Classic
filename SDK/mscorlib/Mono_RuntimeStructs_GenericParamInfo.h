#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Mono_RuntimeStructs.h"
namespace mscorlib::Mono { struct RuntimeStructs; };
namespace mscorlib::Mono { struct RuntimeStructs_MonoClass; };
namespace mscorlib::Mono { struct RuntimeStructs_MonoClass; };
#include "System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "System_UInt16.h"
namespace mscorlib::System { struct UInt16; };
#include "System_UInt32.h"
namespace mscorlib::System { struct UInt32; };

namespace mscorlib::Mono
{
	struct RuntimeStructs_GenericParamInfo
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::Mono::RuntimeStructs_MonoClass* pklass;
		intptr_t name;
		uint16_t flags;
		uint32_t token;
		mscorlib::Mono::RuntimeStructs_MonoClass* constraints;
	};
}

