#pragma once
namespace DOTween::DG::Tweening
{
	enum struct ScrambleMode : int32_t
	{
		None = static_cast<int32_t>(0x0),
		All = static_cast<int32_t>(0x1),
		Uppercase = static_cast<int32_t>(0x2),
		Lowercase = static_cast<int32_t>(0x3),
		Numerals = static_cast<int32_t>(0x4),
		Custom = static_cast<int32_t>(0x5),
	};
}

