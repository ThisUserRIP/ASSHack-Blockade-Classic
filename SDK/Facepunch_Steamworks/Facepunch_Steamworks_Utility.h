#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "..\mscorlib\System_Double.h"
namespace mscorlib::System { struct Double; };
#include "..\mscorlib\System_Reflection_MethodInfo.h"
namespace mscorlib::System::Collections::Generic { template <typename T> struct IEnumerable_1; };
namespace mscorlib::System { template <typename T1, typename T2, typename TResult> struct Func_3; };

namespace Facepunch_Steamworks::Facepunch::Steamworks
{
	struct Utility : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static mscorlib::System::String* FormatPrice(mscorlib::System::String* currency, uint64_t price);
		static mscorlib::System::String* FormatPrice(mscorlib::System::String* currency, double price);
		template <typename T> static mscorlib::System::Collections::Generic::IEnumerable_1<T>* UnionSelect(mscorlib::System::Collections::Generic::IEnumerable_1<T>* first, mscorlib::System::Collections::Generic::IEnumerable_1<T>* second, mscorlib::System::Func_3<T, T, T>* selector)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UnionSelect", std::vector<std::string> { "System.Collections.Generic.IEnumerable`1<T>", "System.Collections.Generic.IEnumerable`1<T>", "System.Func`3<T,T,T>" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[3];
			params[0] = (intptr_t)first;
			params[1] = (intptr_t)second;
			params[2] = (intptr_t)selector;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (mscorlib::System::Collections::Generic::IEnumerable_1<T>*)returnValue;
		}
	};
}

