#pragma once
namespace System_Xml::System::Xml::Schema
{
	enum struct XmlSchemaValidity : int32_t
	{
		NotKnown = static_cast<int32_t>(0x0),
		Valid = static_cast<int32_t>(0x1),
		Invalid = static_cast<int32_t>(0x2),
	};
}

