#pragma once
namespace System_Xml::System::Xml
{
	enum struct ElementProperties : uint32_t
	{
		DEFAULT = static_cast<uint32_t>(0x0),
		URI_PARENT = static_cast<uint32_t>(0x1),
		BOOL_PARENT = static_cast<uint32_t>(0x2),
		NAME_PARENT = static_cast<uint32_t>(0x4),
		EMPTY = static_cast<uint32_t>(0x8),
		NO_ENTITIES = static_cast<uint32_t>(0x10),
		HEAD = static_cast<uint32_t>(0x20),
		BLOCK_WS = static_cast<uint32_t>(0x40),
		HAS_NS = static_cast<uint32_t>(0x80),
	};
}

