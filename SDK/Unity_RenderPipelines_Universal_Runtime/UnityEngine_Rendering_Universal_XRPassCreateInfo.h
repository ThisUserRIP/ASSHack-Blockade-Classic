#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace UnityEngine_CoreModule::UnityEngine { struct RenderTexture; };
#include "..\UnityEngine_CoreModule\UnityEngine_RenderTextureDescriptor.h"
namespace UnityEngine_CoreModule::UnityEngine { struct RenderTextureDescriptor; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_ScriptableCullingParameters.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct ScriptableCullingParameters; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct XRPass_CustomMirrorView; };

namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal
{
	struct XRPassCreateInfo
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t multipassId;
		int32_t cullingPassId;
		UnityEngine_CoreModule::UnityEngine::RenderTexture* renderTarget;
		UnityEngine_CoreModule::UnityEngine::RenderTextureDescriptor renderTargetDesc;
		bool renderTargetIsRenderTexture;
		UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableCullingParameters cullingParameters;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::XRPass_CustomMirrorView* customMirrorView;
	};
}

