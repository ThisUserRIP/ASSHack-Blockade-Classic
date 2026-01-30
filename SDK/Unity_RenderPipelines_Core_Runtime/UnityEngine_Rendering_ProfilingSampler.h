#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace UnityEngine_CoreModule::UnityEngine::Profiling { struct CustomSampler; };
namespace mscorlib::System { struct String; };
namespace UnityEngine_CoreModule::UnityEngine::Profiling { struct Recorder; };
#include "..\mscorlib\System_Reflection_MethodInfo.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct CommandBuffer; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering
{
	struct ProfilingSampler : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Profiling::CustomSampler* _sampler_k__BackingField;
		UnityEngine_CoreModule::UnityEngine::Profiling::CustomSampler* _inlineSampler_k__BackingField;
		mscorlib::System::String* _name_k__BackingField;
		UnityEngine_CoreModule::UnityEngine::Profiling::Recorder* m_Recorder;
		UnityEngine_CoreModule::UnityEngine::Profiling::Recorder* m_InlineRecorder;
		template <typename TEnum> static Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ProfilingSampler* Get(TEnum* marker)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Get", std::vector<std::string> { GetGenericTypeName<TEnum>() });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = TEnum::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)marker;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ProfilingSampler*)returnValue;
		}
		void _ctor(mscorlib::System::String* name);
		void Begin(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd);
		void End(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd);
		bool IsValid();
		UnityEngine_CoreModule::UnityEngine::Profiling::CustomSampler* get_sampler();
		void set_sampler(UnityEngine_CoreModule::UnityEngine::Profiling::CustomSampler* value);
		UnityEngine_CoreModule::UnityEngine::Profiling::CustomSampler* get_inlineSampler();
		void set_inlineSampler(UnityEngine_CoreModule::UnityEngine::Profiling::CustomSampler* value);
		mscorlib::System::String* get_name();
		void set_name(mscorlib::System::String* value);
		void set_enableRecording(bool value);
		float get_gpuElapsedTime();
		int32_t get_gpuSampleCount();
		float get_cpuElapsedTime();
		int32_t get_cpuSampleCount();
		float get_inlineCpuElapsedTime();
		int32_t get_inlineCpuSampleCount();
		void _ctor();
	};
}

