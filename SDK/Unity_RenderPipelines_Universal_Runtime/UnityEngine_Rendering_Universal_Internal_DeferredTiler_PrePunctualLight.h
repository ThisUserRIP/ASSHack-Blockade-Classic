#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Rendering_Universal_Internal_DeferredTiler.h"
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal { struct DeferredTiler; };
#include "..\Unity_Mathematics\Unity_Mathematics_float3.h"
namespace Unity_Mathematics::Unity::Mathematics { struct float3; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\Unity_Mathematics\Unity_Mathematics_float2.h"
namespace Unity_Mathematics::Unity::Mathematics { struct float2; };
#include "..\mscorlib\System_UInt16.h"
namespace mscorlib::System { struct UInt16; };

namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal
{
	struct DeferredTiler_PrePunctualLight
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Unity_Mathematics::Unity::Mathematics::float3 posVS;
		float radius;
		float minDist;
		Unity_Mathematics::Unity::Mathematics::float2 screenPos;
		uint16_t visLightIndex;
	};
}

