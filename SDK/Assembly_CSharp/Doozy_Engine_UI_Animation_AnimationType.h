#pragma once
namespace Assembly_CSharp::Doozy::Engine::UI::Animation
{
	enum struct AnimationType : int32_t
	{
		Undefined = static_cast<int32_t>(0x0),
		Show = static_cast<int32_t>(0x1),
		Hide = static_cast<int32_t>(0x2),
		Loop = static_cast<int32_t>(0x3),
		Punch = static_cast<int32_t>(0x4),
		State = static_cast<int32_t>(0x5),
	};
}

