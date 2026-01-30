#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace UnityEngine_CoreModule::UnityEngine { struct Camera; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal { struct PixelPerfectCameraInternal; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\UnityEngine_CoreModule\UnityEngine_FilterMode.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2Int.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2Int; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_ScriptableRenderContext.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct ScriptableRenderContext; };

namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal
{
	struct PixelPerfectCamera : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t m_AssetsPPU;
		int32_t m_RefResolutionX;
		int32_t m_RefResolutionY;
		bool m_UpscaleRT;
		bool m_PixelSnapping;
		bool m_CropFrameX;
		bool m_CropFrameY;
		bool m_StretchFill;
		UnityEngine_CoreModule::UnityEngine::Camera* m_Camera;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCameraInternal* m_Internal;
		bool m_CinemachineCompatibilityMode;
		int32_t get_assetsPPU();
		void set_assetsPPU(int32_t value);
		int32_t get_refResolutionX();
		void set_refResolutionX(int32_t value);
		int32_t get_refResolutionY();
		void set_refResolutionY(int32_t value);
		bool get_upscaleRT();
		void set_upscaleRT(bool value);
		bool get_pixelSnapping();
		void set_pixelSnapping(bool value);
		bool get_cropFrameX();
		void set_cropFrameX(bool value);
		bool get_cropFrameY();
		void set_cropFrameY(bool value);
		bool get_stretchFill();
		void set_stretchFill(bool value);
		int32_t get_pixelRatio();
		UnityEngine_CoreModule::UnityEngine::Vector3 RoundToPixel(UnityEngine_CoreModule::UnityEngine::Vector3 position);
		float CorrectCinemachineOrthoSize(float targetOrthoSize);
		bool get_isRunning();
		UnityEngine_CoreModule::UnityEngine::FilterMode get_finalBlitFilterMode();
		UnityEngine_CoreModule::UnityEngine::Vector2Int get_offscreenRTSize();
		UnityEngine_CoreModule::UnityEngine::Vector2Int get_cameraRTSize();
		void PixelSnap();
		void Awake();
		void OnBeginFrameRendering(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext context, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Camera*>* cameras);
		void OnBeginCameraRendering(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext context, UnityEngine_CoreModule::UnityEngine::Camera* camera);
		void OnEndCameraRendering(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext context, UnityEngine_CoreModule::UnityEngine::Camera* camera);
		void OnEnable();
		void OnDisable();
		void _ctor();
	};
}

