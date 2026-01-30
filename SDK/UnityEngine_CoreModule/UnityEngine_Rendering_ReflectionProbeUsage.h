#pragma once
namespace UnityEngine_CoreModule::UnityEngine::Rendering
{
	enum struct ReflectionProbeUsage : int32_t
	{
		Off = static_cast<int32_t>(0x0),
		BlendProbes = static_cast<int32_t>(0x1),
		BlendProbesAndSkybox = static_cast<int32_t>(0x2),
		Simple = static_cast<int32_t>(0x3),
	};
}

