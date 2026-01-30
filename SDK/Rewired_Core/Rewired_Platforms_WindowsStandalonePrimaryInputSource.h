#pragma once
namespace Rewired_Core::Rewired::Platforms
{
	enum struct WindowsStandalonePrimaryInputSource : int32_t
	{
		RawInput = static_cast<int32_t>(0x0),
		DirectInput = static_cast<int32_t>(0x1),
		XInput = static_cast<int32_t>(0x2),
		SDL2 = static_cast<int32_t>(0xA),
		Unity = static_cast<int32_t>(0x64),
	};
}

