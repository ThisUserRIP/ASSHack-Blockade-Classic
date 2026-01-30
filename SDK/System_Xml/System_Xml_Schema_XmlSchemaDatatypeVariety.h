#pragma once
namespace System_Xml::System::Xml::Schema
{
	enum struct XmlSchemaDatatypeVariety : int32_t
	{
		Atomic = static_cast<int32_t>(0x0),
		List = static_cast<int32_t>(0x1),
		Union = static_cast<int32_t>(0x2),
	};
}

