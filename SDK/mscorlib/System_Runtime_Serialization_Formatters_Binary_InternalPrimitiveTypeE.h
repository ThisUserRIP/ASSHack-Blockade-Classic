#pragma once
namespace mscorlib::System::Runtime::Serialization::Formatters::Binary
{
	enum struct InternalPrimitiveTypeE : int32_t
	{
		Invalid = static_cast<int32_t>(0x0),
		Boolean = static_cast<int32_t>(0x1),
		Byte = static_cast<int32_t>(0x2),
		Char = static_cast<int32_t>(0x3),
		Currency = static_cast<int32_t>(0x4),
		Decimal = static_cast<int32_t>(0x5),
		Double = static_cast<int32_t>(0x6),
		Int16 = static_cast<int32_t>(0x7),
		Int32 = static_cast<int32_t>(0x8),
		Int64 = static_cast<int32_t>(0x9),
		SByte = static_cast<int32_t>(0xA),
		Single = static_cast<int32_t>(0xB),
		TimeSpan = static_cast<int32_t>(0xC),
		DateTime = static_cast<int32_t>(0xD),
		UInt16 = static_cast<int32_t>(0xE),
		UInt32 = static_cast<int32_t>(0xF),
		UInt64 = static_cast<int32_t>(0x10),
		Null = static_cast<int32_t>(0x11),
		String = static_cast<int32_t>(0x12),
	};
}

