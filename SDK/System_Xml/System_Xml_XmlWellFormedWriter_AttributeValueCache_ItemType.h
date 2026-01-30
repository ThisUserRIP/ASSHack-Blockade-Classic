#pragma once
namespace System_Xml::System::Xml
{
	enum struct XmlWellFormedWriter_AttributeValueCache_ItemType : int32_t
	{
		EntityRef = static_cast<int32_t>(0x0),
		CharEntity = static_cast<int32_t>(0x1),
		SurrogateCharEntity = static_cast<int32_t>(0x2),
		Whitespace = static_cast<int32_t>(0x3),
		String = static_cast<int32_t>(0x4),
		StringChars = static_cast<int32_t>(0x5),
		Raw = static_cast<int32_t>(0x6),
		RawChars = static_cast<int32_t>(0x7),
		ValueString = static_cast<int32_t>(0x8),
	};
}

