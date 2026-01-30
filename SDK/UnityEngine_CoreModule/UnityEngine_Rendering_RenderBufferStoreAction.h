#pragma once
namespace UnityEngine_CoreModule::UnityEngine::Rendering
{
	enum struct RenderBufferStoreAction : int32_t
	{
		Store = static_cast<int32_t>(0x0),
		Resolve = static_cast<int32_t>(0x1),
		StoreAndResolve = static_cast<int32_t>(0x2),
		DontCare = static_cast<int32_t>(0x3),
	};
}

