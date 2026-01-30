#pragma once
namespace DOTween::DG::Tweening::Core::Enums
{
	enum struct FilterType : int32_t
	{
		All = static_cast<int32_t>(0x0),
		TargetOrId = static_cast<int32_t>(0x1),
		TargetAndId = static_cast<int32_t>(0x2),
		AllExceptTargetsOrIds = static_cast<int32_t>(0x3),
		DOGetter = static_cast<int32_t>(0x4),
	};
}

