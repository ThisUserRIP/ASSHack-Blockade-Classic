#pragma once
namespace DOTween::DG::Tweening
{
	enum struct LinkBehaviour : int32_t
	{
		PauseOnDisable = static_cast<int32_t>(0x0),
		PauseOnDisablePlayOnEnable = static_cast<int32_t>(0x1),
		PauseOnDisableRestartOnEnable = static_cast<int32_t>(0x2),
		PlayOnEnable = static_cast<int32_t>(0x3),
		RestartOnEnable = static_cast<int32_t>(0x4),
		KillOnDisable = static_cast<int32_t>(0x5),
		KillOnDestroy = static_cast<int32_t>(0x6),
		CompleteOnDisable = static_cast<int32_t>(0x7),
		CompleteAndKillOnDisable = static_cast<int32_t>(0x8),
		RewindOnDisable = static_cast<int32_t>(0x9),
		RewindAndKillOnDisable = static_cast<int32_t>(0xA),
	};
}

