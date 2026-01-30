#pragma once
namespace Rewired_Core::Rewired::ControllerExtensions
{
	enum struct DualSenseOtherLightBrightness : uint8_t
	{
		Low = static_cast<uint8_t>(0x0),
		Medium = static_cast<uint8_t>(0x1),
		High = static_cast<uint8_t>(0x2),
	};
}

