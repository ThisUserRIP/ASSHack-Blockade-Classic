#pragma once
namespace mscorlib::System
{
	enum struct DateTimeParse_TM : int32_t
	{
		NotSet = static_cast<int32_t>(0xFFFFFFFF),
		AM = static_cast<int32_t>(0x0),
		PM = static_cast<int32_t>(0x1),
	};
}

