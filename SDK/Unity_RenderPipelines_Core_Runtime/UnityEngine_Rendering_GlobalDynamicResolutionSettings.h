#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "UnityEngine_Rendering_DynamicResolutionType.h"
#include "UnityEngine_Rendering_DynamicResUpscaleFilter.h"

namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering
{
	struct GlobalDynamicResolutionSettings
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool enabled;
		float maxPercentage;
		float minPercentage;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DynamicResolutionType dynResType;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DynamicResUpscaleFilter upsampleFilter;
		bool forceResolution;
		float forcedPercentage;
		static Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::GlobalDynamicResolutionSettings NewDefault();
	};
}

