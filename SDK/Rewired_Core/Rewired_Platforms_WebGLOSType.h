#pragma once
namespace Rewired_Core::Rewired::Platforms
{
	enum struct WebGLOSType : int32_t
	{
		Unknown = static_cast<int32_t>(0xFFFFFFFF),
		None = static_cast<int32_t>(0x0),
		Windows = static_cast<int32_t>(0x1),
		OSX = static_cast<int32_t>(0x2),
		Linux = static_cast<int32_t>(0x3),
		Android = static_cast<int32_t>(0x4),
		iOS = static_cast<int32_t>(0x5),
	};
}

