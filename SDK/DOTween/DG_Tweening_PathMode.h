#pragma once
namespace DOTween::DG::Tweening
{
	enum struct PathMode : int32_t
	{
		Ignore = static_cast<int32_t>(0x0),
		Full3D = static_cast<int32_t>(0x1),
		TopDown2D = static_cast<int32_t>(0x2),
		Sidescroller2D = static_cast<int32_t>(0x3),
	};
}

