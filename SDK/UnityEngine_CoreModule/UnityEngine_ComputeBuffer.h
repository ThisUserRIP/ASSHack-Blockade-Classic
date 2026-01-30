#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "UnityEngine_ComputeBufferType.h"
#include "UnityEngine_ComputeBufferMode.h"
namespace mscorlib::System { struct Array; };
#include "..\mscorlib\System_Reflection_MethodInfo.h"
#include "Unity_Collections_NativeArray_1.h"
namespace UnityEngine_CoreModule::Unity::Collections { template <typename T> struct NativeArray_1; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace mscorlib::System { struct String; };

namespace UnityEngine_CoreModule::UnityEngine
{
	struct ComputeBuffer : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		intptr_t m_Ptr;
		void Finalize();
		void Dispose();
		void Dispose(bool disposing);
		static intptr_t InitBuffer(int32_t count, int32_t stride, UnityEngine_CoreModule::UnityEngine::ComputeBufferType type, UnityEngine_CoreModule::UnityEngine::ComputeBufferMode usage);
		static void DestroyBuffer(UnityEngine_CoreModule::UnityEngine::ComputeBuffer* buf);
		void _ctor(int32_t count, int32_t stride);
		void _ctor(int32_t count, int32_t stride, UnityEngine_CoreModule::UnityEngine::ComputeBufferType type);
		void _ctor(int32_t count, int32_t stride, UnityEngine_CoreModule::UnityEngine::ComputeBufferType type, UnityEngine_CoreModule::UnityEngine::ComputeBufferMode usage);
		void _ctor(int32_t count, int32_t stride, UnityEngine_CoreModule::UnityEngine::ComputeBufferType type, UnityEngine_CoreModule::UnityEngine::ComputeBufferMode usage, int32_t stackDepth);
		void Release();
		int32_t get_count();
		int32_t get_stride();
		void SetData(mscorlib::System::Array* data);
		template <typename T> void SetData(UnityEngine_CoreModule::Unity::Collections::NativeArray_1<T> data)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetData", std::vector<std::string> { "Unity.Collections.NativeArray`1<T>" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)&data;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		template <typename T> void SetData(mscorlib::System::Collections::Generic::List_1<T>* data, int32_t managedBufferStartIndex, int32_t computeBufferStartIndex, int32_t count)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetData", std::vector<std::string> { "System.Collections.Generic.List`1<T>", "System.Int32", "System.Int32", "System.Int32" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[4];
			params[0] = (intptr_t)data;
			params[1] = (intptr_t)&managedBufferStartIndex;
			params[2] = (intptr_t)&computeBufferStartIndex;
			params[3] = (intptr_t)&count;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		template <typename T> void SetData(UnityEngine_CoreModule::Unity::Collections::NativeArray_1<T> data, int32_t nativeBufferStartIndex, int32_t computeBufferStartIndex, int32_t count)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetData", std::vector<std::string> { "Unity.Collections.NativeArray`1<T>", "System.Int32", "System.Int32", "System.Int32" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[4];
			params[0] = (intptr_t)&data;
			params[1] = (intptr_t)&nativeBufferStartIndex;
			params[2] = (intptr_t)&computeBufferStartIndex;
			params[3] = (intptr_t)&count;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		void InternalSetNativeData(intptr_t data, int32_t nativeBufferStartIndex, int32_t computeBufferStartIndex, int32_t count, int32_t elemSize);
		void InternalSetData(mscorlib::System::Array* data, int32_t managedBufferStartIndex, int32_t computeBufferStartIndex, int32_t count, int32_t elemSize);
		void set_name(mscorlib::System::String* value);
		void SetName(mscorlib::System::String* name);
		static void CopyCount(UnityEngine_CoreModule::UnityEngine::ComputeBuffer* src, UnityEngine_CoreModule::UnityEngine::ComputeBuffer* dst, int32_t dstOffsetBytes);
	};
}

