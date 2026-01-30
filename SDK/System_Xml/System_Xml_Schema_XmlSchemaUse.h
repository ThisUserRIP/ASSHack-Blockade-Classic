#pragma once
namespace System_Xml::System::Xml::Schema
{
	enum struct XmlSchemaUse : int32_t
	{
		None = static_cast<int32_t>(0x0),
		Optional = static_cast<int32_t>(0x1),
		Prohibited = static_cast<int32_t>(0x2),
		Required = static_cast<int32_t>(0x3),
	};
}

