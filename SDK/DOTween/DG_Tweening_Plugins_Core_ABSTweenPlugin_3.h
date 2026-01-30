#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace DOTween::DG::Tweening::Core { template <typename T1, typename T2, typename TPlugOptions> struct TweenerCore_3; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace DOTween::DG::Tweening { struct Tween; };
namespace DOTween::DG::Tweening::Core { template <typename T> struct DOGetter_1; };
namespace DOTween::DG::Tweening::Core { template <typename T> struct DOSetter_1; };
#include "DG_Tweening_Core_Enums_UpdateNotice.h"

namespace DOTween::DG::Tweening::Plugins::Core
{
	template <typename T1, typename T2, typename TPlugOptions> struct ABSTweenPlugin_3 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass()
		{
			IL2CPP::Array<mscorlib::System::Type*>* arrayType = new IL2CPP::Array<mscorlib::System::Type*>();
			arrayType->max_length = 3;
			arrayType->vector[0] = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(T1::GetIl2CppClass()));
			arrayType->vector[1] = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(T2::GetIl2CppClass()));
			arrayType->vector[2] = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(TPlugOptions::GetIl2CppClass()));
			intptr_t handle = ((intptr_t)il2cpp_class_get_type(GetIL2CppClass("DOTween.dll", "DG.Tweening.Plugins.Core", "ABSTweenPlugin`3")));
			const IL2CPP::Il2CppType* Il2CppType = (const IL2CPP::Il2CppType*)(mscorlib::System::Type::internal_from_handle(handle)->MakeGenericType(arrayType)->get_TypeHandle().value);
			IL2CPP::Il2CppClass* il2cppclass = il2cpp_class_from_type(Il2CppType);
			return il2cppclass;
		}
		static mscorlib::System::Type* GetIl2CppType()
		{
			static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
			return il2cpptype;
		}
		void Reset(DOTween::DG::Tweening::Core::TweenerCore_3<T1, T2, TPlugOptions>* t)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Reset", std::vector<std::string> { "DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>" });
			const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)t;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		void SetFrom(DOTween::DG::Tweening::Core::TweenerCore_3<T1, T2, TPlugOptions>* t, bool isRelative)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetFrom", std::vector<std::string> { "DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>", "System.Boolean" });
			const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)t;
			params[1] = (intptr_t)&isRelative;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		void SetFrom(DOTween::DG::Tweening::Core::TweenerCore_3<T1, T2, TPlugOptions>* t, T2* fromValue, bool setImmediately)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetFrom", std::vector<std::string> { "DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>", GetGenericTypeName<T2>(), "System.Boolean" });
			const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
			intptr_t* params = new intptr_t[3];
			params[0] = (intptr_t)t;
			params[1] = (intptr_t)fromValue;
			params[2] = (intptr_t)&setImmediately;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		T2* ConvertToStartValue(DOTween::DG::Tweening::Core::TweenerCore_3<T1, T2, TPlugOptions>* t, T1* value)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ConvertToStartValue", std::vector<std::string> { "DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>", GetGenericTypeName<T1>() });
			const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)t;
			params[1] = (intptr_t)value;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return GetGenericValue<T2>(returnValue);;
		}
		void SetRelativeEndValue(DOTween::DG::Tweening::Core::TweenerCore_3<T1, T2, TPlugOptions>* t)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetRelativeEndValue", std::vector<std::string> { "DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>" });
			const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)t;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		void SetChangeValue(DOTween::DG::Tweening::Core::TweenerCore_3<T1, T2, TPlugOptions>* t)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetChangeValue", std::vector<std::string> { "DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>" });
			const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)t;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		float GetSpeedBasedDuration(TPlugOptions* options, float unitsXSecond, T2* changeValue)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetSpeedBasedDuration", std::vector<std::string> { GetGenericTypeName<TPlugOptions>(), "System.Single", GetGenericTypeName<T2>() });
			const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
			intptr_t* params = new intptr_t[3];
			params[0] = (intptr_t)options;
			params[1] = (intptr_t)&unitsXSecond;
			params[2] = (intptr_t)changeValue;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
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
		void EvaluateAndApply(TPlugOptions* options, DOTween::DG::Tweening::Tween* t, bool isRelative, DOTween::DG::Tweening::Core::DOGetter_1<T1>* getter, DOTween::DG::Tweening::Core::DOSetter_1<T1>* setter, float elapsed, T2* startValue, T2* changeValue, float duration, bool usingInversePosition, DOTween::DG::Tweening::Core::Enums::UpdateNotice updateNotice)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EvaluateAndApply", std::vector<std::string> { GetGenericTypeName<TPlugOptions>(), "DG.Tweening.Tween", "System.Boolean", "DG.Tweening.Core.DOGetter`1<T1>", "DG.Tweening.Core.DOSetter`1<T1>", "System.Single", GetGenericTypeName<T2>(), GetGenericTypeName<T2>(), "System.Single", "System.Boolean", "DG.Tweening.Core.Enums.UpdateNotice" });
			const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
			intptr_t* params = new intptr_t[11];
			params[0] = (intptr_t)options;
			params[1] = (intptr_t)t;
			params[2] = (intptr_t)&isRelative;
			params[3] = (intptr_t)getter;
			params[4] = (intptr_t)setter;
			params[5] = (intptr_t)&elapsed;
			params[6] = (intptr_t)startValue;
			params[7] = (intptr_t)changeValue;
			params[8] = (intptr_t)&duration;
			params[9] = (intptr_t)&usingInversePosition;
			params[10] = (intptr_t)&updateNotice;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		void _ctor()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
		}
	};
}

