#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_Matrix4x4.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Matrix4x4; };
namespace UnityEngine_CoreModule::UnityEngine { struct Camera; };
#include "UnityEngine_Rendering_Universal_CameraRenderType.h"
namespace UnityEngine_CoreModule::UnityEngine { struct RenderTexture; };
#include "..\UnityEngine_CoreModule\UnityEngine_RenderTextureDescriptor.h"
namespace UnityEngine_CoreModule::UnityEngine { struct RenderTextureDescriptor; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rect.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Rect; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\UnityEngine_CoreModule\UnityEngine_CameraType.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_SortingCriteria.h"
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct XRPass; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_RenderTargetIdentifier.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct RenderTargetIdentifier; };
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct CommandBuffer; };
namespace mscorlib::System { template <typename T1, typename T2> struct Action_2; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IEnumerator_1; };
#include "..\UnityEngine_CoreModule\UnityEngine_LayerMask.h"
namespace UnityEngine_CoreModule::UnityEngine { struct LayerMask; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
#include "UnityEngine_Rendering_Universal_AntialiasingMode.h"
#include "UnityEngine_Rendering_Universal_AntialiasingQuality.h"
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct ScriptableRenderer; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal
{
	struct CameraData
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Matrix4x4 m_ViewMatrix;
		UnityEngine_CoreModule::UnityEngine::Matrix4x4 m_ProjectionMatrix;
		UnityEngine_CoreModule::UnityEngine::Camera* camera;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::CameraRenderType renderType;
		UnityEngine_CoreModule::UnityEngine::RenderTexture* targetTexture;
		UnityEngine_CoreModule::UnityEngine::RenderTextureDescriptor cameraTargetDescriptor;
		UnityEngine_CoreModule::UnityEngine::Rect pixelRect;
		int32_t pixelWidth;
		int32_t pixelHeight;
		float aspectRatio;
		float renderScale;
		bool clearDepth;
		UnityEngine_CoreModule::UnityEngine::CameraType cameraType;
		bool isDefaultViewport;
		bool isHdrEnabled;
		bool requiresDepthTexture;
		bool requiresOpaqueTexture;
		bool xrRendering;
		UnityEngine_CoreModule::UnityEngine::Rendering::SortingCriteria defaultOpaqueSortFlags;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::XRPass* xr;
		bool isStereoEnabled;
		float maxShadowDistance;
		bool postProcessEnabled;
		mscorlib::System::Collections::Generic::IEnumerator_1<mscorlib::System::Action_2<UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier, UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer>>* captureActions;
		UnityEngine_CoreModule::UnityEngine::LayerMask volumeLayerMask;
		UnityEngine_CoreModule::UnityEngine::Transform* volumeTrigger;
		bool isStopNaNEnabled;
		bool isDitheringEnabled;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::AntialiasingMode antialiasing;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::AntialiasingQuality antialiasingQuality;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRenderer* renderer;
		bool resolveFinalTarget;
		void SetViewAndProjectionMatrix(UnityEngine_CoreModule::UnityEngine::Matrix4x4 viewMatrix, UnityEngine_CoreModule::UnityEngine::Matrix4x4 projectionMatrix);
		UnityEngine_CoreModule::UnityEngine::Matrix4x4 GetViewMatrix(int32_t viewIndex);
		UnityEngine_CoreModule::UnityEngine::Matrix4x4 GetProjectionMatrix(int32_t viewIndex);
		UnityEngine_CoreModule::UnityEngine::Matrix4x4 GetGPUProjectionMatrix(int32_t viewIndex);
		bool get_requireSrgbConversion();
		bool get_isSceneViewCamera();
		bool get_isPreviewCamera();
		bool IsCameraProjectionMatrixFlipped();
	};
}

