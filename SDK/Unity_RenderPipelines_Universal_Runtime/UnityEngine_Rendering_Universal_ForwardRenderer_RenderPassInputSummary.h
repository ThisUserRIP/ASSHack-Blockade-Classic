#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Rendering_Universal_ForwardRenderer.h"
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct ForwardRenderer; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal
{
	struct ForwardRenderer_RenderPassInputSummary
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool requiresDepthTexture;
		bool requiresDepthPrepass;
		bool requiresNormalsTexture;
		bool requiresColorTexture;
	};
}

