#pragma once
namespace Rewired_Core::Rewired::ControllerExtensions
{
	enum struct DualSensePlayerLightFlags : uint8_t
	{
		None = static_cast<uint8_t>(0x0),
		One = static_cast<uint8_t>(0x1),
		Two = static_cast<uint8_t>(0x2),
		Three = static_cast<uint8_t>(0x4),
		Four = static_cast<uint8_t>(0x8),
		Five = static_cast<uint8_t>(0x10),
	};
}

