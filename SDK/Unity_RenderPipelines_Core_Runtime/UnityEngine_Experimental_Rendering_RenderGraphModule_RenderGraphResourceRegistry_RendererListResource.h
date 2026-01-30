#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphResourceRegistry.h"
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule { struct RenderGraphResourceRegistry; };
#include "UnityEngine_Experimental_Rendering_RendererListDesc.h"
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering { struct RendererListDesc; };
#include "UnityEngine_Experimental_Rendering_RendererList.h"
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering { struct RendererList; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule
{
	struct RenderGraphResourceRegistry_RendererListResource
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RendererListDesc desc;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RendererList rendererList;
		void _ctor(Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RendererListDesc& desc);
	};
}

