#pragma once
namespace DOTween::DG::Tweening
{
	enum struct AxisConstraint : int32_t
	{
		None = static_cast<int32_t>(0x0),
		X = static_cast<int32_t>(0x2),
		Y = static_cast<int32_t>(0x4),
		Z = static_cast<int32_t>(0x8),
		W = static_cast<int32_t>(0x10),
	};
}

