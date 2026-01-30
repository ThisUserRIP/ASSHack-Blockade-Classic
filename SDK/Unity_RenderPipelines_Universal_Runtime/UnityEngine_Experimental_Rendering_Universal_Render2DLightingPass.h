#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Rendering_Universal_ScriptableRenderPass.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_ShaderTagId.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct ShaderTagId; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { struct ProfilingSampler; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal { struct Renderer2DData; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine { struct Camera; };
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct SortingSettings; };
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct SortingSettings; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\UnityEngine_CoreModule\UnityEngine_SortingLayer.h"
namespace UnityEngine_CoreModule::UnityEngine { struct SortingLayer; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_ScriptableRenderContext.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct ScriptableRenderContext; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct RenderingData; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct RenderingData; };

namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal
{
	struct Render2DLightingPass : Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRenderPass
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::Renderer2DData* m_Renderer2DData;
		struct StaticFields
		{
			int32_t k_HDREmulationScaleID;
			int32_t k_InverseHDREmulationScaleID;
			int32_t k_UseSceneLightingID;
			int32_t k_RendererColorID;
			int32_t k_ShapeLightTexture0ID;
			int32_t k_ShapeLightTexture1ID;
			int32_t k_ShapeLightTexture2ID;
			int32_t k_ShapeLightTexture3ID;
			UnityEngine_CoreModule::UnityEngine::Rendering::ShaderTagId k_CombinedRenderingPassNameOld;
			UnityEngine_CoreModule::UnityEngine::Rendering::ShaderTagId k_CombinedRenderingPassName;
			UnityEngine_CoreModule::UnityEngine::Rendering::ShaderTagId k_NormalsRenderingPassName;
			UnityEngine_CoreModule::UnityEngine::Rendering::ShaderTagId k_LegacyPassName;
			mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Rendering::ShaderTagId>* k_ShaderTags;
			Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ProfilingSampler* m_ProfilingSampler;
			Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ProfilingSampler* m_ProfilingSamplerUnlit;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::Renderer2DData* rendererData);
		void GetTransparencySortingMode(UnityEngine_CoreModule::UnityEngine::Camera* camera, UnityEngine_CoreModule::UnityEngine::Rendering::SortingSettings& sortingSettings);
		bool CompareLightsInLayer(int32_t layerIndex1, int32_t layerIndex2, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::SortingLayer>* sortingLayers);
		int32_t FindUpperBoundInBatch(int32_t startLayerIndex, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::SortingLayer>* sortingLayers);
		void Execute(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext context, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderingData& renderingData);
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::Renderer2DData* UnityEngine_Experimental_Rendering_Universal_IRenderPass2D_get_rendererData();
		static void _cctor();
	};
}

