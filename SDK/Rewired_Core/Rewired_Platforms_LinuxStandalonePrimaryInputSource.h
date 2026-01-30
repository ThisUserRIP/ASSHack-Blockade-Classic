#pragma once
namespace Rewired_Core::Rewired::Platforms
{
	enum struct LinuxStandalonePrimaryInputSource : int32_t
	{
		Native = static_cast<int32_t>(0x0),
		SDL2 = static_cast<int32_t>(0xA),
		Unity = static_cast<int32_t>(0x64),
	};
}

