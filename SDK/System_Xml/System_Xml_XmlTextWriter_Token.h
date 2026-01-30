#pragma once
namespace System_Xml::System::Xml
{
	enum struct XmlTextWriter_Token : int32_t
	{
		PI = static_cast<int32_t>(0x0),
		Doctype = static_cast<int32_t>(0x1),
		Comment = static_cast<int32_t>(0x2),
		CData = static_cast<int32_t>(0x3),
		StartElement = static_cast<int32_t>(0x4),
		EndElement = static_cast<int32_t>(0x5),
		LongEndElement = static_cast<int32_t>(0x6),
		StartAttribute = static_cast<int32_t>(0x7),
		EndAttribute = static_cast<int32_t>(0x8),
		Content = static_cast<int32_t>(0x9),
		Base64 = static_cast<int32_t>(0xA),
		RawData = static_cast<int32_t>(0xB),
		Whitespace = static_cast<int32_t>(0xC),
		Empty = static_cast<int32_t>(0xD),
	};
}

