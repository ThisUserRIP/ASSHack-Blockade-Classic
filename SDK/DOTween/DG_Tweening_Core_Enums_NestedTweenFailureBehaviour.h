#pragma once
namespace DOTween::DG::Tweening::Core::Enums
{
	enum struct NestedTweenFailureBehaviour : int32_t
	{
		TryToPreserveSequence = static_cast<int32_t>(0x0),
		KillWholeSequence = static_cast<int32_t>(0x1),
	};
}

