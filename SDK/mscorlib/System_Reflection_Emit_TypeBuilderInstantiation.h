#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Reflection_TypeInfo.h"

namespace mscorlib::System::Reflection::Emit
{
	struct TypeBuilderInstantiation : mscorlib::System::Reflection::TypeInfo
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static mscorlib::System::Type* MakeGenericType(mscorlib::System::Type* type, IL2CPP::Array<mscorlib::System::Type*>* typeArguments);
	};
}

