#pragma once
namespace UnityEngine_CoreModule::UnityEngine::Rendering
{
	enum struct RenderTextureSubElement : int32_t
	{
		Color = static_cast<int32_t>(0x0),
		Depth = static_cast<int32_t>(0x1),
		Stencil = static_cast<int32_t>(0x2),
		Default = static_cast<int32_t>(0x3),
	};
}

