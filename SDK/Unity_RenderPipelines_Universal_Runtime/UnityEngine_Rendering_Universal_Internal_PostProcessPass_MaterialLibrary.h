#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "UnityEngine_Rendering_Universal_Internal_PostProcessPass.h"
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal { struct PostProcessPass; };
namespace UnityEngine_CoreModule::UnityEngine { struct Material; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct PostProcessData; };
namespace UnityEngine_CoreModule::UnityEngine { struct Shader; };

namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal
{
	struct PostProcessPass_MaterialLibrary : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Material* stopNaN;
		UnityEngine_CoreModule::UnityEngine::Material* subpixelMorphologicalAntialiasing;
		UnityEngine_CoreModule::UnityEngine::Material* gaussianDepthOfField;
		UnityEngine_CoreModule::UnityEngine::Material* bokehDepthOfField;
		UnityEngine_CoreModule::UnityEngine::Material* cameraMotionBlur;
		UnityEngine_CoreModule::UnityEngine::Material* paniniProjection;
		UnityEngine_CoreModule::UnityEngine::Material* bloom;
		UnityEngine_CoreModule::UnityEngine::Material* uber;
		UnityEngine_CoreModule::UnityEngine::Material* finalPass;
		void _ctor(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::PostProcessData* data);
		UnityEngine_CoreModule::UnityEngine::Material* Load(UnityEngine_CoreModule::UnityEngine::Shader* shader);
		void Cleanup();
	};
}

