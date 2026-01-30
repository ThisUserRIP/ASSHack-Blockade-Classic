#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "UnityEngine_Rendering_Universal_Internal_ForwardLights.h"
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal { struct ForwardLights; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal
{
	struct ForwardLights_LightConstantBuffer : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			int32_t _MainLightPosition;
			int32_t _MainLightColor;
			int32_t _MainLightOcclusionProbesChannel;
			int32_t _AdditionalLightsCount;
			int32_t _AdditionalLightsPosition;
			int32_t _AdditionalLightsColor;
			int32_t _AdditionalLightsAttenuation;
			int32_t _AdditionalLightsSpotDir;
			int32_t _AdditionalLightOcclusionProbeChannel;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
	};
}

