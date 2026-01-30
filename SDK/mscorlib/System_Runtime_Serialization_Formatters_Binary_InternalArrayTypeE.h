#pragma once
namespace mscorlib::System::Runtime::Serialization::Formatters::Binary
{
	enum struct InternalArrayTypeE : int32_t
	{
		Empty = static_cast<int32_t>(0x0),
		Single = static_cast<int32_t>(0x1),
		Jagged = static_cast<int32_t>(0x2),
		Rectangular = static_cast<int32_t>(0x3),
		Base64 = static_cast<int32_t>(0x4),
	};
}

