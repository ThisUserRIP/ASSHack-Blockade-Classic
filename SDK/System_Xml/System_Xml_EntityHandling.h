#pragma once
namespace System_Xml::System::Xml
{
	enum struct EntityHandling : int32_t
	{
		ExpandEntities = static_cast<int32_t>(0x1),
		ExpandCharEntities = static_cast<int32_t>(0x2),
	};
}

