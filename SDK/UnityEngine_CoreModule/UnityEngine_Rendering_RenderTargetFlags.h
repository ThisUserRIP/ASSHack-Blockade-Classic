#pragma once
namespace UnityEngine_CoreModule::UnityEngine::Rendering
{
	enum struct RenderTargetFlags : int32_t
	{
		None = static_cast<int32_t>(0x0),
		ReadOnlyDepth = static_cast<int32_t>(0x1),
		ReadOnlyStencil = static_cast<int32_t>(0x2),
		ReadOnlyDepthStencil = static_cast<int32_t>(0x3),
	};
}

