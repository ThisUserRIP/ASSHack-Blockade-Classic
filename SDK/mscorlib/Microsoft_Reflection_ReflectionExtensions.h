#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Reflection { struct Assembly; };
#include "System_TypeCode.h"

namespace mscorlib::Microsoft::Reflection
{
	struct ReflectionExtensions : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static bool IsEnum(mscorlib::System::Type* type);
		static bool IsAbstract(mscorlib::System::Type* type);
		static bool IsSealed(mscorlib::System::Type* type);
		static mscorlib::System::Type* BaseType(mscorlib::System::Type* type);
		static mscorlib::System::Reflection::Assembly* Assembly(mscorlib::System::Type* type);
		static mscorlib::System::TypeCode GetTypeCode(mscorlib::System::Type* type);
		static bool ReflectionOnly(mscorlib::System::Reflection::Assembly* assm);
	};
}

