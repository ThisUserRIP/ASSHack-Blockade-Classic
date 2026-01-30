#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct UniversalAdditionalCameraData; };
namespace UnityEngine_CoreModule::UnityEngine { struct Camera; };

namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal
{
	struct CameraExtensions : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData* GetUniversalAdditionalCameraData(UnityEngine_CoreModule::UnityEngine::Camera* camera);
	};
}

