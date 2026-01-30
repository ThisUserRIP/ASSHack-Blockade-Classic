#pragma once
namespace Assembly_CSharp::Doozy::Engine::Touchy
{
	enum struct GestureType : int32_t
	{
		Tap = static_cast<int32_t>(0x0),
		LongTap = static_cast<int32_t>(0x1),
		Swipe = static_cast<int32_t>(0x2),
	};
}

