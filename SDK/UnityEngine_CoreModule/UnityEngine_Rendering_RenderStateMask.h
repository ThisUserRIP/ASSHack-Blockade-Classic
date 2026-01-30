#pragma once
namespace UnityEngine_CoreModule::UnityEngine::Rendering
{
	enum struct RenderStateMask : int32_t
	{
		Nothing = static_cast<int32_t>(0x0),
		Blend = static_cast<int32_t>(0x1),
		Raster = static_cast<int32_t>(0x2),
		Depth = static_cast<int32_t>(0x4),
		Stencil = static_cast<int32_t>(0x8),
		Everything = static_cast<int32_t>(0xF),
	};
}

