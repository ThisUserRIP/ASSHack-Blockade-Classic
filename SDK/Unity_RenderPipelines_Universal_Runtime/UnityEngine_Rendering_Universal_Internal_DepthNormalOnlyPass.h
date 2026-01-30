#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Rendering_Universal_ScriptableRenderPass.h"
#include "..\UnityEngine_CoreModule\UnityEngine_RenderTextureDescriptor.h"
namespace UnityEngine_CoreModule::UnityEngine { struct RenderTextureDescriptor; };
#include "UnityEngine_Rendering_Universal_RenderTargetHandle.h"
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct RenderTargetHandle; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_ShaderTagId.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct ShaderTagId; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_FilteringSettings.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct FilteringSettings; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "UnityEngine_Rendering_Universal_RenderPassEvent.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_RenderQueueRange.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct RenderQueueRange; };
#include "..\UnityEngine_CoreModule\UnityEngine_LayerMask.h"
namespace UnityEngine_CoreModule::UnityEngine { struct LayerMask; };
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct CommandBuffer; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct RenderingData; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct RenderingData; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_ScriptableRenderContext.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct ScriptableRenderContext; };

namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal
{
	struct DepthNormalOnlyPass : Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRenderPass
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::RenderTextureDescriptor _normalDescriptor_k__BackingField;
		UnityEngine_CoreModule::UnityEngine::RenderTextureDescriptor _depthDescriptor_k__BackingField;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderTargetHandle _depthHandle_k__BackingField;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderTargetHandle _normalHandle_k__BackingField;
		UnityEngine_CoreModule::UnityEngine::Rendering::ShaderTagId m_ShaderTagId;
		UnityEngine_CoreModule::UnityEngine::Rendering::FilteringSettings m_FilteringSettings;
		struct StaticFields
		{
			int32_t k_DepthBufferBits;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		UnityEngine_CoreModule::UnityEngine::RenderTextureDescriptor get_normalDescriptor();
		void set_normalDescriptor(UnityEngine_CoreModule::UnityEngine::RenderTextureDescriptor value);
		UnityEngine_CoreModule::UnityEngine::RenderTextureDescriptor get_depthDescriptor();
		void set_depthDescriptor(UnityEngine_CoreModule::UnityEngine::RenderTextureDescriptor value);
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderTargetHandle get_depthHandle();
		void set_depthHandle(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderTargetHandle value);
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderTargetHandle get_normalHandle();
		void set_normalHandle(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderTargetHandle value);
		void _ctor(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderPassEvent evt, UnityEngine_CoreModule::UnityEngine::Rendering::RenderQueueRange renderQueueRange, UnityEngine_CoreModule::UnityEngine::LayerMask layerMask);
		void Setup(UnityEngine_CoreModule::UnityEngine::RenderTextureDescriptor baseDescriptor, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderTargetHandle depthHandle, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderTargetHandle normalHandle);
		void OnCameraSetup(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderingData& renderingData);
		void Execute(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext context, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderingData& renderingData);
		void OnCameraCleanup(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd);
	};
}

