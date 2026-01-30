#pragma once
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal
{
	enum struct DeferredTiler_ClipResult : int32_t
	{
		Unknown = static_cast<int32_t>(0x0),
		In = static_cast<int32_t>(0x1),
		Out = static_cast<int32_t>(0x2),
	};
}

