#pragma once
namespace Rewired_Core::Rewired
{
	enum struct InputSource : int32_t
	{
		None = static_cast<int32_t>(0x0),
		DirectInput = static_cast<int32_t>(0x1),
		XInput = static_cast<int32_t>(0x2),
		OSX = static_cast<int32_t>(0x3),
		Fallback = static_cast<int32_t>(0x4),
		RawInput = static_cast<int32_t>(0x5),
		Fallback_PreConfigured = static_cast<int32_t>(0x6),
		Linux = static_cast<int32_t>(0x7),
		WindowsUWP = static_cast<int32_t>(0x8),
		WebGL = static_cast<int32_t>(0x9),
		Steam = static_cast<int32_t>(0x12),
		SDL2 = static_cast<int32_t>(0x13),
		Ouya = static_cast<int32_t>(0x14),
		XboxOne = static_cast<int32_t>(0x15),
		PS4 = static_cast<int32_t>(0x16),
		NintendoSwitch = static_cast<int32_t>(0x18),
		Stadia = static_cast<int32_t>(0x19),
		GameCoreXboxOne = static_cast<int32_t>(0x1A),
		GameCoreScarlett = static_cast<int32_t>(0x1B),
		PS5 = static_cast<int32_t>(0x1C),
		InternalDriver = static_cast<int32_t>(0x31),
		UnityKeyboardAndMouse = static_cast<int32_t>(0x32),
		Custom = static_cast<int32_t>(0x64),
	};
}

