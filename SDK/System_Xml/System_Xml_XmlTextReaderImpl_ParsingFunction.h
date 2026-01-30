#pragma once
namespace System_Xml::System::Xml
{
	enum struct XmlTextReaderImpl_ParsingFunction : int32_t
	{
		ElementContent = static_cast<int32_t>(0x0),
		NoData = static_cast<int32_t>(0x1),
		OpenUrl = static_cast<int32_t>(0x2),
		SwitchToInteractive = static_cast<int32_t>(0x3),
		SwitchToInteractiveXmlDecl = static_cast<int32_t>(0x4),
		DocumentContent = static_cast<int32_t>(0x5),
		MoveToElementContent = static_cast<int32_t>(0x6),
		PopElementContext = static_cast<int32_t>(0x7),
		PopEmptyElementContext = static_cast<int32_t>(0x8),
		ResetAttributesRootLevel = static_cast<int32_t>(0x9),
		Error = static_cast<int32_t>(0xA),
		Eof = static_cast<int32_t>(0xB),
		ReaderClosed = static_cast<int32_t>(0xC),
		EntityReference = static_cast<int32_t>(0xD),
		InIncrementalRead = static_cast<int32_t>(0xE),
		FragmentAttribute = static_cast<int32_t>(0xF),
		ReportEndEntity = static_cast<int32_t>(0x10),
		AfterResolveEntityInContent = static_cast<int32_t>(0x11),
		AfterResolveEmptyEntityInContent = static_cast<int32_t>(0x12),
		XmlDeclarationFragment = static_cast<int32_t>(0x13),
		GoToEof = static_cast<int32_t>(0x14),
		PartialTextValue = static_cast<int32_t>(0x15),
		InReadAttributeValue = static_cast<int32_t>(0x16),
		InReadValueChunk = static_cast<int32_t>(0x17),
		InReadContentAsBinary = static_cast<int32_t>(0x18),
		InReadElementContentAsBinary = static_cast<int32_t>(0x19),
	};
}

