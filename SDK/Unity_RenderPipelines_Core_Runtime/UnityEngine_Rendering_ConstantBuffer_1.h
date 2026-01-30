#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Rendering_ConstantBufferBase.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace System_Core::System::Collections::Generic { template <typename T> struct HashSet_1; };
namespace UnityEngine_CoreModule::UnityEngine { struct ComputeBuffer; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct CommandBuffer; };
namespace UnityEngine_CoreModule::UnityEngine { struct ComputeShader; };
namespace UnityEngine_CoreModule::UnityEngine { struct Material; };

namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering
{
	template <typename CBType> struct ConstantBuffer_1 : Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ConstantBufferBase
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass()
		{
			IL2CPP::Array<mscorlib::System::Type*>* arrayType = new IL2CPP::Array<mscorlib::System::Type*>();
			arrayType->max_length = 1;
			arrayType->vector[0] = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(CBType::GetIl2CppClass()));
			intptr_t handle = ((intptr_t)il2cpp_class_get_type(GetIL2CppClass("Unity.RenderPipelines.Core.Runtime.dll", "UnityEngine.Rendering", "ConstantBuffer`1")));
			const IL2CPP::Il2CppType* Il2CppType = (const IL2CPP::Il2CppType*)(mscorlib::System::Type::internal_from_handle(handle)->MakeGenericType(arrayType)->get_TypeHandle().value);
			IL2CPP::Il2CppClass* il2cppclass = il2cpp_class_from_type(Il2CppType);
			return il2cppclass;
		}
		static mscorlib::System::Type* GetIl2CppType()
		{
			static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
			return il2cpptype;
		}
		System_Core::System::Collections::Generic::HashSet_1<mscorlib::System::Int32>* m_GlobalBindings;
		IL2CPP::Array<CBType>* m_Data;
		UnityEngine_CoreModule::UnityEngine::ComputeBuffer* m_GPUConstantBuffer;
		void _ctor()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
		}
		void UpdateData(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, CBType& data)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UpdateData", std::vector<std::string> { "UnityEngine.Rendering.CommandBuffer", GetGenericTypeName<CBType>() + (std::string)"&" });
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)cmd;
			params[1] = (intptr_t)&data;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		void SetGlobal(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, int32_t shaderId)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetGlobal", std::vector<std::string> { "UnityEngine.Rendering.CommandBuffer", "System.Int32" });
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)cmd;
			params[1] = (intptr_t)&shaderId;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		void Set(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, UnityEngine_CoreModule::UnityEngine::ComputeShader* cs, int32_t shaderId)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Set", std::vector<std::string> { "UnityEngine.Rendering.CommandBuffer", "UnityEngine.ComputeShader", "System.Int32" });
			intptr_t* params = new intptr_t[3];
			params[0] = (intptr_t)cmd;
			params[1] = (intptr_t)cs;
			params[2] = (intptr_t)&shaderId;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		void Set(UnityEngine_CoreModule::UnityEngine::Material* mat, int32_t shaderId)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Set", std::vector<std::string> { "UnityEngine.Material", "System.Int32" });
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)mat;
			params[1] = (intptr_t)&shaderId;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		void PushGlobal(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, CBType& data, int32_t shaderId)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PushGlobal", std::vector<std::string> { "UnityEngine.Rendering.CommandBuffer", GetGenericTypeName<CBType>() + (std::string)"&", "System.Int32" });
			intptr_t* params = new intptr_t[3];
			params[0] = (intptr_t)cmd;
			params[1] = (intptr_t)&data;
			params[2] = (intptr_t)&shaderId;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		void Release()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Release");
			const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
		}
	};
}

