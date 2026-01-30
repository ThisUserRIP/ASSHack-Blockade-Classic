#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace UnityEngine_CoreModule::UnityEngine { struct ComputeBuffer; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Reflection_MethodInfo.h"

namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal
{
	struct ShaderData : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::ComputeBuffer* m_LightDataBuffer;
		UnityEngine_CoreModule::UnityEngine::ComputeBuffer* m_LightIndicesBuffer;
		UnityEngine_CoreModule::UnityEngine::ComputeBuffer* m_ShadowDataBuffer;
		UnityEngine_CoreModule::UnityEngine::ComputeBuffer* m_ShadowIndicesBuffer;
		struct StaticFields
		{
			Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ShaderData* m_Instance;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		static Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ShaderData* get_instance();
		void Dispose();
		UnityEngine_CoreModule::UnityEngine::ComputeBuffer* GetLightDataBuffer(int32_t size);
		UnityEngine_CoreModule::UnityEngine::ComputeBuffer* GetLightIndicesBuffer(int32_t size);
		UnityEngine_CoreModule::UnityEngine::ComputeBuffer* GetShadowDataBuffer(int32_t size);
		UnityEngine_CoreModule::UnityEngine::ComputeBuffer* GetShadowIndicesBuffer(int32_t size);
		template <typename T> UnityEngine_CoreModule::UnityEngine::ComputeBuffer* GetOrUpdateBuffer(UnityEngine_CoreModule::UnityEngine::ComputeBuffer& buffer, int32_t size)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetOrUpdateBuffer", std::vector<std::string> { "UnityEngine.ComputeBuffer&", "System.Int32" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)&buffer;
			params[1] = (intptr_t)&size;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (UnityEngine_CoreModule::UnityEngine::ComputeBuffer*)returnValue;
		}
		void DisposeBuffer(UnityEngine_CoreModule::UnityEngine::ComputeBuffer& buffer);
		static void _cctor();
	};
}

