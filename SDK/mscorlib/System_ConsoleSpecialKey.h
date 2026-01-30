#pragma once
namespace mscorlib::System
{
	enum struct ConsoleSpecialKey : int32_t
	{
		ControlC = static_cast<int32_t>(0x0),
		ControlBreak = static_cast<int32_t>(0x1),
	};
}

