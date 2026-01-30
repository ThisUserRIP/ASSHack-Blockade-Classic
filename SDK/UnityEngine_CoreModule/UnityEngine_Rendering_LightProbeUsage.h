#pragma once
namespace UnityEngine_CoreModule::UnityEngine::Rendering
{
	enum struct LightProbeUsage : int32_t
	{
		Off = static_cast<int32_t>(0x0),
		BlendProbes = static_cast<int32_t>(0x1),
		UseProxyVolume = static_cast<int32_t>(0x2),
		CustomProvided = static_cast<int32_t>(0x4),
	};
}

