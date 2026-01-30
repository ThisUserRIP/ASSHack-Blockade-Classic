#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Reflection_MethodInfo.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Rewired_Core { template <typename T, typename TArgs> struct rJHfEhelMTTyXpbBWRvTDEOhMroD_EventFunction_2; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IList_1; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Rewired_Core
{
	struct rJHfEhelMTTyXpbBWRvTDEOhMroD : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		template <typename T, typename TArgs> static void avcFnkggBMClyJJTtIQlefqnFCf(T* A_0, TArgs* A_1, Rewired_Core::rJHfEhelMTTyXpbBWRvTDEOhMroD_EventFunction_2<T, TArgs>* A_2)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "avcFnkggBMClyJJTtIQlefqnFCf");
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(2);
			typeArguments->vector[0] = T::GetIl2CppType();
			typeArguments->vector[1] = TArgs::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[3];
			params[0] = (intptr_t)A_0;
			params[1] = (intptr_t)A_1;
			params[2] = (intptr_t)A_2;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		template <typename T, typename TArgs> static void avcFnkggBMClyJJTtIQlefqnFCf(mscorlib::System::Collections::Generic::IList_1<T>* A_0, TArgs* A_1, Rewired_Core::rJHfEhelMTTyXpbBWRvTDEOhMroD_EventFunction_2<T, TArgs>* A_2)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "avcFnkggBMClyJJTtIQlefqnFCf");
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(2);
			typeArguments->vector[0] = T::GetIl2CppType();
			typeArguments->vector[1] = TArgs::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[3];
			params[0] = (intptr_t)A_0;
			params[1] = (intptr_t)A_1;
			params[2] = (intptr_t)A_2;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		template <typename T, typename TArgs> static void BgRApfEufkHQnOsMKbUWcGFXODxq(mscorlib::System::Collections::Generic::IList_1<T>* A_0, TArgs* A_1, Rewired_Core::rJHfEhelMTTyXpbBWRvTDEOhMroD_EventFunction_2<T, TArgs>* A_2, bool A_3)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BgRApfEufkHQnOsMKbUWcGFXODxq");
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(2);
			typeArguments->vector[0] = T::GetIl2CppType();
			typeArguments->vector[1] = TArgs::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[4];
			params[0] = (intptr_t)A_0;
			params[1] = (intptr_t)A_1;
			params[2] = (intptr_t)A_2;
			params[3] = (intptr_t)&A_3;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
	};
}

