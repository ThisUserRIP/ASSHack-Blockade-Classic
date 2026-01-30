#pragma once
namespace DOTween::DG::Tweening::Core::Enums
{
	enum struct SpecialStartupMode : int32_t
	{
		None = static_cast<int32_t>(0x0),
		SetLookAt = static_cast<int32_t>(0x1),
		SetShake = static_cast<int32_t>(0x2),
		SetPunch = static_cast<int32_t>(0x3),
		SetCameraShakePosition = static_cast<int32_t>(0x4),
	};
}

