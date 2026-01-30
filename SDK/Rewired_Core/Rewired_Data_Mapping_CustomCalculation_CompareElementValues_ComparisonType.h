#pragma once
namespace Rewired_Core::Rewired::Data::Mapping
{
	enum struct CustomCalculation_CompareElementValues_ComparisonType : int32_t
	{
		Min = static_cast<int32_t>(0x0),
		Max = static_cast<int32_t>(0x1),
		MinAbs = static_cast<int32_t>(0x2),
		MaxAbs = static_cast<int32_t>(0x3),
	};
}

