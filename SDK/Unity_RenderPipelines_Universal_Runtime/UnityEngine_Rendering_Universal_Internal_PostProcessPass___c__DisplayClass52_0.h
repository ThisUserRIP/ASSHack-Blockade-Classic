#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Rendering_Universal_Internal_PostProcessPass.h"
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal { struct PostProcessPass; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct CommandBuffer; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal
{
	struct PostProcessPass___c__DisplayClass52_0
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t source;
		int32_t destination;
		UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::PostProcessPass* __4__this;
		bool tempTargetUsed;
		bool tempTarget2Used;
	};
}

