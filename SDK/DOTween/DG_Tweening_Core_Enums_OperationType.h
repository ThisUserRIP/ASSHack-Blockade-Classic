#pragma once
namespace DOTween::DG::Tweening::Core::Enums
{
	enum struct OperationType : int32_t
	{
		Complete = static_cast<int32_t>(0x0),
		Despawn = static_cast<int32_t>(0x1),
		Flip = static_cast<int32_t>(0x2),
		Goto = static_cast<int32_t>(0x3),
		Pause = static_cast<int32_t>(0x4),
		Play = static_cast<int32_t>(0x5),
		PlayForward = static_cast<int32_t>(0x6),
		PlayBackwards = static_cast<int32_t>(0x7),
		Rewind = static_cast<int32_t>(0x8),
		SmoothRewind = static_cast<int32_t>(0x9),
		Restart = static_cast<int32_t>(0xA),
		TogglePause = static_cast<int32_t>(0xB),
		IsTweening = static_cast<int32_t>(0xC),
	};
}

