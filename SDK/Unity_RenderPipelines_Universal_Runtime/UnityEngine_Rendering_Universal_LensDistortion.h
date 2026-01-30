#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\Unity_RenderPipelines_Core_Runtime\UnityEngine_Rendering_VolumeComponent.h"
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { struct ClampedFloatParameter; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { struct Vector2Parameter; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal
{
	struct LensDistortion : Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::VolumeComponent
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ClampedFloatParameter* intensity;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ClampedFloatParameter* xMultiplier;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ClampedFloatParameter* yMultiplier;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::Vector2Parameter* center;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ClampedFloatParameter* scale;
		bool IsActive();
		bool IsTileCompatible();
		void _ctor();
	};
}

