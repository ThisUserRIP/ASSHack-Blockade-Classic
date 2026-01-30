#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Rendering_Universal_ScriptableRenderPass.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_ShaderTagId.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct ShaderTagId; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { struct ProfilingSampler; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal { struct DeferredLights; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_RenderStateBlock.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct RenderStateBlock; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_FilteringSettings.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct FilteringSettings; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "UnityEngine_Rendering_Universal_RenderPassEvent.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_RenderQueueRange.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct RenderQueueRange; };
#include "..\UnityEngine_CoreModule\UnityEngine_LayerMask.h"
namespace UnityEngine_CoreModule::UnityEngine { struct LayerMask; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_StencilState.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct StencilState; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct CommandBuffer; };
#include "..\UnityEngine_CoreModule\UnityEngine_RenderTextureDescriptor.h"
namespace UnityEngine_CoreModule::UnityEngine { struct RenderTextureDescriptor; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_ScriptableRenderContext.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct ScriptableRenderContext; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct RenderingData; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct RenderingData; };

namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal
{
	struct GBufferPass : Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRenderPass
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ProfilingSampler* m_ProfilingSampler;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredLights* m_DeferredLights;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Rendering::ShaderTagId>* m_ShaderTagValues;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Rendering::RenderStateBlock>* m_RenderStateBlocks;
		UnityEngine_CoreModule::UnityEngine::Rendering::FilteringSettings m_FilteringSettings;
		UnityEngine_CoreModule::UnityEngine::Rendering::RenderStateBlock m_RenderStateBlock;
		struct StaticFields
		{
			UnityEngine_CoreModule::UnityEngine::Rendering::ShaderTagId s_ShaderTagLit;
			UnityEngine_CoreModule::UnityEngine::Rendering::ShaderTagId s_ShaderTagSimpleLit;
			UnityEngine_CoreModule::UnityEngine::Rendering::ShaderTagId s_ShaderTagUnlit;
			UnityEngine_CoreModule::UnityEngine::Rendering::ShaderTagId s_ShaderTagUniversalGBuffer;
			UnityEngine_CoreModule::UnityEngine::Rendering::ShaderTagId s_ShaderTagUniversalMaterialType;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderPassEvent evt, UnityEngine_CoreModule::UnityEngine::Rendering::RenderQueueRange renderQueueRange, UnityEngine_CoreModule::UnityEngine::LayerMask layerMask, UnityEngine_CoreModule::UnityEngine::Rendering::StencilState stencilState, int32_t stencilReference, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredLights* deferredLights);
		void Configure(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, UnityEngine_CoreModule::UnityEngine::RenderTextureDescriptor cameraTextureDescriptor);
		void Execute(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext context, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderingData& renderingData);
		void OnCameraCleanup(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd);
		static void _cctor();
	};
}

