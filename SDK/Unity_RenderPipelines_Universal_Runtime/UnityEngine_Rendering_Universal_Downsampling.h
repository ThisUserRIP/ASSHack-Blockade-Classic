#pragma once
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal
{
	enum struct Downsampling : int32_t
	{
		None = static_cast<int32_t>(0x0),
		_2xBilinear = static_cast<int32_t>(0x1),
		_4xBox = static_cast<int32_t>(0x2),
		_4xBilinear = static_cast<int32_t>(0x3),
	};
}

