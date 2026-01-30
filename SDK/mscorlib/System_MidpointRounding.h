#pragma once
namespace mscorlib::System
{
	enum struct MidpointRounding : int32_t
	{
		ToEven = static_cast<int32_t>(0x0),
		AwayFromZero = static_cast<int32_t>(0x1),
	};
}

