#pragma once
namespace Assembly_CSharp
{
	enum struct PERFORMANCE_STATUS : int32_t
	{
		INACTIVE = static_cast<int32_t>(0x0),
		PENDING = static_cast<int32_t>(0x1),
		COMPLITED = static_cast<int32_t>(0x2),
	};
}

