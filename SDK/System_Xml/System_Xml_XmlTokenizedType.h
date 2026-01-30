#pragma once
namespace System_Xml::System::Xml
{
	enum struct XmlTokenizedType : int32_t
	{
		CDATA = static_cast<int32_t>(0x0),
		ID = static_cast<int32_t>(0x1),
		IDREF = static_cast<int32_t>(0x2),
		IDREFS = static_cast<int32_t>(0x3),
		ENTITY = static_cast<int32_t>(0x4),
		ENTITIES = static_cast<int32_t>(0x5),
		NMTOKEN = static_cast<int32_t>(0x6),
		NMTOKENS = static_cast<int32_t>(0x7),
		NOTATION = static_cast<int32_t>(0x8),
		ENUMERATION = static_cast<int32_t>(0x9),
		QName = static_cast<int32_t>(0xA),
		NCName = static_cast<int32_t>(0xB),
		None = static_cast<int32_t>(0xC),
	};
}

