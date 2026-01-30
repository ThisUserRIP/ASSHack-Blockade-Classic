#pragma once
namespace System_Xml::System::Xml
{
	enum struct XmlWellFormedWriter_NamespaceKind : int32_t
	{
		Written = static_cast<int32_t>(0x0),
		NeedToWrite = static_cast<int32_t>(0x1),
		Implied = static_cast<int32_t>(0x2),
		Special = static_cast<int32_t>(0x3),
	};
}

