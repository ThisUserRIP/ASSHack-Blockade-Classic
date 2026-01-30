#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "UnityEngine_Rendering_Universal_ForwardRendererData.h"
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct ForwardRendererData; };
namespace UnityEngine_CoreModule::UnityEngine { struct Shader; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal
{
	struct ForwardRendererData_ShaderResources : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Shader* blitPS;
		UnityEngine_CoreModule::UnityEngine::Shader* copyDepthPS;
		UnityEngine_CoreModule::UnityEngine::Shader* screenSpaceShadowPS;
		UnityEngine_CoreModule::UnityEngine::Shader* samplingPS;
		UnityEngine_CoreModule::UnityEngine::Shader* tileDepthInfoPS;
		UnityEngine_CoreModule::UnityEngine::Shader* tileDeferredPS;
		UnityEngine_CoreModule::UnityEngine::Shader* stencilDeferredPS;
		UnityEngine_CoreModule::UnityEngine::Shader* fallbackErrorPS;
		UnityEngine_CoreModule::UnityEngine::Shader* materialErrorPS;
		void _ctor();
	};
}

