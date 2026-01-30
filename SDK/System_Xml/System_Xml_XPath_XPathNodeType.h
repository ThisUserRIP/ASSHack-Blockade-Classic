#pragma once
namespace System_Xml::System::Xml::XPath
{
	enum struct XPathNodeType : int32_t
	{
		Root = static_cast<int32_t>(0x0),
		Element = static_cast<int32_t>(0x1),
		Attribute = static_cast<int32_t>(0x2),
		Namespace = static_cast<int32_t>(0x3),
		Text = static_cast<int32_t>(0x4),
		SignificantWhitespace = static_cast<int32_t>(0x5),
		Whitespace = static_cast<int32_t>(0x6),
		ProcessingInstruction = static_cast<int32_t>(0x7),
		Comment = static_cast<int32_t>(0x8),
		All = static_cast<int32_t>(0x9),
	};
}

