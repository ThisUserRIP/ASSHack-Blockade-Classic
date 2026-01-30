#pragma once
namespace System_Xml::System::Xml
{
	enum struct XmlTextReaderImpl_IncrementalReadState : int32_t
	{
		Text = static_cast<int32_t>(0x0),
		StartTag = static_cast<int32_t>(0x1),
		PI = static_cast<int32_t>(0x2),
		CDATA = static_cast<int32_t>(0x3),
		Comment = static_cast<int32_t>(0x4),
		Attributes = static_cast<int32_t>(0x5),
		AttributeValue = static_cast<int32_t>(0x6),
		ReadData = static_cast<int32_t>(0x7),
		EndElement = static_cast<int32_t>(0x8),
		End = static_cast<int32_t>(0x9),
		ReadValueChunk_OnCachedValue = static_cast<int32_t>(0xA),
		ReadValueChunk_OnPartialValue = static_cast<int32_t>(0xB),
		ReadContentAsBinary_OnCachedValue = static_cast<int32_t>(0xC),
		ReadContentAsBinary_OnPartialValue = static_cast<int32_t>(0xD),
		ReadContentAsBinary_End = static_cast<int32_t>(0xE),
	};
}

