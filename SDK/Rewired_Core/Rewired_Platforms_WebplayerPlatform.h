#pragma once
namespace Rewired_Core::Rewired::Platforms
{
	enum struct WebplayerPlatform : int32_t
	{
		None = static_cast<int32_t>(0x0),
		Windows = static_cast<int32_t>(0x1),
		OSX = static_cast<int32_t>(0x2),
		Unknown = static_cast<int32_t>(0x64),
	};
}

