#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "UnityEngine_Rendering_Universal_PostProcessData.h"
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct PostProcessData; };
namespace UnityEngine_CoreModule::UnityEngine { struct Shader; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal
{
	struct PostProcessData_ShaderResources : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Shader* stopNanPS;
		UnityEngine_CoreModule::UnityEngine::Shader* subpixelMorphologicalAntialiasingPS;
		UnityEngine_CoreModule::UnityEngine::Shader* gaussianDepthOfFieldPS;
		UnityEngine_CoreModule::UnityEngine::Shader* bokehDepthOfFieldPS;
		UnityEngine_CoreModule::UnityEngine::Shader* cameraMotionBlurPS;
		UnityEngine_CoreModule::UnityEngine::Shader* paniniProjectionPS;
		UnityEngine_CoreModule::UnityEngine::Shader* lutBuilderLdrPS;
		UnityEngine_CoreModule::UnityEngine::Shader* lutBuilderHdrPS;
		UnityEngine_CoreModule::UnityEngine::Shader* bloomPS;
		UnityEngine_CoreModule::UnityEngine::Shader* uberPostPS;
		UnityEngine_CoreModule::UnityEngine::Shader* finalPostPassPS;
		void _ctor();
	};
}

