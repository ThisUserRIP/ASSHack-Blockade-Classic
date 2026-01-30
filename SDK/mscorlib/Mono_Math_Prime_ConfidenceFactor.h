#pragma once
namespace mscorlib::Mono::Math::Prime
{
	enum struct ConfidenceFactor : int32_t
	{
		ExtraLow = static_cast<int32_t>(0x0),
		Low = static_cast<int32_t>(0x1),
		Medium = static_cast<int32_t>(0x2),
		High = static_cast<int32_t>(0x3),
		ExtraHigh = static_cast<int32_t>(0x4),
		Provable = static_cast<int32_t>(0x5),
	};
}

