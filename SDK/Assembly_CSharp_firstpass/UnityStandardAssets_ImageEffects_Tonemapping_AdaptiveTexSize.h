#pragma once
namespace Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects
{
	enum struct Tonemapping_AdaptiveTexSize : int32_t
	{
		Square16 = static_cast<int32_t>(0x10),
		Square32 = static_cast<int32_t>(0x20),
		Square64 = static_cast<int32_t>(0x40),
		Square128 = static_cast<int32_t>(0x80),
		Square256 = static_cast<int32_t>(0x100),
		Square512 = static_cast<int32_t>(0x200),
		Square1024 = static_cast<int32_t>(0x400),
	};
}

