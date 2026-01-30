#pragma once
namespace UnityEngine_CoreModule::UnityEngine::Rendering
{
	enum struct SupportedRenderingFeatures_LightmapMixedBakeModes : int32_t
	{
		None = static_cast<int32_t>(0x0),
		IndirectOnly = static_cast<int32_t>(0x1),
		Subtractive = static_cast<int32_t>(0x2),
		Shadowmask = static_cast<int32_t>(0x4),
	};
}

