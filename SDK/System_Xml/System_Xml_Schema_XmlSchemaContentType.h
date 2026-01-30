#pragma once
namespace System_Xml::System::Xml::Schema
{
	enum struct XmlSchemaContentType : int32_t
	{
		TextOnly = static_cast<int32_t>(0x0),
		Empty = static_cast<int32_t>(0x1),
		ElementOnly = static_cast<int32_t>(0x2),
		Mixed = static_cast<int32_t>(0x3),
	};
}

