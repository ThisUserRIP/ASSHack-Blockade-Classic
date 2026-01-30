#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraph.h"
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule { struct RenderGraph; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule { struct RenderGraphPass; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_GraphicsFence.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct GraphicsFence; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule
{
	struct RenderGraph_CompiledPassInfo
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass* pass;
		IL2CPP::Array<mscorlib::System::Collections::Generic::List_1<mscorlib::System::Int32>*>* resourceCreateList;
		IL2CPP::Array<mscorlib::System::Collections::Generic::List_1<mscorlib::System::Int32>*>* resourceReleaseList;
		int32_t refCount;
		bool culled;
		bool hasSideEffect;
		int32_t syncToPassIndex;
		int32_t syncFromPassIndex;
		bool needGraphicsFence;
		UnityEngine_CoreModule::UnityEngine::Rendering::GraphicsFence fence;
		bool enableAsyncCompute;
		bool get_allowPassCulling();
		void Reset(Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass* pass);
	};
}

