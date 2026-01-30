#pragma once
namespace System_Xml::MS::Internal::Xml::XPath
{
	enum struct Operator_Op : int32_t
	{
		INVALID = static_cast<int32_t>(0x0),
		OR = static_cast<int32_t>(0x1),
		AND = static_cast<int32_t>(0x2),
		EQ = static_cast<int32_t>(0x3),
		NE = static_cast<int32_t>(0x4),
		LT = static_cast<int32_t>(0x5),
		LE = static_cast<int32_t>(0x6),
		GT = static_cast<int32_t>(0x7),
		GE = static_cast<int32_t>(0x8),
		PLUS = static_cast<int32_t>(0x9),
		MINUS = static_cast<int32_t>(0xA),
		MUL = static_cast<int32_t>(0xB),
		DIV = static_cast<int32_t>(0xC),
		MOD = static_cast<int32_t>(0xD),
		UNION = static_cast<int32_t>(0xE),
	};
}

