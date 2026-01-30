#pragma once
namespace Rewired_Core::Rewired::ComponentControls
{
	enum struct TouchPad_TouchPadMode : int32_t
	{
		Delta = static_cast<int32_t>(0x0),
		ScreenPosition = static_cast<int32_t>(0x1),
		VectorFromCenter = static_cast<int32_t>(0x2),
		VectorFromInitialTouch = static_cast<int32_t>(0x3),
	};
}

