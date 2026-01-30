#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "UnityEngine_Rendering_Universal_ScreenSpaceAmbientOcclusionSettings_DepthSource.h"
#include "UnityEngine_Rendering_Universal_ScreenSpaceAmbientOcclusionSettings_NormalQuality.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal
{
	struct ScreenSpaceAmbientOcclusionSettings : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool Downsample;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings_DepthSource Source;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings_NormalQuality NormalSamples;
		float Intensity;
		float DirectLightingStrength;
		float Radius;
		int32_t SampleCount;
		void _ctor();
	};
}

