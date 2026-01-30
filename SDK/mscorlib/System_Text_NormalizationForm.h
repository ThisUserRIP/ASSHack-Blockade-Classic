#pragma once
namespace mscorlib::System::Text
{
	enum struct NormalizationForm : int32_t
	{
		FormC = static_cast<int32_t>(0x1),
		FormD = static_cast<int32_t>(0x2),
		FormKC = static_cast<int32_t>(0x5),
		FormKD = static_cast<int32_t>(0x6),
	};
}

