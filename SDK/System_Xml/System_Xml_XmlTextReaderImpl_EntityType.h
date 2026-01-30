#pragma once
namespace System_Xml::System::Xml
{
	enum struct XmlTextReaderImpl_EntityType : int32_t
	{
		CharacterDec = static_cast<int32_t>(0x0),
		CharacterHex = static_cast<int32_t>(0x1),
		CharacterNamed = static_cast<int32_t>(0x2),
		Expanded = static_cast<int32_t>(0x3),
		Skipped = static_cast<int32_t>(0x4),
		FakeExpanded = static_cast<int32_t>(0x5),
		Unexpanded = static_cast<int32_t>(0x6),
		ExpandedInAttribute = static_cast<int32_t>(0x7),
	};
}

