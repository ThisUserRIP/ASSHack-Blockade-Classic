#pragma once
namespace System_Xml::System::Xml::Schema
{
	enum struct AttributeMatchState : int32_t
	{
		AttributeFound = static_cast<int32_t>(0x0),
		AnyIdAttributeFound = static_cast<int32_t>(0x1),
		UndeclaredElementAndAttribute = static_cast<int32_t>(0x2),
		UndeclaredAttribute = static_cast<int32_t>(0x3),
		AnyAttributeLax = static_cast<int32_t>(0x4),
		AnyAttributeSkip = static_cast<int32_t>(0x5),
		ProhibitedAnyAttribute = static_cast<int32_t>(0x6),
		ProhibitedAttribute = static_cast<int32_t>(0x7),
		AttributeNameMismatch = static_cast<int32_t>(0x8),
		ValidateAttributeInvalidCall = static_cast<int32_t>(0x9),
	};
}

