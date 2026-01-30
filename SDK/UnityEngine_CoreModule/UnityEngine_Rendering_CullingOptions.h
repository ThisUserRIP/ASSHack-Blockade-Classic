#pragma once
namespace UnityEngine_CoreModule::UnityEngine::Rendering
{
	enum struct CullingOptions : int32_t
	{
		None = static_cast<int32_t>(0x0),
		ForceEvenIfCameraIsNotActive = static_cast<int32_t>(0x1),
		OcclusionCull = static_cast<int32_t>(0x2),
		NeedsLighting = static_cast<int32_t>(0x4),
		NeedsReflectionProbes = static_cast<int32_t>(0x8),
		Stereo = static_cast<int32_t>(0x10),
		DisablePerObjectCulling = static_cast<int32_t>(0x20),
		ShadowCasters = static_cast<int32_t>(0x40),
	};
}

