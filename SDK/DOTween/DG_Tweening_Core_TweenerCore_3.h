#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "DG_Tweening_Tweener.h"
namespace DOTween::DG::Tweening::Core { template <typename T> struct DOGetter_1; };
namespace DOTween::DG::Tweening::Core { template <typename T> struct DOSetter_1; };
namespace DOTween::DG::Tweening::Plugins::Core { template <typename T1, typename T2, typename TPlugOptions> struct ABSTweenPlugin_3; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace DOTween::DG::Tweening { struct Tweener; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace DOTween::DG::Tweening::Core { template <typename T1, typename T2, typename TPlugOptions> struct TweenerCore_3; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "DG_Tweening_Core_Enums_UpdateMode.h"
#include "DG_Tweening_Core_Enums_UpdateNotice.h"

namespace DOTween::DG::Tweening::Core
{
	template <typename T1, typename T2, typename TPlugOptions> struct TweenerCore_3 : DOTween::DG::Tweening::Tweener
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass()
		{
			IL2CPP::Array<mscorlib::System::Type*>* arrayType = new IL2CPP::Array<mscorlib::System::Type*>();
			arrayType->max_length = 3;
			arrayType->vector[0] = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(T1::GetIl2CppClass()));
			arrayType->vector[1] = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(T2::GetIl2CppClass()));
			arrayType->vector[2] = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(TPlugOptions::GetIl2CppClass()));
			intptr_t handle = ((intptr_t)il2cpp_class_get_type(GetIL2CppClass("DOTween.dll", "DG.Tweening.Core", "TweenerCore`3")));
			const IL2CPP::Il2CppType* Il2CppType = (const IL2CPP::Il2CppType*)(mscorlib::System::Type::internal_from_handle(handle)->MakeGenericType(arrayType)->get_TypeHandle().value);
			IL2CPP::Il2CppClass* il2cppclass = il2cpp_class_from_type(Il2CppType);
			return il2cppclass;
		}
		static mscorlib::System::Type* GetIl2CppType()
		{
			static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
			return il2cpptype;
		}
		T2 startValue;
		T2 endValue;
		T2 changeValue;
		TPlugOptions plugOptions;
		DOTween::DG::Tweening::Core::DOGetter_1<T1>* getter;
		DOTween::DG::Tweening::Core::DOSetter_1<T1>* setter;
		DOTween::DG::Tweening::Plugins::Core::ABSTweenPlugin_3<T1, T2, TPlugOptions>* tweenPlugin;
		struct StaticFields
		{
			mscorlib::System::String* _TxtCantChangeSequencedValues;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
		}
		DOTween::DG::Tweening::Tweener* ChangeStartValue(mscorlib::System::Object* newStartValue, float newDuration)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ChangeStartValue", std::vector<std::string> { "System.Object", "System.Single" });
			const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)newStartValue;
			params[1] = (intptr_t)&newDuration;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (DOTween::DG::Tweening::Tweener*)returnValue;
		}
		DOTween::DG::Tweening::Tweener* ChangeEndValue(mscorlib::System::Object* newEndValue, bool snapStartValue)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ChangeEndValue", std::vector<std::string> { "System.Object", "System.Boolean" });
			const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)newEndValue;
			params[1] = (intptr_t)&snapStartValue;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (DOTween::DG::Tweening::Tweener*)returnValue;
		}
		DOTween::DG::Tweening::Tweener* ChangeEndValue(mscorlib::System::Object* newEndValue, float newDuration, bool snapStartValue)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ChangeEndValue", std::vector<std::string> { "System.Object", "System.Single", "System.Boolean" });
			const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
			intptr_t* params = new intptr_t[3];
			params[0] = (intptr_t)newEndValue;
			params[1] = (intptr_t)&newDuration;
			params[2] = (intptr_t)&snapStartValue;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (DOTween::DG::Tweening::Tweener*)returnValue;
		}
		DOTween::DG::Tweening::Tweener* ChangeValues(mscorlib::System::Object* newStartValue, mscorlib::System::Object* newEndValue, float newDuration)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ChangeValues", std::vector<std::string> { "System.Object", "System.Object", "System.Single" });
			const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
			intptr_t* params = new intptr_t[3];
			params[0] = (intptr_t)newStartValue;
			params[1] = (intptr_t)newEndValue;
			params[2] = (intptr_t)&newDuration;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (DOTween::DG::Tweening::Tweener*)returnValue;
		}
		DOTween::DG::Tweening::Core::TweenerCore_3<T1, T2, TPlugOptions>* ChangeStartValue(T2* newStartValue, float newDuration)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ChangeStartValue", std::vector<std::string> { GetGenericTypeName<T2>(), "System.Single" });
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)newStartValue;
			params[1] = (intptr_t)&newDuration;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (DOTween::DG::Tweening::Core::TweenerCore_3<T1, T2, TPlugOptions>*)returnValue;
		}
		DOTween::DG::Tweening::Core::TweenerCore_3<T1, T2, TPlugOptions>* ChangeEndValue(T2* newEndValue, bool snapStartValue)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ChangeEndValue", std::vector<std::string> { GetGenericTypeName<T2>(), "System.Boolean" });
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)newEndValue;
			params[1] = (intptr_t)&snapStartValue;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (DOTween::DG::Tweening::Core::TweenerCore_3<T1, T2, TPlugOptions>*)returnValue;
		}
		DOTween::DG::Tweening::Core::TweenerCore_3<T1, T2, TPlugOptions>* ChangeEndValue(T2* newEndValue, float newDuration, bool snapStartValue)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ChangeEndValue", std::vector<std::string> { GetGenericTypeName<T2>(), "System.Single", "System.Boolean" });
			intptr_t* params = new intptr_t[3];
			params[0] = (intptr_t)newEndValue;
			params[1] = (intptr_t)&newDuration;
			params[2] = (intptr_t)&snapStartValue;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (DOTween::DG::Tweening::Core::TweenerCore_3<T1, T2, TPlugOptions>*)returnValue;
		}
		DOTween::DG::Tweening::Core::TweenerCore_3<T1, T2, TPlugOptions>* ChangeValues(T2* newStartValue, T2* newEndValue, float newDuration)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ChangeValues", std::vector<std::string> { GetGenericTypeName<T2>(), GetGenericTypeName<T2>(), "System.Single" });
			intptr_t* params = new intptr_t[3];
			params[0] = (intptr_t)newStartValue;
			params[1] = (intptr_t)newEndValue;
			params[2] = (intptr_t)&newDuration;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (DOTween::DG::Tweening::Core::TweenerCore_3<T1, T2, TPlugOptions>*)returnValue;
		}
		DOTween::DG::Tweening::Tweener* SetFrom(bool relative)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetFrom", std::vector<std::string> { "System.Boolean" });
			const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)&relative;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (DOTween::DG::Tweening::Tweener*)returnValue;
		}
		DOTween::DG::Tweening::Tweener* SetFrom(T2* fromValue, bool setImmediately)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetFrom", std::vector<std::string> { GetGenericTypeName<T2>(), "System.Boolean" });
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)fromValue;
			params[1] = (intptr_t)&setImmediately;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (DOTween::DG::Tweening::Tweener*)returnValue;
		}
		void Reset()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Reset");
			const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
		}
		bool Validate()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Validate");
			const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
			if (returnValue == nullptr)
			{
				bool ret;
				std::memset(&ret, 0, sizeof(bool));
				return ret;
			}
			return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
		}
		float UpdateDelay(float elapsed)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UpdateDelay", std::vector<std::string> { "System.Single" });
			const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)&elapsed;
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
		bool Startup()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Startup");
			const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
			if (returnValue == nullptr)
			{
				bool ret;
				std::memset(&ret, 0, sizeof(bool));
				return ret;
			}
			return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
		}
		bool ApplyTween(float prevPosition, int32_t prevCompletedLoops, int32_t newCompletedSteps, bool useInversePosition, DOTween::DG::Tweening::Core::Enums::UpdateMode updateMode, DOTween::DG::Tweening::Core::Enums::UpdateNotice updateNotice)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ApplyTween", std::vector<std::string> { "System.Single", "System.Int32", "System.Int32", "System.Boolean", "DG.Tweening.Core.Enums.UpdateMode", "DG.Tweening.Core.Enums.UpdateNotice" });
			const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
			intptr_t* params = new intptr_t[6];
			params[0] = (intptr_t)&prevPosition;
			params[1] = (intptr_t)&prevCompletedLoops;
			params[2] = (intptr_t)&newCompletedSteps;
			params[3] = (intptr_t)&useInversePosition;
			params[4] = (intptr_t)&updateMode;
			params[5] = (intptr_t)&updateNotice;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
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
	};
}

