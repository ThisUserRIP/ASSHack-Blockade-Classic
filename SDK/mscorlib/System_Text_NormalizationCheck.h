#pragma once
namespace mscorlib::System::Text
{
	enum struct NormalizationCheck : int32_t
	{
		Yes = static_cast<int32_t>(0x0),
		No = static_cast<int32_t>(0x1),
		Maybe = static_cast<int32_t>(0x2),
	};
}

