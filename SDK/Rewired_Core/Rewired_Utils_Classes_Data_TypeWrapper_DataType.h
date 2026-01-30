#pragma once
namespace Rewired_Core::Rewired::Utils::Classes::Data
{
	enum struct TypeWrapper_DataType : int32_t
	{
		Unknown = static_cast<int32_t>(0x0),
		Byte = static_cast<int32_t>(0x1),
		SByte = static_cast<int32_t>(0x2),
		Char = static_cast<int32_t>(0x3),
		Int16 = static_cast<int32_t>(0x4),
		UInt16 = static_cast<int32_t>(0x5),
		Int32 = static_cast<int32_t>(0x6),
		UInt32 = static_cast<int32_t>(0x7),
		Int64 = static_cast<int32_t>(0x8),
		UInt64 = static_cast<int32_t>(0x9),
		Single = static_cast<int32_t>(0xA),
		Double = static_cast<int32_t>(0xB),
		Boolean = static_cast<int32_t>(0xC),
		String = static_cast<int32_t>(0xD),
		Object = static_cast<int32_t>(0xE),
	};
}

