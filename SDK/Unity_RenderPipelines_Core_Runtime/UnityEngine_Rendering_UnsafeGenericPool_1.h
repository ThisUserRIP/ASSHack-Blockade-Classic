#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { template <typename T> struct ObjectPool_1; };
#include "UnityEngine_Rendering_ObjectPool_1_PooledObject.h"
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { template <typename T> struct ObjectPool_1_PooledObject; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering
{
	template <typename T> struct UnsafeGenericPool_1 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass()
		{
			IL2CPP::Array<mscorlib::System::Type*>* arrayType = new IL2CPP::Array<mscorlib::System::Type*>();
			arrayType->max_length = 1;
			arrayType->vector[0] = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(T::GetIl2CppClass()));
			intptr_t handle = ((intptr_t)il2cpp_class_get_type(GetIL2CppClass("Unity.RenderPipelines.Core.Runtime.dll", "UnityEngine.Rendering", "UnsafeGenericPool`1")));
			const IL2CPP::Il2CppType* Il2CppType = (const IL2CPP::Il2CppType*)(mscorlib::System::Type::internal_from_handle(handle)->MakeGenericType(arrayType)->get_TypeHandle().value);
			IL2CPP::Il2CppClass* il2cppclass = il2cpp_class_from_type(Il2CppType);
			return il2cppclass;
		}
		static mscorlib::System::Type* GetIl2CppType()
		{
			static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
			return il2cpptype;
		}
		struct StaticFields
		{
			Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ObjectPool_1<T>* s_Pool;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static T* Get()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Get");
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
			return GetGenericValue<T>(returnValue);;
		}
		static Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ObjectPool_1_PooledObject<T> Get(T& value)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Get", std::vector<std::string> { GetGenericTypeName<T>() + (std::string)"&" });
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)&value;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			if (returnValue == nullptr)
			{
				Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ObjectPool_1_PooledObject<T> ret;
				std::memset(&ret, 0, sizeof(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ObjectPool_1_PooledObject<T>));
				return ret;
			}
			return static_cast<Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ObjectPool_1_PooledObject<T>>(*(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ObjectPool_1_PooledObject<T>*)il2cpp_object_unbox(returnValue));
		}
		static void Release(T* toRelease)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Release", std::vector<std::string> { GetGenericTypeName<T>() });
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)toRelease;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		static void _cctor()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
		}
	};
}

