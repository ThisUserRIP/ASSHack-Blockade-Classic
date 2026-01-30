#pragma once
namespace System_Xml::System::Xml::Schema
{
	enum struct XmlSchemaDerivationMethod : int32_t
	{
		Empty = static_cast<int32_t>(0x0),
		Substitution = static_cast<int32_t>(0x1),
		Extension = static_cast<int32_t>(0x2),
		Restriction = static_cast<int32_t>(0x4),
		List = static_cast<int32_t>(0x8),
		Union = static_cast<int32_t>(0x10),
		All = static_cast<int32_t>(0xFF),
		None = static_cast<int32_t>(0x100),
	};
}

