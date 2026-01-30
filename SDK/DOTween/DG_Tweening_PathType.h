#pragma once
namespace DOTween::DG::Tweening
{
	enum struct PathType : int32_t
	{
		Linear = static_cast<int32_t>(0x0),
		CatmullRom = static_cast<int32_t>(0x1),
		CubicBezier = static_cast<int32_t>(0x2),
	};
}

