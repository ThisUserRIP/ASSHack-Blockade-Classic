#pragma once
namespace Rewired_Core::Rewired
{
	enum struct InputMapper_ConflictResponse : int32_t
	{
		Cancel = static_cast<int32_t>(0x0),
		Replace = static_cast<int32_t>(0x1),
		Add = static_cast<int32_t>(0x2),
		Ignore = static_cast<int32_t>(0x3),
	};
}

