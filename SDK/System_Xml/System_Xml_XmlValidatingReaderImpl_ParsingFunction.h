#pragma once
namespace System_Xml::System::Xml
{
	enum struct XmlValidatingReaderImpl_ParsingFunction : int32_t
	{
		Read = static_cast<int32_t>(0x0),
		Init = static_cast<int32_t>(0x1),
		ParseDtdFromContext = static_cast<int32_t>(0x2),
		ResolveEntityInternally = static_cast<int32_t>(0x3),
		InReadBinaryContent = static_cast<int32_t>(0x4),
		ReaderClosed = static_cast<int32_t>(0x5),
		Error = static_cast<int32_t>(0x6),
		None = static_cast<int32_t>(0x7),
	};
}

