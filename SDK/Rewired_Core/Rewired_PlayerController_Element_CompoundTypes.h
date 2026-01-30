#pragma once
namespace Rewired_Core::Rewired
{
	enum struct PlayerController_Element_CompoundTypes : int32_t
	{
		Axis2D = static_cast<int32_t>(0x64),
		MouseAxis2D = static_cast<int32_t>(0x65),
		MouseWheel = static_cast<int32_t>(0x66),
	};
}

