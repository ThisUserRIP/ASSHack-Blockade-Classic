#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_CullingResults.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct CullingResults; };
#include "UnityEngine_Rendering_Universal_CameraData.h"
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct CameraData; };
#include "UnityEngine_Rendering_Universal_LightData.h"
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct LightData; };
#include "UnityEngine_Rendering_Universal_ShadowData.h"
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct ShadowData; };
#include "UnityEngine_Rendering_Universal_PostProcessingData.h"
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct PostProcessingData; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_PerObjectData.h"

namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal
{
	struct RenderingData
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Rendering::CullingResults cullResults;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::CameraData cameraData;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::LightData lightData;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ShadowData shadowData;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::PostProcessingData postProcessingData;
		bool supportsDynamicBatching;
		UnityEngine_CoreModule::UnityEngine::Rendering::PerObjectData perObjectData;
		bool postProcessingEnabled;
	};
}

