#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Rendering_Universal_ScriptableRenderPass.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Material; };
#include "..\UnityEngine_CoreModule\UnityEngine_Experimental_Rendering_GraphicsFormat.h"
#include "UnityEngine_Rendering_Universal_RenderTargetHandle.h"
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct RenderTargetHandle; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "UnityEngine_Rendering_Universal_RenderPassEvent.h"
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct PostProcessData; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_ScriptableRenderContext.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct ScriptableRenderContext; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct RenderingData; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct RenderingData; };
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct CommandBuffer; };
namespace UnityEngine_CoreModule::UnityEngine { struct Shader; };

namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal
{
	struct ColorGradingLutPass : Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRenderPass
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Material* m_LutBuilderLdr;
		UnityEngine_CoreModule::UnityEngine::Material* m_LutBuilderHdr;
		UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat m_HdrLutFormat;
		UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat m_LdrLutFormat;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderTargetHandle m_InternalLut;
		void _ctor(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderPassEvent evt, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::PostProcessData* data);
		void Setup(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderTargetHandle& internalLut);
		void Execute(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext context, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderingData& renderingData);
		void OnFinishCameraStackRendering(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd);
		void Cleanup();
		UnityEngine_CoreModule::UnityEngine::Material* __ctor_g__Load_5_0(UnityEngine_CoreModule::UnityEngine::Shader* shader);
	};
}

