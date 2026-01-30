#pragma once
namespace mscorlib::System::Threading
{
	enum struct ThreadPriority : int32_t
	{
		Lowest = static_cast<int32_t>(0x0),
		BelowNormal = static_cast<int32_t>(0x1),
		Normal = static_cast<int32_t>(0x2),
		AboveNormal = static_cast<int32_t>(0x3),
		Highest = static_cast<int32_t>(0x4),
	};
}

