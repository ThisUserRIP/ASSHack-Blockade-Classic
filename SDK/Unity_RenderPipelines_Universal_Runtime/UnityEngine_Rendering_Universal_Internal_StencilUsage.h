#pragma once
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal
{
	enum struct StencilUsage : int32_t
	{
		UserMask = static_cast<int32_t>(0xF),
		StencilLight = static_cast<int32_t>(0x10),
		MaterialMask = static_cast<int32_t>(0x60),
		MaterialUnlit = static_cast<int32_t>(0x0),
		MaterialLit = static_cast<int32_t>(0x20),
		MaterialSimpleLit = static_cast<int32_t>(0x40),
	};
}

