#pragma once
namespace Assembly_CSharp::Doozy::Engine::UI::Animation
{
	enum struct AnimationAction : int32_t
	{
		Move = static_cast<int32_t>(0x0),
		Rotate = static_cast<int32_t>(0x1),
		Scale = static_cast<int32_t>(0x2),
		Fade = static_cast<int32_t>(0x3),
	};
}

