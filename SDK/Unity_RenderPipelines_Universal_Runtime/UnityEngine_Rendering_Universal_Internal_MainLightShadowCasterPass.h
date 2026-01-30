#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Rendering_Universal_ScriptableRenderPass.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "UnityEngine_Rendering_Universal_RenderTargetHandle.h"
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct RenderTargetHandle; };
namespace UnityEngine_CoreModule::UnityEngine { struct RenderTexture; };
#include "..\UnityEngine_CoreModule\UnityEngine_Matrix4x4.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Matrix4x4; };
#include "UnityEngine_Rendering_Universal_ShadowSliceData.h"
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct ShadowSliceData; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector4.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector4; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { struct ProfilingSampler; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "UnityEngine_Rendering_Universal_RenderPassEvent.h"
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct RenderingData; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct RenderingData; };
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct CommandBuffer; };
#include "..\UnityEngine_CoreModule\UnityEngine_RenderTextureDescriptor.h"
namespace UnityEngine_CoreModule::UnityEngine { struct RenderTextureDescriptor; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_ScriptableRenderContext.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct ScriptableRenderContext; };
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct CullingResults; };
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct CullingResults; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct LightData; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct LightData; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct ShadowData; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct ShadowData; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_VisibleLight.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct VisibleLight; };

namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal
{
	struct MainLightShadowCasterPass : Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRenderPass
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		float m_MaxShadowDistance;
		int32_t m_ShadowmapWidth;
		int32_t m_ShadowmapHeight;
		int32_t m_ShadowCasterCascadesCount;
		bool m_SupportsBoxFilterForShadows;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderTargetHandle m_MainLightShadowmap;
		UnityEngine_CoreModule::UnityEngine::RenderTexture* m_MainLightShadowmapTexture;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Matrix4x4>* m_MainLightShadowMatrices;
		IL2CPP::Array<Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ShadowSliceData>* m_CascadeSlices;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector4>* m_CascadeSplitDistances;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ProfilingSampler* m_ProfilingSetupSampler;
		struct StaticFields
		{
			int32_t k_MaxCascades;
			int32_t k_ShadowmapBufferBits;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderPassEvent evt);
		bool Setup(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderingData& renderingData);
		void Configure(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, UnityEngine_CoreModule::UnityEngine::RenderTextureDescriptor cameraTextureDescriptor);
		void Execute(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext context, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderingData& renderingData);
		void OnCameraCleanup(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd);
		void Clear();
		void RenderMainLightCascadeShadowmap(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext& context, UnityEngine_CoreModule::UnityEngine::Rendering::CullingResults& cullResults, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::LightData& lightData, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ShadowData& shadowData);
		void SetupMainLightShadowReceiverConstants(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, UnityEngine_CoreModule::UnityEngine::Rendering::VisibleLight shadowLight, bool supportsSoftShadows);
	};
}

