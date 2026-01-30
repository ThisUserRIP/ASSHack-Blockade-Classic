#pragma once
namespace Rewired_Core::Rewired::Config
{
	enum struct LogLevelFlags : int32_t
	{
		Off = static_cast<int32_t>(0x0),
		Info = static_cast<int32_t>(0x1),
		Warning = static_cast<int32_t>(0x2),
		Error = static_cast<int32_t>(0x4),
		Debug = static_cast<int32_t>(0x8),
	};
}

