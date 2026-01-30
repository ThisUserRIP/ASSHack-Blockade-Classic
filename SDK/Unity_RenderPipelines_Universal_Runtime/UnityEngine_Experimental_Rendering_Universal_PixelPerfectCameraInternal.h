#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal { struct IPixelPerfectCamera; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal { struct PixelPerfectCamera; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rect.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Rect; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal
{
	struct PixelPerfectCameraInternal : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::IPixelPerfectCamera* m_Component;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera* m_SerializableComponent;
		float originalOrthoSize;
		bool hasPostProcessLayer;
		bool cropFrameXAndY;
		bool cropFrameXOrY;
		bool useStretchFill;
		int32_t zoom;
		bool useOffscreenRT;
		int32_t offscreenRTWidth;
		int32_t offscreenRTHeight;
		UnityEngine_CoreModule::UnityEngine::Rect pixelRect;
		float orthoSize;
		float unitsPerPixel;
		int32_t cinemachineVCamZoom;
		void _ctor(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::IPixelPerfectCamera* component);
		void OnBeforeSerialize();
		void OnAfterDeserialize();
		void CalculateCameraProperties(int32_t screenWidth, int32_t screenHeight);
		UnityEngine_CoreModule::UnityEngine::Rect CalculateFinalBlitPixelRect(int32_t screenWidth, int32_t screenHeight);
		float CorrectCinemachineOrthoSize(float targetOrthoSize);
	};
}

