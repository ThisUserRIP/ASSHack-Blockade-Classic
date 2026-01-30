#pragma once
namespace UnityEngine_TextRenderingModule::UnityEngine
{
	enum struct TextAnchor : int32_t
	{
		UpperLeft = static_cast<int32_t>(0x0),
		UpperCenter = static_cast<int32_t>(0x1),
		UpperRight = static_cast<int32_t>(0x2),
		MiddleLeft = static_cast<int32_t>(0x3),
		MiddleCenter = static_cast<int32_t>(0x4),
		MiddleRight = static_cast<int32_t>(0x5),
		LowerLeft = static_cast<int32_t>(0x6),
		LowerCenter = static_cast<int32_t>(0x7),
		LowerRight = static_cast<int32_t>(0x8),
	};
}

