#pragma once
namespace System_Xml::System::Xml
{
	enum struct NewLineHandling : int32_t
	{
		Replace = static_cast<int32_t>(0x0),
		Entitize = static_cast<int32_t>(0x1),
		None = static_cast<int32_t>(0x2),
	};
}

