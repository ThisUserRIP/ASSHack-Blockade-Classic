#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Experimental_Rendering_RenderGraphModule_ComputeBufferDesc.h"
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule { struct ComputeBufferDesc; };
namespace UnityEngine_CoreModule::UnityEngine { struct ComputeBuffer; };
#include "UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphResourceRegistry_RenderGraphResource_2.h"
#include "UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphResourceRegistry.h"
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule { struct RenderGraphResourceRegistry; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule
{
	struct RenderGraphResourceRegistry_ComputeBufferResource : Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry_RenderGraphResource_2<Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferDesc, UnityEngine_CoreModule::UnityEngine::ComputeBuffer>
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* GetName();
		void _ctor();
	};
}

