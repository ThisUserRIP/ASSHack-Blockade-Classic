#pragma once
namespace Assembly_CSharp_firstpass::RootMotion::Demos
{
	enum struct Navigator_State : int32_t
	{
		Idle = static_cast<int32_t>(0x0),
		Seeking = static_cast<int32_t>(0x1),
		OnPath = static_cast<int32_t>(0x2),
	};
}

