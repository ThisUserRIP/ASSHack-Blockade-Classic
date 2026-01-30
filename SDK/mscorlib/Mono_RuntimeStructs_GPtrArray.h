#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Mono_RuntimeStructs.h"
namespace mscorlib::Mono { struct RuntimeStructs; };
namespace mscorlib::System { struct IntPtr; };
namespace mscorlib::System { struct IntPtr; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace mscorlib::Mono
{
	struct RuntimeStructs_GPtrArray
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		intptr_t* data;
		int32_t len;
	};
}

