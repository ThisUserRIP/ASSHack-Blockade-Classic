#pragma once
namespace mscorlib::System
{
	enum struct StringSplitOptions : int32_t
	{
		None = static_cast<int32_t>(0x0),
		RemoveEmptyEntries = static_cast<int32_t>(0x1),
	};
}

