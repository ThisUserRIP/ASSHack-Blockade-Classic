#pragma once
namespace DOTween::DG::Tweening
{
	enum struct UpdateType : int32_t
	{
		Normal = static_cast<int32_t>(0x0),
		Late = static_cast<int32_t>(0x1),
		Fixed = static_cast<int32_t>(0x2),
		Manual = static_cast<int32_t>(0x3),
	};
}

