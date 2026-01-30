#pragma once
namespace Rewired_Core::Rewired::Platforms
{
	enum struct EditorPlatform : int32_t
	{
		None = static_cast<int32_t>(0x0),
		OSX = static_cast<int32_t>(0x1),
		Windows = static_cast<int32_t>(0x2),
		Linux = static_cast<int32_t>(0x3),
		Unknown = static_cast<int32_t>(0x64),
	};
}

