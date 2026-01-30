#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Rendering_Universal_ScriptableRendererData.h"
#include "..\UnityEngine_CoreModule\UnityEngine_TransparencySortMode.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "UnityEngine_Experimental_Rendering_Universal_Light2DBlendStyle.h"
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal { struct Light2DBlendStyle; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace UnityEngine_CoreModule::UnityEngine { struct Shader; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct PostProcessData; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
namespace UnityEngine_CoreModule::UnityEngine { struct Material; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
#include "UnityEngine_Rendering_Universal_RenderTargetHandle.h"
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct RenderTargetHandle; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal { struct ILight2DCullResult; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct ScriptableRenderer; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal
{
	struct Renderer2DData : Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRendererData
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::TransparencySortMode m_TransparencySortMode;
		UnityEngine_CoreModule::UnityEngine::Vector3 m_TransparencySortAxis;
		float m_HDREmulationScale;
		IL2CPP::Array<Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::Light2DBlendStyle>* m_LightBlendStyles;
		bool m_UseDepthStencilBuffer;
		UnityEngine_CoreModule::UnityEngine::Shader* m_ShapeLightShader;
		UnityEngine_CoreModule::UnityEngine::Shader* m_ShapeLightVolumeShader;
		UnityEngine_CoreModule::UnityEngine::Shader* m_PointLightShader;
		UnityEngine_CoreModule::UnityEngine::Shader* m_PointLightVolumeShader;
		UnityEngine_CoreModule::UnityEngine::Shader* m_BlitShader;
		UnityEngine_CoreModule::UnityEngine::Shader* m_ShadowGroupShader;
		UnityEngine_CoreModule::UnityEngine::Shader* m_RemoveSelfShadowShader;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::PostProcessData* m_PostProcessData;
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::UInt32, UnityEngine_CoreModule::UnityEngine::Material>* _lightMaterials_k__BackingField;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Material*>* _shadowMaterials_k__BackingField;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Material*>* _removeSelfShadowMaterials_k__BackingField;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderTargetHandle normalsRenderTarget;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderTargetHandle shadowsRenderTarget;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::ILight2DCullResult* _lightCullResult_k__BackingField;
		float get_hdrEmulationScale();
		IL2CPP::Array<Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::Light2DBlendStyle>* get_lightBlendStyles();
		bool get_useDepthStencilBuffer();
		UnityEngine_CoreModule::UnityEngine::Shader* get_shapeLightShader();
		UnityEngine_CoreModule::UnityEngine::Shader* get_shapeLightVolumeShader();
		UnityEngine_CoreModule::UnityEngine::Shader* get_pointLightShader();
		UnityEngine_CoreModule::UnityEngine::Shader* get_pointLightVolumeShader();
		UnityEngine_CoreModule::UnityEngine::Shader* get_blitShader();
		UnityEngine_CoreModule::UnityEngine::Shader* get_shadowGroupShader();
		UnityEngine_CoreModule::UnityEngine::Shader* get_removeSelfShadowShader();
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::PostProcessData* get_postProcessData();
		UnityEngine_CoreModule::UnityEngine::TransparencySortMode get_transparencySortMode();
		UnityEngine_CoreModule::UnityEngine::Vector3 get_transparencySortAxis();
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRenderer* Create();
		void OnEnable();
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::UInt32, UnityEngine_CoreModule::UnityEngine::Material>* get_lightMaterials();
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Material*>* get_shadowMaterials();
		void set_shadowMaterials(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Material*>* value);
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Material*>* get_removeSelfShadowMaterials();
		void set_removeSelfShadowMaterials(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Material*>* value);
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::ILight2DCullResult* get_lightCullResult();
		void set_lightCullResult(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::ILight2DCullResult* value);
		void _ctor();
	};
}

