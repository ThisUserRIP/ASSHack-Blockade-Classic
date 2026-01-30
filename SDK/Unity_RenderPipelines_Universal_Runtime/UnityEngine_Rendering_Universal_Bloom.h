#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\Unity_RenderPipelines_Core_Runtime\UnityEngine_Rendering_VolumeComponent.h"
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { struct MinFloatParameter; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { struct ClampedFloatParameter; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { struct ColorParameter; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { struct BoolParameter; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { struct ClampedIntParameter; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { struct TextureParameter; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal
{
	struct Bloom : Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::VolumeComponent
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::MinFloatParameter* threshold;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::MinFloatParameter* intensity;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ClampedFloatParameter* scatter;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::MinFloatParameter* clamp;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ColorParameter* tint;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::BoolParameter* highQualityFiltering;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ClampedIntParameter* skipIterations;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::TextureParameter* dirtTexture;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::MinFloatParameter* dirtIntensity;
		bool IsActive();
		bool IsTileCompatible();
		void _ctor();
	};
}

