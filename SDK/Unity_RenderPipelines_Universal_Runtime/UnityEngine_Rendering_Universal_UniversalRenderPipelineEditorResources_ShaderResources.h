#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "UnityEngine_Rendering_Universal_UniversalRenderPipelineEditorResources.h"
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct UniversalRenderPipelineEditorResources; };
namespace UnityEngine_CoreModule::UnityEngine { struct Shader; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal
{
	struct UniversalRenderPipelineEditorResources_ShaderResources : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Shader* autodeskInteractivePS;
		UnityEngine_CoreModule::UnityEngine::Shader* autodeskInteractiveTransparentPS;
		UnityEngine_CoreModule::UnityEngine::Shader* autodeskInteractiveMaskedPS;
		UnityEngine_CoreModule::UnityEngine::Shader* terrainDetailLitPS;
		UnityEngine_CoreModule::UnityEngine::Shader* terrainDetailGrassPS;
		UnityEngine_CoreModule::UnityEngine::Shader* terrainDetailGrassBillboardPS;
		UnityEngine_CoreModule::UnityEngine::Shader* defaultSpeedTree7PS;
		UnityEngine_CoreModule::UnityEngine::Shader* defaultSpeedTree8PS;
		void _ctor();
	};
}

