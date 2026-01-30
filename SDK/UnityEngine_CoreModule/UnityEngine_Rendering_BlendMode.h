#pragma once
namespace UnityEngine_CoreModule::UnityEngine::Rendering
{
	enum struct BlendMode : int32_t
	{
		Zero = static_cast<int32_t>(0x0),
		One = static_cast<int32_t>(0x1),
		DstColor = static_cast<int32_t>(0x2),
		SrcColor = static_cast<int32_t>(0x3),
		OneMinusDstColor = static_cast<int32_t>(0x4),
		SrcAlpha = static_cast<int32_t>(0x5),
		OneMinusSrcColor = static_cast<int32_t>(0x6),
		DstAlpha = static_cast<int32_t>(0x7),
		OneMinusDstAlpha = static_cast<int32_t>(0x8),
		SrcAlphaSaturate = static_cast<int32_t>(0x9),
		OneMinusSrcAlpha = static_cast<int32_t>(0xA),
	};
}

