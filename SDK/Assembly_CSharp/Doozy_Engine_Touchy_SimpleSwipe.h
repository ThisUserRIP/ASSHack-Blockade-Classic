#pragma once
namespace Assembly_CSharp::Doozy::Engine::Touchy
{
	enum struct SimpleSwipe : int32_t
	{
		None = static_cast<int32_t>(0x0),
		Left = static_cast<int32_t>(0x1),
		Right = static_cast<int32_t>(0x2),
		Up = static_cast<int32_t>(0x3),
		Down = static_cast<int32_t>(0x4),
	};
}

