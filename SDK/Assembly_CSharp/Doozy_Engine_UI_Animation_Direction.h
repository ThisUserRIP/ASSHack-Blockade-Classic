#pragma once
namespace Assembly_CSharp::Doozy::Engine::UI::Animation
{
	enum struct Direction : int32_t
	{
		Left = static_cast<int32_t>(0x0),
		Right = static_cast<int32_t>(0x1),
		Top = static_cast<int32_t>(0x2),
		Bottom = static_cast<int32_t>(0x3),
		TopLeft = static_cast<int32_t>(0x4),
		TopCenter = static_cast<int32_t>(0x5),
		TopRight = static_cast<int32_t>(0x6),
		MiddleLeft = static_cast<int32_t>(0x7),
		MiddleCenter = static_cast<int32_t>(0x8),
		MiddleRight = static_cast<int32_t>(0x9),
		BottomLeft = static_cast<int32_t>(0xA),
		BottomCenter = static_cast<int32_t>(0xB),
		BottomRight = static_cast<int32_t>(0xC),
		CustomPosition = static_cast<int32_t>(0xD),
	};
}

