#pragma once
namespace System_Xml::System::Xml
{
	enum struct AttributeProperties : uint32_t
	{
		DEFAULT = static_cast<uint32_t>(0x0),
		URI = static_cast<uint32_t>(0x1),
		BOOLEAN = static_cast<uint32_t>(0x2),
		NAME = static_cast<uint32_t>(0x4),
	};
}

