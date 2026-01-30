#pragma once
namespace mscorlib::Mono::Math
{
	enum struct BigInteger_Sign : int32_t
	{
		Negative = static_cast<int32_t>(0xFFFFFFFF),
		Zero = static_cast<int32_t>(0x0),
		Positive = static_cast<int32_t>(0x1),
	};
}

