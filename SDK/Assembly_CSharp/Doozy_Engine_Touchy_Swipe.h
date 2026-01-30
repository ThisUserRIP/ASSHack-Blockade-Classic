#pragma once
namespace Assembly_CSharp::Doozy::Engine::Touchy
{
	enum struct Swipe : int32_t
	{
		None = static_cast<int32_t>(0x0),
		UpLeft = static_cast<int32_t>(0x1),
		Up = static_cast<int32_t>(0x2),
		UpRight = static_cast<int32_t>(0x3),
		Left = static_cast<int32_t>(0x4),
		Right = static_cast<int32_t>(0x5),
		DownLeft = static_cast<int32_t>(0x6),
		Down = static_cast<int32_t>(0x7),
		DownRight = static_cast<int32_t>(0x8),
	};
}

