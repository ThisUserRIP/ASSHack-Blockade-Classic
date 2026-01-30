#pragma once
namespace UnityEngine_CoreModule::UnityEngine::Rendering
{
	enum struct RenderBufferLoadAction : int32_t
	{
		Load = static_cast<int32_t>(0x0),
		Clear = static_cast<int32_t>(0x1),
		DontCare = static_cast<int32_t>(0x2),
	};
}

