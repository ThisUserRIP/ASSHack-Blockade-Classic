#pragma once
namespace Rewired_Core::Rewired
{
	enum struct ControllerElementType : int32_t
	{
		Axis = static_cast<int32_t>(0x0),
		Button = static_cast<int32_t>(0x1),
		CompoundElement = static_cast<int32_t>(0x64),
	};
}

