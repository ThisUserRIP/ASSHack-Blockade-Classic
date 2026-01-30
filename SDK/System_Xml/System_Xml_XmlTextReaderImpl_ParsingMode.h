#pragma once
namespace System_Xml::System::Xml
{
	enum struct XmlTextReaderImpl_ParsingMode : int32_t
	{
		Full = static_cast<int32_t>(0x0),
		SkipNode = static_cast<int32_t>(0x1),
		SkipContent = static_cast<int32_t>(0x2),
	};
}

