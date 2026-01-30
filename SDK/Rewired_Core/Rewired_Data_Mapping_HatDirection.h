#pragma once
namespace Rewired_Core::Rewired::Data::Mapping
{
	enum struct HatDirection : int32_t
	{
		Up = static_cast<int32_t>(0x0),
		Right = static_cast<int32_t>(0x1),
		Down = static_cast<int32_t>(0x2),
		Left = static_cast<int32_t>(0x3),
		UpRight = static_cast<int32_t>(0x4),
		DownRight = static_cast<int32_t>(0x5),
		DownLeft = static_cast<int32_t>(0x6),
		UpLeft = static_cast<int32_t>(0x7),
	};
}

