#pragma once
namespace System_Xml::System::Xml::Schema
{
	enum struct XmlSchemaWhiteSpace : int32_t
	{
		Preserve = static_cast<int32_t>(0x0),
		Replace = static_cast<int32_t>(0x1),
		Collapse = static_cast<int32_t>(0x2),
	};
}

