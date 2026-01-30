#pragma once
namespace Rewired_Core::Rewired
{
	enum struct ElementAssignmentType : int32_t
	{
		FullAxis = static_cast<int32_t>(0x0),
		SplitAxis = static_cast<int32_t>(0x1),
		Button = static_cast<int32_t>(0x2),
		KeyboardKey = static_cast<int32_t>(0x3),
	};
}

