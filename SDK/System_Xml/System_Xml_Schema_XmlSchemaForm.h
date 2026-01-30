#pragma once
namespace System_Xml::System::Xml::Schema
{
	enum struct XmlSchemaForm : int32_t
	{
		None = static_cast<int32_t>(0x0),
		Qualified = static_cast<int32_t>(0x1),
		Unqualified = static_cast<int32_t>(0x2),
	};
}

