#pragma once
namespace UnityEngine_CoreModule::UnityEngine::Experimental::Rendering
{
	enum struct FormatUsage : int32_t
	{
		Sample = static_cast<int32_t>(0x0),
		Linear = static_cast<int32_t>(0x1),
		Sparse = static_cast<int32_t>(0x2),
		Render = static_cast<int32_t>(0x4),
		Blend = static_cast<int32_t>(0x5),
		GetPixels = static_cast<int32_t>(0x6),
		SetPixels = static_cast<int32_t>(0x7),
		SetPixels32 = static_cast<int32_t>(0x8),
		ReadPixels = static_cast<int32_t>(0x9),
		LoadStore = static_cast<int32_t>(0xA),
		MSAA2x = static_cast<int32_t>(0xB),
		MSAA4x = static_cast<int32_t>(0xC),
		MSAA8x = static_cast<int32_t>(0xD),
		StencilSampling = static_cast<int32_t>(0x10),
	};
}

