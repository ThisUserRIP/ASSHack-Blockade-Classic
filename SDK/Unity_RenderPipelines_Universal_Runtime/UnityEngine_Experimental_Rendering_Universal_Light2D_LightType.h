#pragma once
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal
{
	enum struct Light2D_LightType : int32_t
	{
		Parametric = static_cast<int32_t>(0x0),
		Freeform = static_cast<int32_t>(0x1),
		Sprite = static_cast<int32_t>(0x2),
		Point = static_cast<int32_t>(0x3),
		Global = static_cast<int32_t>(0x4),
	};
}

