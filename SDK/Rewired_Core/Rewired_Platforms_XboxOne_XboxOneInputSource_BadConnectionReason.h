#pragma once
namespace Rewired_Core::Rewired::Platforms::XboxOne
{
	enum struct XboxOneInputSource_BadConnectionReason : int32_t
	{
		None = static_cast<int32_t>(0x0),
		GamepadNotActive = static_cast<int32_t>(0x1),
		InvalidName = static_cast<int32_t>(0x2),
	};
}

