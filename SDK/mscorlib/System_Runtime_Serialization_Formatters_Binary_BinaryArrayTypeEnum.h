#pragma once
namespace mscorlib::System::Runtime::Serialization::Formatters::Binary
{
	enum struct BinaryArrayTypeEnum : int32_t
	{
		Single = static_cast<int32_t>(0x0),
		Jagged = static_cast<int32_t>(0x1),
		Rectangular = static_cast<int32_t>(0x2),
		SingleOffset = static_cast<int32_t>(0x3),
		JaggedOffset = static_cast<int32_t>(0x4),
		RectangularOffset = static_cast<int32_t>(0x5),
	};
}

