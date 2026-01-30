#pragma once
namespace System_Xml::System::Xml::Schema
{
	enum struct XmlSchemaParticle_Occurs : int32_t
	{
		None = static_cast<int32_t>(0x0),
		Min = static_cast<int32_t>(0x1),
		Max = static_cast<int32_t>(0x2),
	};
}

