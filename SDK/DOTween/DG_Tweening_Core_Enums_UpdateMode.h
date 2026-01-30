#pragma once
namespace DOTween::DG::Tweening::Core::Enums
{
	enum struct UpdateMode : int32_t
	{
		Update = static_cast<int32_t>(0x0),
		Goto = static_cast<int32_t>(0x1),
		IgnoreOnUpdate = static_cast<int32_t>(0x2),
		IgnoreOnComplete = static_cast<int32_t>(0x3),
	};
}

