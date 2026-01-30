#pragma once
namespace System_Xml::System::Xml::Schema
{
	enum struct XmlSchemaContentProcessing : int32_t
	{
		None = static_cast<int32_t>(0x0),
		Skip = static_cast<int32_t>(0x1),
		Lax = static_cast<int32_t>(0x2),
		Strict = static_cast<int32_t>(0x3),
	};
}

