#pragma once
namespace Rewired_Core::Rewired::ControllerExtensions
{
	enum struct DualSenseMicrophoneLightMode : uint8_t
	{
		Off = static_cast<uint8_t>(0x0),
		On = static_cast<uint8_t>(0x1),
		Flash = static_cast<uint8_t>(0x2),
	};
}

