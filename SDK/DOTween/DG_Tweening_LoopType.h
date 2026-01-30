#pragma once
namespace DOTween::DG::Tweening
{
	enum struct LoopType : int32_t
	{
		Restart = static_cast<int32_t>(0x0),
		Yoyo = static_cast<int32_t>(0x1),
		Incremental = static_cast<int32_t>(0x2),
	};
}

