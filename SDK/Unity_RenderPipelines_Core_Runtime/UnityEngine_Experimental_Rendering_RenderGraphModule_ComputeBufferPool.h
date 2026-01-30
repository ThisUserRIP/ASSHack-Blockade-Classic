#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace UnityEngine_CoreModule::UnityEngine { struct ComputeBuffer; };
#include "UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphResourcePool_1.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule
{
	struct ComputeBufferPool : Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourcePool_1<UnityEngine_CoreModule::UnityEngine::ComputeBuffer>
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void ReleaseInternalResource(UnityEngine_CoreModule::UnityEngine::ComputeBuffer* res);
		mscorlib::System::String* GetResourceName(UnityEngine_CoreModule::UnityEngine::ComputeBuffer* res);
		int64_t GetResourceSize(UnityEngine_CoreModule::UnityEngine::ComputeBuffer* res);
		mscorlib::System::String* GetResourceTypeName();
		void PurgeUnusedResources(int32_t currentFrameIndex);
		void _ctor();
	};
}

