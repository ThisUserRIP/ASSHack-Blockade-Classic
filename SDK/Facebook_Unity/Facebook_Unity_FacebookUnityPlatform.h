#pragma once
namespace Facebook_Unity::Facebook::Unity
{
	enum struct FacebookUnityPlatform : int32_t
	{
		Unknown = static_cast<int32_t>(0x0),
		Android = static_cast<int32_t>(0x1),
		IOS = static_cast<int32_t>(0x2),
		WebGL = static_cast<int32_t>(0x3),
		Gameroom = static_cast<int32_t>(0x4),
	};
}

