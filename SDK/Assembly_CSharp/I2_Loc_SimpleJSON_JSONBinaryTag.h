#pragma once
namespace Assembly_CSharp::I2::Loc::SimpleJSON
{
	enum struct JSONBinaryTag : int32_t
	{
		Array = static_cast<int32_t>(0x1),
		Class = static_cast<int32_t>(0x2),
		Value = static_cast<int32_t>(0x3),
		IntValue = static_cast<int32_t>(0x4),
		DoubleValue = static_cast<int32_t>(0x5),
		BoolValue = static_cast<int32_t>(0x6),
		FloatValue = static_cast<int32_t>(0x7),
	};
}

