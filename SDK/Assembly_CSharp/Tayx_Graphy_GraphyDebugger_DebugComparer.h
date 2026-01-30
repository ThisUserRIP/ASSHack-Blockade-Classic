#pragma once
namespace Assembly_CSharp::Tayx::Graphy
{
	enum struct GraphyDebugger_DebugComparer : int32_t
	{
		Less_than = static_cast<int32_t>(0x0),
		Equals_or_less_than = static_cast<int32_t>(0x1),
		Equals = static_cast<int32_t>(0x2),
		Equals_or_greater_than = static_cast<int32_t>(0x3),
		Greater_than = static_cast<int32_t>(0x4),
	};
}

