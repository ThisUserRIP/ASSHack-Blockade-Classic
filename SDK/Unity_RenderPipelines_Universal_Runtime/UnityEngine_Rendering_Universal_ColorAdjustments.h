#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\Unity_RenderPipelines_Core_Runtime\UnityEngine_Rendering_VolumeComponent.h"
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { struct FloatParameter; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { struct ClampedFloatParameter; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { struct ColorParameter; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal
{
	struct ColorAdjustments : Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::VolumeComponent
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::FloatParameter* postExposure;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ClampedFloatParameter* contrast;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ColorParameter* colorFilter;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ClampedFloatParameter* hueShift;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ClampedFloatParameter* saturation;
		bool IsActive();
		bool IsTileCompatible();
		void _ctor();
	};
}

