#pragma once
namespace UnityEngine_CoreModule::UnityEngine
{
	enum struct RenderTextureMemoryless : int32_t
	{
		None = static_cast<int32_t>(0x0),
		Color = static_cast<int32_t>(0x1),
		Depth = static_cast<int32_t>(0x2),
		MSAA = static_cast<int32_t>(0x4),
	};
}

