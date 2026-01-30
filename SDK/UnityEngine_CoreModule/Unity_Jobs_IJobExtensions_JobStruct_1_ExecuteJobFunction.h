#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_MulticastDelegate.h"
#include "Unity_Jobs_IJobExtensions_JobStruct_1.h"
namespace UnityEngine_CoreModule::Unity::Jobs { template <typename T> struct IJobExtensions_JobStruct_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
namespace UnityEngine_CoreModule::Unity::Jobs::LowLevel::Unsafe { struct JobRanges; };
namespace UnityEngine_CoreModule::Unity::Jobs::LowLevel::Unsafe { struct JobRanges; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct IAsyncResult; };
namespace mscorlib::System { struct AsyncCallback; };

namespace UnityEngine_CoreModule::Unity::Jobs
{
	template <typename T> struct IJobExtensions_JobStruct_1_ExecuteJobFunction : mscorlib::System::MulticastDelegate
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass()
		{
			IL2CPP::Array<mscorlib::System::Type*>* arrayType = new IL2CPP::Array<mscorlib::System::Type*>();
			arrayType->max_length = 1;
			arrayType->vector[0] = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(T::GetIl2CppClass()));
			intptr_t handle = ((intptr_t)il2cpp_class_get_type(GetIl2CppNestedType(UnityEngine_CoreModule::Unity::Jobs::IJobExtensions_JobStruct_1<T>::GetIl2CppClass(), "ExecuteJobFunction")));
			const IL2CPP::Il2CppType* Il2CppType = (const IL2CPP::Il2CppType*)(mscorlib::System::Type::internal_from_handle(handle)->MakeGenericType(arrayType)->get_TypeHandle().value);
			IL2CPP::Il2CppClass* il2cppclass = il2cpp_class_from_type(Il2CppType);
			return il2cppclass;
		}
		static mscorlib::System::Type* GetIl2CppType()
		{
			static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
			return il2cpptype;
		}
		void _ctor(mscorlib::System::Object* object, intptr_t method)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Object", "System.IntPtr" });
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)object;
			params[1] = (intptr_t)&method;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		void Invoke(T& data, intptr_t additionalPtr, intptr_t bufferRangePatchData, UnityEngine_CoreModule::Unity::Jobs::LowLevel::Unsafe::JobRanges& ranges, int32_t jobIndex)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Invoke", std::vector<std::string> { GetGenericTypeName<T>() + (std::string)"&", "System.IntPtr", "System.IntPtr", "Unity.Jobs.LowLevel.Unsafe.JobRanges&", "System.Int32" });
			const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
			intptr_t* params = new intptr_t[5];
			params[0] = (intptr_t)&data;
			params[1] = (intptr_t)&additionalPtr;
			params[2] = (intptr_t)&bufferRangePatchData;
			params[3] = (intptr_t)&ranges;
			params[4] = (intptr_t)&jobIndex;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		mscorlib::System::IAsyncResult* BeginInvoke(T& data, intptr_t additionalPtr, intptr_t bufferRangePatchData, UnityEngine_CoreModule::Unity::Jobs::LowLevel::Unsafe::JobRanges& ranges, int32_t jobIndex, mscorlib::System::AsyncCallback* callback, mscorlib::System::Object* object)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BeginInvoke", std::vector<std::string> { GetGenericTypeName<T>() + (std::string)"&", "System.IntPtr", "System.IntPtr", "Unity.Jobs.LowLevel.Unsafe.JobRanges&", "System.Int32", "System.AsyncCallback", "System.Object" });
			const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
			intptr_t* params = new intptr_t[7];
			params[0] = (intptr_t)&data;
			params[1] = (intptr_t)&additionalPtr;
			params[2] = (intptr_t)&bufferRangePatchData;
			params[3] = (intptr_t)&ranges;
			params[4] = (intptr_t)&jobIndex;
			params[5] = (intptr_t)callback;
			params[6] = (intptr_t)object;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (mscorlib::System::IAsyncResult*)returnValue;
		}
		void EndInvoke(T& data, UnityEngine_CoreModule::Unity::Jobs::LowLevel::Unsafe::JobRanges& ranges, mscorlib::System::IAsyncResult* result)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EndInvoke", std::vector<std::string> { GetGenericTypeName<T>() + (std::string)"&", "Unity.Jobs.LowLevel.Unsafe.JobRanges&", "System.IAsyncResult" });
			const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
			intptr_t* params = new intptr_t[3];
			params[0] = (intptr_t)&data;
			params[1] = (intptr_t)&ranges;
			params[2] = (intptr_t)result;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
	};
}

