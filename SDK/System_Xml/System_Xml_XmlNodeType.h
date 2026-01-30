#pragma once
namespace System_Xml::System::Xml
{
	enum struct XmlNodeType : int32_t
	{
		None = static_cast<int32_t>(0x0),
		Element = static_cast<int32_t>(0x1),
		Attribute = static_cast<int32_t>(0x2),
		Text = static_cast<int32_t>(0x3),
		CDATA = static_cast<int32_t>(0x4),
		EntityReference = static_cast<int32_t>(0x5),
		Entity = static_cast<int32_t>(0x6),
		ProcessingInstruction = static_cast<int32_t>(0x7),
		Comment = static_cast<int32_t>(0x8),
		Document = static_cast<int32_t>(0x9),
		DocumentType = static_cast<int32_t>(0xA),
		DocumentFragment = static_cast<int32_t>(0xB),
		Notation = static_cast<int32_t>(0xC),
		Whitespace = static_cast<int32_t>(0xD),
		SignificantWhitespace = static_cast<int32_t>(0xE),
		EndElement = static_cast<int32_t>(0xF),
		EndEntity = static_cast<int32_t>(0x10),
		XmlDeclaration = static_cast<int32_t>(0x11),
	};
}

