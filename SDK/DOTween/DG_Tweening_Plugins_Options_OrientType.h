#pragma once
namespace DOTween::DG::Tweening::Plugins::Options
{
	enum struct OrientType : int32_t
	{
		None = static_cast<int32_t>(0x0),
		ToPath = static_cast<int32_t>(0x1),
		LookAtTransform = static_cast<int32_t>(0x2),
		LookAtPosition = static_cast<int32_t>(0x3),
	};
}

