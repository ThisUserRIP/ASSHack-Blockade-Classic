#pragma once
namespace Assembly_CSharp::Doozy::Engine::UI
{
	enum struct UIDrawerContainerSize : int32_t
	{
		FullScreen = static_cast<int32_t>(0x0),
		PercentageOfScreen = static_cast<int32_t>(0x1),
		FixedSize = static_cast<int32_t>(0x2),
	};
}

