#pragma once
namespace Assembly_CSharp::Doozy::Engine::UI
{
	enum struct UIViewStartBehavior : int32_t
	{
		DoNothing = static_cast<int32_t>(0x0),
		Hide = static_cast<int32_t>(0x1),
		PlayShowAnimation = static_cast<int32_t>(0x2),
	};
}

