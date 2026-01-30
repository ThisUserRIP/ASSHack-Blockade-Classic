#pragma once
namespace Assembly_CSharp::Rewired::Demos
{
	enum struct ControlRemappingDemo1_UserResponse : int32_t
	{
		Confirm = static_cast<int32_t>(0x0),
		Cancel = static_cast<int32_t>(0x1),
		Custom1 = static_cast<int32_t>(0x2),
		Custom2 = static_cast<int32_t>(0x3),
	};
}

