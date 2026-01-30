#pragma once
namespace Assembly_CSharp
{
	enum struct MODE : int32_t
	{
		NULL_ = static_cast<int32_t>(0xFFFFFFFF),
		BATTLE = static_cast<int32_t>(0x0),
		CLASSIC = static_cast<int32_t>(0x1),
		BUILD = static_cast<int32_t>(0x2),
		ZOMBIE = static_cast<int32_t>(0x3),
		CAPTURE = static_cast<int32_t>(0x4),
		CONTRA = static_cast<int32_t>(0x5),
		MELEE = static_cast<int32_t>(0x6),
		SURVIVAL = static_cast<int32_t>(0x7),
		M1945 = static_cast<int32_t>(0x8),
		PRORIV = static_cast<int32_t>(0x9),
		CLEAR = static_cast<int32_t>(0xA),
		TANK = static_cast<int32_t>(0xB),
		SNOWBALLS = static_cast<int32_t>(0xC),
		FFA = static_cast<int32_t>(0xD),
		GUNGAME = static_cast<int32_t>(0xE),
		MUTAGEN = static_cast<int32_t>(0xF),
		SEASON1 = static_cast<int32_t>(0x10),
	};
}

