#pragma once
namespace UnityEngine_CoreModule::UnityEngine::Rendering
{
	enum struct DrawRendererFlags : int32_t
	{
		None = static_cast<int32_t>(0x0),
		EnableDynamicBatching = static_cast<int32_t>(0x1),
		EnableInstancing = static_cast<int32_t>(0x2),
	};
}

