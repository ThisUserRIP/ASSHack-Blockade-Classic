#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\Unity_RenderPipelines_Core_Runtime\UnityEngine_Rendering_VolumeComponent.h"
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { struct ClampedFloatParameter; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal
{
	struct ChannelMixer : Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::VolumeComponent
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ClampedFloatParameter* redOutRedIn;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ClampedFloatParameter* redOutGreenIn;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ClampedFloatParameter* redOutBlueIn;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ClampedFloatParameter* greenOutRedIn;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ClampedFloatParameter* greenOutGreenIn;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ClampedFloatParameter* greenOutBlueIn;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ClampedFloatParameter* blueOutRedIn;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ClampedFloatParameter* blueOutGreenIn;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ClampedFloatParameter* blueOutBlueIn;
		bool IsActive();
		bool IsTileCompatible();
		void _ctor();
	};
}

