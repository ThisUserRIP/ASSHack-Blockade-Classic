#pragma once
namespace Rewired_Core::Rewired::Config
{
	enum struct LogLevel : int32_t
	{
		Info = static_cast<int32_t>(0x0),
		Warning = static_cast<int32_t>(0x1),
		Error = static_cast<int32_t>(0x2),
		Debug = static_cast<int32_t>(0x3),
	};
}

