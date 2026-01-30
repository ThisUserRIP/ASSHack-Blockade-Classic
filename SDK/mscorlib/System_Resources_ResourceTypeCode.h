#pragma once
namespace mscorlib::System::Resources
{
	enum struct ResourceTypeCode : int32_t
	{
		Null = static_cast<int32_t>(0x0),
		String = static_cast<int32_t>(0x1),
		Boolean = static_cast<int32_t>(0x2),
		Char = static_cast<int32_t>(0x3),
		Byte = static_cast<int32_t>(0x4),
		SByte = static_cast<int32_t>(0x5),
		Int16 = static_cast<int32_t>(0x6),
		UInt16 = static_cast<int32_t>(0x7),
		Int32 = static_cast<int32_t>(0x8),
		UInt32 = static_cast<int32_t>(0x9),
		Int64 = static_cast<int32_t>(0xA),
		UInt64 = static_cast<int32_t>(0xB),
		Single = static_cast<int32_t>(0xC),
		Double = static_cast<int32_t>(0xD),
		Decimal = static_cast<int32_t>(0xE),
		DateTime = static_cast<int32_t>(0xF),
		TimeSpan = static_cast<int32_t>(0x10),
		LastPrimitive = static_cast<int32_t>(0x10),
		ByteArray = static_cast<int32_t>(0x20),
		Stream = static_cast<int32_t>(0x21),
		StartOfUserTypes = static_cast<int32_t>(0x40),
	};
}

