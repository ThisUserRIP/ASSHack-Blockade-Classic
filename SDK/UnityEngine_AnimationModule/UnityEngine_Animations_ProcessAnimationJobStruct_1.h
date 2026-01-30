#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::Unity::Jobs::LowLevel::Unsafe { struct JobRanges; };
namespace UnityEngine_CoreModule::Unity::Jobs::LowLevel::Unsafe { struct JobRanges; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace UnityEngine_AnimationModule::UnityEngine::Animations
{
	template <typename T> struct ProcessAnimationJobStruct_1
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass()
		{
			IL2CPP::Array<mscorlib::System::Type*>* arrayType = new IL2CPP::Array<mscorlib::System::Type*>();
			arrayType->max_length = 1;
			arrayType->vector[0] = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(T::GetIl2CppClass()));
			intptr_t handle = ((intptr_t)il2cpp_class_get_type(GetIL2CppClass("UnityEngine.AnimationModule.dll", "UnityEngine.Animations", "ProcessAnimationJobStruct`1")));
			const IL2CPP::Il2CppType* Il2CppType = (const IL2CPP::Il2CppType*)(mscorlib::System::Type::internal_from_handle(handle)->MakeGenericType(arrayType)->get_TypeHandle().value);
			IL2CPP::Il2CppClass* il2cppclass = il2cpp_class_from_type(Il2CppType);
			return il2cppclass;
		}
		static mscorlib::System::Type* GetIl2CppType()
		{
			static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
			return il2cpptype;
		}
		static intptr_t GetJobReflectionData()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetJobReflectionData");
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
			if (returnValue == nullptr)
			{
				intptr_t ret;
				std::memset(&ret, 0, sizeof(intptr_t));
				return ret;
			}
			return static_cast<intptr_t>(*(intptr_t*)il2cpp_object_unbox(returnValue));
		}
		static void Execute(T& data, intptr_t animationStreamPtr, intptr_t methodIndex, UnityEngine_CoreModule::Unity::Jobs::LowLevel::Unsafe::JobRanges& ranges, int32_t jobIndex)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Execute", std::vector<std::string> { GetGenericTypeName<T>() + (std::string)"&", "System.IntPtr", "System.IntPtr", "Unity.Jobs.LowLevel.Unsafe.JobRanges&", "System.Int32" });
			intptr_t* params = new intptr_t[5];
			params[0] = (intptr_t)&data;
			params[1] = (intptr_t)&animationStreamPtr;
			params[2] = (intptr_t)&methodIndex;
			params[3] = (intptr_t)&ranges;
			params[4] = (intptr_t)&jobIndex;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
	};
}

