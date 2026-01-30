#pragma once
namespace Assembly_CSharp
{
	enum struct VEHICLE_CONTROLLER : int32_t
	{
		Empty = static_cast<int32_t>(0x0),
		User = static_cast<int32_t>(0x1),
		AI = static_cast<int32_t>(0x2),
	};
}

