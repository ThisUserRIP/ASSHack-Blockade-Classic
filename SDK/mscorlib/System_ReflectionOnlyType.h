#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_RuntimeType.h"
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_RuntimeTypeHandle.h"
namespace mscorlib::System { struct RuntimeTypeHandle; };

namespace mscorlib::System
{
	struct ReflectionOnlyType : mscorlib::System::RuntimeType
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor();
		mscorlib::System::RuntimeTypeHandle get_TypeHandle();
	};
}

