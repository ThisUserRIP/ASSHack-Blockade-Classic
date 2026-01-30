#pragma once
namespace UnityEngine_CoreModule::UnityEngine::Rendering
{
	enum struct SortingCriteria : int32_t
	{
		None = static_cast<int32_t>(0x0),
		SortingLayer = static_cast<int32_t>(0x1),
		RenderQueue = static_cast<int32_t>(0x2),
		BackToFront = static_cast<int32_t>(0x4),
		QuantizedFrontToBack = static_cast<int32_t>(0x8),
		OptimizeStateChanges = static_cast<int32_t>(0x10),
		CanvasOrder = static_cast<int32_t>(0x20),
		RendererPriority = static_cast<int32_t>(0x40),
		CommonOpaque = static_cast<int32_t>(0x3B),
		CommonTransparent = static_cast<int32_t>(0x17),
	};
}

