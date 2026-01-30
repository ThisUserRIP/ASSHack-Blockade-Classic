#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "UnityEngine_Rendering_Universal_CameraOverrideOption.h"
#include "UnityEngine_Rendering_Universal_CameraRenderType.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Camera; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\UnityEngine_CoreModule\UnityEngine_LayerMask.h"
namespace UnityEngine_CoreModule::UnityEngine { struct LayerMask; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
#include "UnityEngine_Rendering_Universal_AntialiasingMode.h"
#include "UnityEngine_Rendering_Universal_AntialiasingQuality.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct ScriptableRenderer; };

namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal
{
	struct UniversalAdditionalCameraData : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool m_RenderShadows;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::CameraOverrideOption m_RequiresDepthTextureOption;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::CameraOverrideOption m_RequiresOpaqueTextureOption;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::CameraRenderType m_CameraType;
		mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Camera>* m_Cameras;
		int32_t m_RendererIndex;
		UnityEngine_CoreModule::UnityEngine::LayerMask m_VolumeLayerMask;
		UnityEngine_CoreModule::UnityEngine::Transform* m_VolumeTrigger;
		bool m_RenderPostProcessing;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::AntialiasingMode m_Antialiasing;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::AntialiasingQuality m_AntialiasingQuality;
		bool m_StopNaN;
		bool m_Dithering;
		bool m_ClearDepth;
		bool m_AllowXRRendering;
		UnityEngine_CoreModule::UnityEngine::Camera* m_Camera;
		bool m_RequiresDepthTexture;
		bool m_RequiresColorTexture;
		float m_Version;
		struct StaticFields
		{
			Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData* s_DefaultAdditionalCameraData;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		float get_version();
		static Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData* get_defaultAdditionalCameraData();
		UnityEngine_CoreModule::UnityEngine::Camera* get_camera();
		bool get_renderShadows();
		void set_renderShadows(bool value);
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::CameraOverrideOption get_requiresDepthOption();
		void set_requiresDepthOption(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::CameraOverrideOption value);
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::CameraOverrideOption get_requiresColorOption();
		void set_requiresColorOption(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::CameraOverrideOption value);
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::CameraRenderType get_renderType();
		void set_renderType(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::CameraRenderType value);
		mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Camera>* get_cameraStack();
		void UpdateCameraStack();
		bool get_clearDepth();
		bool get_requiresDepthTexture();
		void set_requiresDepthTexture(bool value);
		bool get_requiresColorTexture();
		void set_requiresColorTexture(bool value);
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRenderer* get_scriptableRenderer();
		void SetRenderer(int32_t index);
		UnityEngine_CoreModule::UnityEngine::LayerMask get_volumeLayerMask();
		void set_volumeLayerMask(UnityEngine_CoreModule::UnityEngine::LayerMask value);
		UnityEngine_CoreModule::UnityEngine::Transform* get_volumeTrigger();
		void set_volumeTrigger(UnityEngine_CoreModule::UnityEngine::Transform* value);
		bool get_renderPostProcessing();
		void set_renderPostProcessing(bool value);
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::AntialiasingMode get_antialiasing();
		void set_antialiasing(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::AntialiasingMode value);
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::AntialiasingQuality get_antialiasingQuality();
		void set_antialiasingQuality(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::AntialiasingQuality value);
		bool get_stopNaN();
		void set_stopNaN(bool value);
		bool get_dithering();
		void set_dithering(bool value);
		bool get_allowXRRendering();
		void set_allowXRRendering(bool value);
		void OnBeforeSerialize();
		void OnAfterDeserialize();
		void OnDrawGizmos();
		void _ctor();
		static void _cctor();
	};
}

