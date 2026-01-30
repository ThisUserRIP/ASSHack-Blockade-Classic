#pragma once
namespace System_Xml::System::Xml
{
	enum struct XmlTextReaderImpl_EntityExpandType : int32_t
	{
		All = static_cast<int32_t>(0x0),
		OnlyGeneral = static_cast<int32_t>(0x1),
		OnlyCharacter = static_cast<int32_t>(0x2),
	};
}

