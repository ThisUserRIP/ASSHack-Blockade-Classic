#pragma once
namespace mscorlib::System
{
	enum struct ConsoleModifiers : int32_t
	{
		Alt = static_cast<int32_t>(0x1),
		Shift = static_cast<int32_t>(0x2),
		Control = static_cast<int32_t>(0x4),
	};
}

