#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "UnityEngine_Rendering_Universal_UniversalRenderPipeline_Profiling.h"
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct UniversalRenderPipeline_Profiling; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { struct ProfilingSampler; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal
{
	struct UniversalRenderPipeline_Profiling_Pipeline : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ProfilingSampler* beginFrameRendering;
			Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ProfilingSampler* endFrameRendering;
			Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ProfilingSampler* beginCameraRendering;
			Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ProfilingSampler* endCameraRendering;
			mscorlib::System::String* k_Name;
			Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ProfilingSampler* initializeCameraData;
			Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ProfilingSampler* initializeStackedCameraData;
			Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ProfilingSampler* initializeAdditionalCameraData;
			Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ProfilingSampler* initializeRenderingData;
			Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ProfilingSampler* initializeShadowData;
			Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ProfilingSampler* initializeLightData;
			Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ProfilingSampler* getPerObjectLightFlags;
			Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ProfilingSampler* getMainLightIndex;
			Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ProfilingSampler* setupPerFrameShaderConstants;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
	};
}

