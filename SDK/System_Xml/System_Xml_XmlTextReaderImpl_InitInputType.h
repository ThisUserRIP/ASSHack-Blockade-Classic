#pragma once
namespace System_Xml::System::Xml
{
	enum struct XmlTextReaderImpl_InitInputType : int32_t
	{
		UriString = static_cast<int32_t>(0x0),
		Stream = static_cast<int32_t>(0x1),
		TextReader = static_cast<int32_t>(0x2),
		Invalid = static_cast<int32_t>(0x3),
	};
}

