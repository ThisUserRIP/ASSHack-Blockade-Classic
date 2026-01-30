#pragma once
namespace System_Xml::System::Xml::Schema
{
	enum struct XmlSchemaValidationFlags : int32_t
	{
		None = static_cast<int32_t>(0x0),
		ProcessInlineSchema = static_cast<int32_t>(0x1),
		ProcessSchemaLocation = static_cast<int32_t>(0x2),
		ReportValidationWarnings = static_cast<int32_t>(0x4),
		ProcessIdentityConstraints = static_cast<int32_t>(0x8),
		AllowXmlAttributes = static_cast<int32_t>(0x10),
	};
}

