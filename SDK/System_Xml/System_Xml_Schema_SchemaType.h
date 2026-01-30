#pragma once
namespace System_Xml::System::Xml::Schema
{
	enum struct SchemaType : int32_t
	{
		None = static_cast<int32_t>(0x0),
		DTD = static_cast<int32_t>(0x1),
		XDR = static_cast<int32_t>(0x2),
		XSD = static_cast<int32_t>(0x3),
	};
}

