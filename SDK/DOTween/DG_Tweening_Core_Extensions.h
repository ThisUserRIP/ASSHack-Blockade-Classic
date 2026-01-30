#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Reflection_MethodInfo.h"
#include "DG_Tweening_Core_Enums_SpecialStartupMode.h"
namespace DOTween::DG::Tweening::Core { template <typename T1, typename T2, typename TPlugOptions> struct TweenerCore_3; };

namespace DOTween::DG::Tweening::Core
{
	struct Extensions : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		template <typename T> static T* SetSpecialStartupMode(T* t, DOTween::DG::Tweening::Core::Enums::SpecialStartupMode mode)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetSpecialStartupMode", std::vector<std::string> { GetGenericTypeName<T>(), "DG.Tweening.Core.Enums.SpecialStartupMode" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)t;
			params[1] = (intptr_t)&mode;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return GetGenericValue<T>(returnValue);;
		}
		template <typename T1, typename T2, typename TPlugOptions> static DOTween::DG::Tweening::Core::TweenerCore_3<T1, T2, TPlugOptions>* Blendable(DOTween::DG::Tweening::Core::TweenerCore_3<T1, T2, TPlugOptions>* t)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Blendable", std::vector<std::string> { "DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(3);
			typeArguments->vector[0] = T1::GetIl2CppType();
			typeArguments->vector[1] = T2::GetIl2CppType();
			typeArguments->vector[2] = TPlugOptions::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)t;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (DOTween::DG::Tweening::Core::TweenerCore_3<T1, T2, TPlugOptions>*)returnValue;
		}
		template <typename T1, typename T2, typename TPlugOptions> static DOTween::DG::Tweening::Core::TweenerCore_3<T1, T2, TPlugOptions>* NoFrom(DOTween::DG::Tweening::Core::TweenerCore_3<T1, T2, TPlugOptions>* t)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "NoFrom", std::vector<std::string> { "DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(3);
			typeArguments->vector[0] = T1::GetIl2CppType();
			typeArguments->vector[1] = T2::GetIl2CppType();
			typeArguments->vector[2] = TPlugOptions::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)t;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (DOTween::DG::Tweening::Core::TweenerCore_3<T1, T2, TPlugOptions>*)returnValue;
		}
	};
}

