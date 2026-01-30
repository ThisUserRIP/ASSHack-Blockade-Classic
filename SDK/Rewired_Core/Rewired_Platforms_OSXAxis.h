#pragma once
namespace Rewired_Core::Rewired::Platforms
{
	enum struct OSXAxis : int32_t
	{
		None = static_cast<int32_t>(0x0),
		X = static_cast<int32_t>(0x1),
		Y = static_cast<int32_t>(0x2),
		Other = static_cast<int32_t>(0x3),
	};
}

