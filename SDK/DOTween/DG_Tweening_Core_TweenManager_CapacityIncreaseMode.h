#pragma once
namespace DOTween::DG::Tweening::Core
{
	enum struct TweenManager_CapacityIncreaseMode : int32_t
	{
		TweenersAndSequences = static_cast<int32_t>(0x0),
		TweenersOnly = static_cast<int32_t>(0x1),
		SequencesOnly = static_cast<int32_t>(0x2),
	};
}

