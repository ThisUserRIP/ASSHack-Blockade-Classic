#pragma once
namespace mscorlib::System
{
	enum struct TypeCode : int32_t
	{
		Empty = static_cast<int32_t>(0x0),
		Object = static_cast<int32_t>(0x1),
		DBNull = static_cast<int32_t>(0x2),
		Boolean = static_cast<int32_t>(0x3),
		Char = static_cast<int32_t>(0x4),
		SByte = static_cast<int32_t>(0x5),
		Byte = static_cast<int32_t>(0x6),
		Int16 = static_cast<int32_t>(0x7),
		UInt16 = static_cast<int32_t>(0x8),
		Int32 = static_cast<int32_t>(0x9),
		UInt32 = static_cast<int32_t>(0xA),
		Int64 = static_cast<int32_t>(0xB),
		UInt64 = static_cast<int32_t>(0xC),
		Single = static_cast<int32_t>(0xD),
		Double = static_cast<int32_t>(0xE),
		Decimal = static_cast<int32_t>(0xF),
		DateTime = static_cast<int32_t>(0x10),
		String = static_cast<int32_t>(0x12),
	};
}

