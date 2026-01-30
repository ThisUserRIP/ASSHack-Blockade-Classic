#pragma once
namespace System_Xml::MS::Internal::Xml::XPath
{
	enum struct AstNode_AstType : int32_t
	{
		Axis = static_cast<int32_t>(0x0),
		Operator = static_cast<int32_t>(0x1),
		Filter = static_cast<int32_t>(0x2),
		ConstantOperand = static_cast<int32_t>(0x3),
		Function = static_cast<int32_t>(0x4),
		Group = static_cast<int32_t>(0x5),
		Root = static_cast<int32_t>(0x6),
		Variable = static_cast<int32_t>(0x7),
		Error = static_cast<int32_t>(0x8),
	};
}

