#pragma once
namespace UnityEngine_CoreModule::UnityEngine::Rendering
{
	enum struct PerObjectData : int32_t
	{
		None = static_cast<int32_t>(0x0),
		LightProbe = static_cast<int32_t>(0x1),
		ReflectionProbes = static_cast<int32_t>(0x2),
		LightProbeProxyVolume = static_cast<int32_t>(0x4),
		Lightmaps = static_cast<int32_t>(0x8),
		LightData = static_cast<int32_t>(0x10),
		MotionVectors = static_cast<int32_t>(0x20),
		LightIndices = static_cast<int32_t>(0x40),
		ReflectionProbeData = static_cast<int32_t>(0x80),
		OcclusionProbe = static_cast<int32_t>(0x100),
		OcclusionProbeProxyVolume = static_cast<int32_t>(0x200),
		ShadowMask = static_cast<int32_t>(0x400),
	};
}

