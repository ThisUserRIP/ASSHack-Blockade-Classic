#pragma once
namespace System_Xml::System::Xml
{
	enum struct XmlWellFormedWriter_SpecialAttribute : int32_t
	{
		No = static_cast<int32_t>(0x0),
		DefaultXmlns = static_cast<int32_t>(0x1),
		PrefixedXmlns = static_cast<int32_t>(0x2),
		XmlSpace = static_cast<int32_t>(0x3),
		XmlLang = static_cast<int32_t>(0x4),
	};
}

