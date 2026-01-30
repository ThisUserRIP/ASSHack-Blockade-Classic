#pragma once
namespace Facepunch_Steamworks::Facepunch::Steamworks
{
	enum struct OperatingSystem : int32_t
	{
		Unset = static_cast<int32_t>(0x0),
		Windows = static_cast<int32_t>(0x1),
		Linux = static_cast<int32_t>(0x2),
		macOS = static_cast<int32_t>(0x3),
	};
}

