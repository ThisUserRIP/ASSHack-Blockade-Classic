#pragma once
namespace Rewired_Core::Rewired::Platforms::PS4
{
	enum struct PS4InputSource_GvJDkYcqakBBwxdTuGUVEKkeXePC_ChangeType : int32_t
	{
		None = static_cast<int32_t>(0x0),
		Connected = static_cast<int32_t>(0x1),
		Disconnected = static_cast<int32_t>(0x2),
		IdentityChanged = static_cast<int32_t>(0x4),
	};
}

