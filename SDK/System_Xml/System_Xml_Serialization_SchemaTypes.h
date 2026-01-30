#pragma once
namespace System_Xml::System::Xml::Serialization
{
	enum struct SchemaTypes : int32_t
	{
		NotSet = static_cast<int32_t>(0x0),
		Primitive = static_cast<int32_t>(0x1),
		Enum = static_cast<int32_t>(0x2),
		Array = static_cast<int32_t>(0x3),
		Class = static_cast<int32_t>(0x4),
		XmlSerializable = static_cast<int32_t>(0x5),
		XmlNode = static_cast<int32_t>(0x6),
		Void = static_cast<int32_t>(0x7),
	};
}

