#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Rendering_Universal_Internal_DeferredLights.h"
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal { struct DeferredLights; };
namespace UnityEngine_CoreModule::UnityEngine { struct ComputeBuffer; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal
{
	struct DeferredLights_DrawCall
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::ComputeBuffer* tileList;
		UnityEngine_CoreModule::UnityEngine::ComputeBuffer* punctualLightBuffer;
		UnityEngine_CoreModule::UnityEngine::ComputeBuffer* relLightList;
		int32_t tileListSize;
		int32_t punctualLightBufferSize;
		int32_t relLightListSize;
		int32_t instanceOffset;
		int32_t instanceCount;
	};
}

