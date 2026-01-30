#pragma once
namespace Facebook_Unity::Facebook::Unity
{
	enum struct ShareDialogMode : int32_t
	{
		AUTOMATIC = static_cast<int32_t>(0x0),
		NATIVE = static_cast<int32_t>(0x1),
		WEB = static_cast<int32_t>(0x2),
		FEED = static_cast<int32_t>(0x3),
	};
}

