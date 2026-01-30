#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace UnityEngine_CoreModule::UnityEngine { struct Material; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal { struct Renderer2DData; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal { struct IRenderPass2D; };
#include "UnityEngine_Rendering_Universal_RenderingData.h"
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct RenderingData; };
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct CommandBuffer; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal { struct Light2D; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_RenderTargetIdentifier.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct RenderTargetIdentifier; };

namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal
{
	struct ShadowRendering : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			int32_t k_LightPosID;
			int32_t k_ShadowStencilGroupID;
			int32_t k_ShadowIntensityID;
			int32_t k_ShadowVolumeIntensityID;
			int32_t k_ShadowRadiusID;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static UnityEngine_CoreModule::UnityEngine::Material* GetShadowMaterial(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::Renderer2DData* rendererData, int32_t index);
		static UnityEngine_CoreModule::UnityEngine::Material* GetRemoveSelfShadowMaterial(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::Renderer2DData* rendererData, int32_t index);
		static void CreateShadowRenderTexture(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::IRenderPass2D* pass, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderingData renderingData, UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, int32_t blendStyleIndex);
		static void RenderShadows(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::IRenderPass2D* pass, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderingData renderingData, UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmdBuffer, int32_t layerToRender, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::Light2D* light, float shadowIntensity, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier renderTexture, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier depthTexture);
		static void _cctor();
	};
}

