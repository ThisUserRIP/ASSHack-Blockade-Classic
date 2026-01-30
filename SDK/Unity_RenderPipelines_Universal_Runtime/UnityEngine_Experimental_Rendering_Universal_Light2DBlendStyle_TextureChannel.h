#pragma once
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal
{
	enum struct Light2DBlendStyle_TextureChannel : int32_t
	{
		None = static_cast<int32_t>(0x0),
		R = static_cast<int32_t>(0x1),
		G = static_cast<int32_t>(0x2),
		B = static_cast<int32_t>(0x3),
		A = static_cast<int32_t>(0x4),
		OneMinusR = static_cast<int32_t>(0x5),
		OneMinusG = static_cast<int32_t>(0x6),
		OneMinusB = static_cast<int32_t>(0x7),
		OneMinusA = static_cast<int32_t>(0x8),
	};
}

