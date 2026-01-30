#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Reflection_MethodInfo.h"
namespace mscorlib::System::Collections::Generic { template <typename T> struct IEnumerable_1; };
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct Int32; };

namespace System::System::Collections::Generic
{
	struct EnumerableHelpers : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		template <typename T> static IL2CPP::Array<T>* ToArray(mscorlib::System::Collections::Generic::IEnumerable_1<T>* source, int32_t& length)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToArray", std::vector<std::string> { "System.Collections.Generic.IEnumerable`1<T>", "System.Int32&" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)source;
			params[1] = (intptr_t)&length;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (IL2CPP::Array<T>*)returnValue;
		}
	};
}

