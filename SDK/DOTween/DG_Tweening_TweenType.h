#pragma once
namespace DOTween::DG::Tweening
{
	enum struct TweenType : int32_t
	{
		Tweener = static_cast<int32_t>(0x0),
		Sequence = static_cast<int32_t>(0x1),
		Callback = static_cast<int32_t>(0x2),
	};
}

