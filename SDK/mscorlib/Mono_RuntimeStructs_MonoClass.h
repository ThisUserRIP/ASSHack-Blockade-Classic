#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Mono_RuntimeStructs.h"
namespace mscorlib::Mono { struct RuntimeStructs; };

namespace mscorlib::Mono
{
	struct RuntimeStructs_MonoClass
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
	};
}

