#pragma once
namespace System_Xml::System::Xml::XPath
{
	enum struct XPathNamespaceScope : int32_t
	{
		All = static_cast<int32_t>(0x0),
		ExcludeXml = static_cast<int32_t>(0x1),
		Local = static_cast<int32_t>(0x2),
	};
}

