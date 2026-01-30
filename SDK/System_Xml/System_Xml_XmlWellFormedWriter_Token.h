#pragma once
namespace System_Xml::System::Xml
{
	enum struct XmlWellFormedWriter_Token : int32_t
	{
		StartDocument = static_cast<int32_t>(0x0),
		EndDocument = static_cast<int32_t>(0x1),
		PI = static_cast<int32_t>(0x2),
		Comment = static_cast<int32_t>(0x3),
		Dtd = static_cast<int32_t>(0x4),
		StartElement = static_cast<int32_t>(0x5),
		EndElement = static_cast<int32_t>(0x6),
		StartAttribute = static_cast<int32_t>(0x7),
		EndAttribute = static_cast<int32_t>(0x8),
		Text = static_cast<int32_t>(0x9),
		CData = static_cast<int32_t>(0xA),
		AtomicValue = static_cast<int32_t>(0xB),
		Base64 = static_cast<int32_t>(0xC),
		RawData = static_cast<int32_t>(0xD),
		Whitespace = static_cast<int32_t>(0xE),
	};
}

