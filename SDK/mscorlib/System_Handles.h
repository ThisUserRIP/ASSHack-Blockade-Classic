#pragma once
namespace mscorlib::System
{
	enum struct Handles : int32_t
	{
		STD_INPUT = static_cast<int32_t>(0xFFFFFFF6),
		STD_OUTPUT = static_cast<int32_t>(0xFFFFFFF5),
		STD_ERROR = static_cast<int32_t>(0xFFFFFFF4),
	};
}

