#pragma once
namespace DOTween::DG::Tweening
{
	enum struct RotateMode : int32_t
	{
		Fast = static_cast<int32_t>(0x0),
		FastBeyond360 = static_cast<int32_t>(0x1),
		WorldAxisAdd = static_cast<int32_t>(0x2),
		LocalAxisAdd = static_cast<int32_t>(0x3),
	};
}

