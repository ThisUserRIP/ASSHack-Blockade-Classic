#pragma once
namespace System_Xml::System::Xml::Schema
{
	enum struct SchemaDeclBase_Use : int32_t
	{
		Default = static_cast<int32_t>(0x0),
		Required = static_cast<int32_t>(0x1),
		Implied = static_cast<int32_t>(0x2),
		Fixed = static_cast<int32_t>(0x3),
		RequiredFixed = static_cast<int32_t>(0x4),
	};
}

