#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraph.h"
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule { struct RenderGraph; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { struct ProfilingSampler; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule
{
	struct RenderGraph_ProfilingScopePassData : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ProfilingSampler* sampler;
		void _ctor();
	};
}

