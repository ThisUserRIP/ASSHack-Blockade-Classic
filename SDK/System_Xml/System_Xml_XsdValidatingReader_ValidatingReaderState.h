#pragma once
namespace System_Xml::System::Xml
{
	enum struct XsdValidatingReader_ValidatingReaderState : int32_t
	{
		None = static_cast<int32_t>(0x0),
		Init = static_cast<int32_t>(0x1),
		Read = static_cast<int32_t>(0x2),
		OnDefaultAttribute = static_cast<int32_t>(0xFFFFFFFF),
		OnReadAttributeValue = static_cast<int32_t>(0xFFFFFFFE),
		OnAttribute = static_cast<int32_t>(0x3),
		ClearAttributes = static_cast<int32_t>(0x4),
		ParseInlineSchema = static_cast<int32_t>(0x5),
		ReadAhead = static_cast<int32_t>(0x6),
		OnReadBinaryContent = static_cast<int32_t>(0x7),
		ReaderClosed = static_cast<int32_t>(0x8),
		EOF = static_cast<int32_t>(0x9),
		Error = static_cast<int32_t>(0xA),
	};
}

