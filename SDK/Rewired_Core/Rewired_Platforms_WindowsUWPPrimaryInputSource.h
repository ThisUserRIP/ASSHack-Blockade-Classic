#pragma once
namespace Rewired_Core::Rewired::Platforms
{
	enum struct WindowsUWPPrimaryInputSource : int32_t
	{
		Native = static_cast<int32_t>(0x0),
		Unity = static_cast<int32_t>(0x64),
	};
}

