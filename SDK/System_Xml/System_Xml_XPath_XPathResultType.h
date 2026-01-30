#pragma once
namespace System_Xml::System::Xml::XPath
{
	enum struct XPathResultType : int32_t
	{
		Number = static_cast<int32_t>(0x0),
		String = static_cast<int32_t>(0x1),
		Boolean = static_cast<int32_t>(0x2),
		NodeSet = static_cast<int32_t>(0x3),
		Navigator = static_cast<int32_t>(0x1),
		Any = static_cast<int32_t>(0x5),
		Error = static_cast<int32_t>(0x6),
	};
}

