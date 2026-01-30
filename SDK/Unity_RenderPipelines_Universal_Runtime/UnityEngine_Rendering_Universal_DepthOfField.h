#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\Unity_RenderPipelines_Core_Runtime\UnityEngine_Rendering_VolumeComponent.h"
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct DepthOfFieldModeParameter; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { struct MinFloatParameter; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { struct ClampedFloatParameter; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { struct BoolParameter; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { struct ClampedIntParameter; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal
{
	struct DepthOfField : Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::VolumeComponent
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::DepthOfFieldModeParameter* mode;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::MinFloatParameter* gaussianStart;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::MinFloatParameter* gaussianEnd;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ClampedFloatParameter* gaussianMaxRadius;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::BoolParameter* highQualitySampling;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::MinFloatParameter* focusDistance;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ClampedFloatParameter* aperture;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ClampedFloatParameter* focalLength;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ClampedIntParameter* bladeCount;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ClampedFloatParameter* bladeCurvature;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ClampedFloatParameter* bladeRotation;
		bool IsActive();
		bool IsTileCompatible();
		void _ctor();
	};
}

