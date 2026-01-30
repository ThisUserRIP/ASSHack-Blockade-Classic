#pragma once
namespace DOTween::DG::Tweening::Core::Enums
{
	enum struct RewindCallbackMode : int32_t
	{
		FireIfPositionChanged = static_cast<int32_t>(0x0),
		FireAlwaysWithRewind = static_cast<int32_t>(0x1),
		FireAlways = static_cast<int32_t>(0x2),
	};
}

