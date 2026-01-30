#pragma once
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering
{
	enum struct DepthBits : int32_t
	{
		None = static_cast<int32_t>(0x0),
		Depth8 = static_cast<int32_t>(0x8),
		Depth16 = static_cast<int32_t>(0x10),
		Depth24 = static_cast<int32_t>(0x18),
		Depth32 = static_cast<int32_t>(0x20),
	};
}

