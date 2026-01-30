#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Rendering_Universal_ScriptableRenderPass.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace UnityEngine_CoreModule::UnityEngine { struct Material; };
#include "UnityEngine_Rendering_Universal_Downsampling.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_RenderTargetIdentifier.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct RenderTargetIdentifier; };
#include "UnityEngine_Rendering_Universal_RenderTargetHandle.h"
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct RenderTargetHandle; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "UnityEngine_Rendering_Universal_RenderPassEvent.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct CommandBuffer; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct RenderingData; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct RenderingData; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_ScriptableRenderContext.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct ScriptableRenderContext; };

namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal
{
	struct CopyColorPass : Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRenderPass
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t m_SampleOffsetShaderHandle;
		UnityEngine_CoreModule::UnityEngine::Material* m_SamplingMaterial;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Downsampling m_DownsamplingMethod;
		UnityEngine_CoreModule::UnityEngine::Material* m_CopyColorMaterial;
		UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier _source_k__BackingField;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderTargetHandle _destination_k__BackingField;
		UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier get_source();
		void set_source(UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier value);
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderTargetHandle get_destination();
		void set_destination(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderTargetHandle value);
		void _ctor(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderPassEvent evt, UnityEngine_CoreModule::UnityEngine::Material* samplingMaterial, UnityEngine_CoreModule::UnityEngine::Material* copyColorMaterial);
		void Setup(UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier source, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderTargetHandle destination, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Downsampling downsampling);
		void OnCameraSetup(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderingData& renderingData);
		void Execute(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext context, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderingData& renderingData);
		void OnCameraCleanup(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd);
	};
}

