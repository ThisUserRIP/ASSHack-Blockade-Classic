#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "DG_Tweening_Tween.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Reflection_MethodInfo.h"
namespace DOTween::DG::Tweening::Core { template <typename T1, typename T2, typename TPlugOptions> struct TweenerCore_3; };
namespace DOTween::DG::Tweening::Core { template <typename T> struct DOGetter_1; };
namespace DOTween::DG::Tweening::Core { template <typename T> struct DOSetter_1; };
namespace DOTween::DG::Tweening::Plugins::Core { template <typename T1, typename T2, typename TPlugOptions> struct ABSTweenPlugin_3; };

namespace DOTween::DG::Tweening
{
	struct Tweener : DOTween::DG::Tweening::Tween
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool hasManuallySetStartValue;
		bool isFromAllowed;
		void _ctor();
		DOTween::DG::Tweening::Tweener* ChangeStartValue(mscorlib::System::Object* newStartValue, float newDuration);
		DOTween::DG::Tweening::Tweener* ChangeEndValue(mscorlib::System::Object* newEndValue, float newDuration, bool snapStartValue);
		DOTween::DG::Tweening::Tweener* ChangeEndValue(mscorlib::System::Object* newEndValue, bool snapStartValue);
		DOTween::DG::Tweening::Tweener* ChangeValues(mscorlib::System::Object* newStartValue, mscorlib::System::Object* newEndValue, float newDuration);
		DOTween::DG::Tweening::Tweener* SetFrom(bool relative);
		template <typename T1, typename T2, typename TPlugOptions> static bool Setup(DOTween::DG::Tweening::Core::TweenerCore_3<T1, T2, TPlugOptions>* t, DOTween::DG::Tweening::Core::DOGetter_1<T1>* getter, DOTween::DG::Tweening::Core::DOSetter_1<T1>* setter, T2* endValue, float duration, DOTween::DG::Tweening::Plugins::Core::ABSTweenPlugin_3<T1, T2, TPlugOptions>* plugin)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Setup", std::vector<std::string> { "DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>", "DG.Tweening.Core.DOGetter`1<T1>", "DG.Tweening.Core.DOSetter`1<T1>", GetGenericTypeName<T2>(), "System.Single", "DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions>" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(3);
			typeArguments->vector[0] = T1::GetIl2CppType();
			typeArguments->vector[1] = T2::GetIl2CppType();
			typeArguments->vector[2] = TPlugOptions::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[6];
			params[0] = (intptr_t)t;
			params[1] = (intptr_t)getter;
			params[2] = (intptr_t)setter;
			params[3] = (intptr_t)endValue;
			params[4] = (intptr_t)&duration;
			params[5] = (intptr_t)plugin;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			if (returnValue == nullptr)
			{
				bool ret;
				std::memset(&ret, 0, sizeof(bool));
				return ret;
			}
			return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
		}
		template <typename T1, typename T2, typename TPlugOptions> static float DoUpdateDelay(DOTween::DG::Tweening::Core::TweenerCore_3<T1, T2, TPlugOptions>* t, float elapsed)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DoUpdateDelay", std::vector<std::string> { "DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>", "System.Single" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(3);
			typeArguments->vector[0] = T1::GetIl2CppType();
			typeArguments->vector[1] = T2::GetIl2CppType();
			typeArguments->vector[2] = TPlugOptions::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)t;
			params[1] = (intptr_t)&elapsed;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			if (returnValue == nullptr)
			{
				float ret;
				std::memset(&ret, 0, sizeof(float));
				return ret;
			}
			return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
		}
		template <typename T1, typename T2, typename TPlugOptions> static bool DoStartup(DOTween::DG::Tweening::Core::TweenerCore_3<T1, T2, TPlugOptions>* t)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DoStartup", std::vector<std::string> { "DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>" });
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
			if (returnValue == nullptr)
			{
				bool ret;
				std::memset(&ret, 0, sizeof(bool));
				return ret;
			}
			return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
		}
		template <typename T1, typename T2, typename TPlugOptions> static DOTween::DG::Tweening::Core::TweenerCore_3<T1, T2, TPlugOptions>* DoChangeStartValue(DOTween::DG::Tweening::Core::TweenerCore_3<T1, T2, TPlugOptions>* t, T2* newStartValue, float newDuration)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DoChangeStartValue", std::vector<std::string> { "DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>", GetGenericTypeName<T2>(), "System.Single" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(3);
			typeArguments->vector[0] = T1::GetIl2CppType();
			typeArguments->vector[1] = T2::GetIl2CppType();
			typeArguments->vector[2] = TPlugOptions::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[3];
			params[0] = (intptr_t)t;
			params[1] = (intptr_t)newStartValue;
			params[2] = (intptr_t)&newDuration;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (DOTween::DG::Tweening::Core::TweenerCore_3<T1, T2, TPlugOptions>*)returnValue;
		}
		template <typename T1, typename T2, typename TPlugOptions> static DOTween::DG::Tweening::Core::TweenerCore_3<T1, T2, TPlugOptions>* DoChangeEndValue(DOTween::DG::Tweening::Core::TweenerCore_3<T1, T2, TPlugOptions>* t, T2* newEndValue, float newDuration, bool snapStartValue)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DoChangeEndValue", std::vector<std::string> { "DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>", GetGenericTypeName<T2>(), "System.Single", "System.Boolean" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(3);
			typeArguments->vector[0] = T1::GetIl2CppType();
			typeArguments->vector[1] = T2::GetIl2CppType();
			typeArguments->vector[2] = TPlugOptions::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[4];
			params[0] = (intptr_t)t;
			params[1] = (intptr_t)newEndValue;
			params[2] = (intptr_t)&newDuration;
			params[3] = (intptr_t)&snapStartValue;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (DOTween::DG::Tweening::Core::TweenerCore_3<T1, T2, TPlugOptions>*)returnValue;
		}
		template <typename T1, typename T2, typename TPlugOptions> static DOTween::DG::Tweening::Core::TweenerCore_3<T1, T2, TPlugOptions>* DoChangeValues(DOTween::DG::Tweening::Core::TweenerCore_3<T1, T2, TPlugOptions>* t, T2* newStartValue, T2* newEndValue, float newDuration)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DoChangeValues", std::vector<std::string> { "DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>", GetGenericTypeName<T2>(), GetGenericTypeName<T2>(), "System.Single" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(3);
			typeArguments->vector[0] = T1::GetIl2CppType();
			typeArguments->vector[1] = T2::GetIl2CppType();
			typeArguments->vector[2] = TPlugOptions::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[4];
			params[0] = (intptr_t)t;
			params[1] = (intptr_t)newStartValue;
			params[2] = (intptr_t)newEndValue;
			params[3] = (intptr_t)&newDuration;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (DOTween::DG::Tweening::Core::TweenerCore_3<T1, T2, TPlugOptions>*)returnValue;
		}
		template <typename T1, typename T2, typename TPlugOptions> static bool DOStartupSpecials(DOTween::DG::Tweening::Core::TweenerCore_3<T1, T2, TPlugOptions>* t)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOStartupSpecials", std::vector<std::string> { "DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>" });
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
			if (returnValue == nullptr)
			{
				bool ret;
				std::memset(&ret, 0, sizeof(bool));
				return ret;
			}
			return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
		}
		template <typename T1, typename T2, typename TPlugOptions> static void DOStartupDurationBased(DOTween::DG::Tweening::Core::TweenerCore_3<T1, T2, TPlugOptions>* t)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOStartupDurationBased", std::vector<std::string> { "DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>" });
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
			il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
	};
}

