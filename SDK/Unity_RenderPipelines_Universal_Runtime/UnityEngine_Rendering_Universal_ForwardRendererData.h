#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Rendering_Universal_ScriptableRendererData.h"
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct PostProcessData; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct XRSystemData; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct ForwardRendererData_ShaderResources; };
#include "..\UnityEngine_CoreModule\UnityEngine_LayerMask.h"
namespace UnityEngine_CoreModule::UnityEngine { struct LayerMask; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct StencilStateData; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "UnityEngine_Rendering_Universal_RenderingMode.h"
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct ScriptableRenderer; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal
{
	struct ForwardRendererData : Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRendererData
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::PostProcessData* postProcessData;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::XRSystemData* xrSystemData;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ForwardRendererData_ShaderResources* shaders;
		UnityEngine_CoreModule::UnityEngine::LayerMask m_OpaqueLayerMask;
		UnityEngine_CoreModule::UnityEngine::LayerMask m_TransparentLayerMask;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::StencilStateData* m_DefaultStencilState;
		bool m_ShadowTransparentReceive;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderingMode m_RenderingMode;
		bool m_AccurateGbufferNormals;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRenderer* Create();
		UnityEngine_CoreModule::UnityEngine::LayerMask get_opaqueLayerMask();
		void set_opaqueLayerMask(UnityEngine_CoreModule::UnityEngine::LayerMask value);
		UnityEngine_CoreModule::UnityEngine::LayerMask get_transparentLayerMask();
		void set_transparentLayerMask(UnityEngine_CoreModule::UnityEngine::LayerMask value);
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::StencilStateData* get_defaultStencilState();
		void set_defaultStencilState(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::StencilStateData* value);
		bool get_shadowTransparentReceive();
		void set_shadowTransparentReceive(bool value);
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderingMode get_renderingMode();
		void set_renderingMode(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderingMode value);
		bool get_accurateGbufferNormals();
		void set_accurateGbufferNormals(bool value);
		void OnEnable();
		void _ctor();
	};
}

