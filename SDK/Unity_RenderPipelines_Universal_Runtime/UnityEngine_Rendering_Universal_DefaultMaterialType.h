#pragma once
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal
{
	enum struct DefaultMaterialType : int32_t
	{
		Standard = static_cast<int32_t>(0x0),
		Particle = static_cast<int32_t>(0x1),
		Terrain = static_cast<int32_t>(0x2),
		Sprite = static_cast<int32_t>(0x3),
		UnityBuiltinDefault = static_cast<int32_t>(0x4),
	};
}

