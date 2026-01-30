#pragma once
namespace System_Xml::System::Xml::Schema
{
	enum struct ValidatorState : int32_t
	{
		None = static_cast<int32_t>(0x0),
		Start = static_cast<int32_t>(0x1),
		TopLevelAttribute = static_cast<int32_t>(0x2),
		TopLevelTextOrWS = static_cast<int32_t>(0x3),
		Element = static_cast<int32_t>(0x4),
		Attribute = static_cast<int32_t>(0x5),
		EndOfAttributes = static_cast<int32_t>(0x6),
		Text = static_cast<int32_t>(0x7),
		Whitespace = static_cast<int32_t>(0x8),
		EndElement = static_cast<int32_t>(0x9),
		SkipToEndElement = static_cast<int32_t>(0xA),
		Finish = static_cast<int32_t>(0xB),
	};
}

