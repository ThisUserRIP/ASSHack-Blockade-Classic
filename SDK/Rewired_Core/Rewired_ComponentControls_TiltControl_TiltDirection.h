#pragma once
namespace Rewired_Core::Rewired::ComponentControls
{
	enum struct TiltControl_TiltDirection : int32_t
	{
		Both = static_cast<int32_t>(0x0),
		Horizontal = static_cast<int32_t>(0x1),
		Forward = static_cast<int32_t>(0x2),
	};
}

