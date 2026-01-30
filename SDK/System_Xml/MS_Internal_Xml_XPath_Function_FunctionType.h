#pragma once
namespace System_Xml::MS::Internal::Xml::XPath
{
	enum struct Function_FunctionType : int32_t
	{
		FuncLast = static_cast<int32_t>(0x0),
		FuncPosition = static_cast<int32_t>(0x1),
		FuncCount = static_cast<int32_t>(0x2),
		FuncID = static_cast<int32_t>(0x3),
		FuncLocalName = static_cast<int32_t>(0x4),
		FuncNameSpaceUri = static_cast<int32_t>(0x5),
		FuncName = static_cast<int32_t>(0x6),
		FuncString = static_cast<int32_t>(0x7),
		FuncBoolean = static_cast<int32_t>(0x8),
		FuncNumber = static_cast<int32_t>(0x9),
		FuncTrue = static_cast<int32_t>(0xA),
		FuncFalse = static_cast<int32_t>(0xB),
		FuncNot = static_cast<int32_t>(0xC),
		FuncConcat = static_cast<int32_t>(0xD),
		FuncStartsWith = static_cast<int32_t>(0xE),
		FuncContains = static_cast<int32_t>(0xF),
		FuncSubstringBefore = static_cast<int32_t>(0x10),
		FuncSubstringAfter = static_cast<int32_t>(0x11),
		FuncSubstring = static_cast<int32_t>(0x12),
		FuncStringLength = static_cast<int32_t>(0x13),
		FuncNormalize = static_cast<int32_t>(0x14),
		FuncTranslate = static_cast<int32_t>(0x15),
		FuncLang = static_cast<int32_t>(0x16),
		FuncSum = static_cast<int32_t>(0x17),
		FuncFloor = static_cast<int32_t>(0x18),
		FuncCeiling = static_cast<int32_t>(0x19),
		FuncRound = static_cast<int32_t>(0x1A),
		FuncUserDefined = static_cast<int32_t>(0x1B),
	};
}

