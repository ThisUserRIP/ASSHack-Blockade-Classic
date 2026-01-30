#pragma once
namespace DOTween::DG::Tweening
{
	enum struct AutoPlay : int32_t
	{
		None = static_cast<int32_t>(0x0),
		AutoPlaySequences = static_cast<int32_t>(0x1),
		AutoPlayTweeners = static_cast<int32_t>(0x2),
		All = static_cast<int32_t>(0x3),
	};
}

