#pragma once
namespace System_Xml::System::Xml
{
	enum struct WhitespaceHandling : int32_t
	{
		All = static_cast<int32_t>(0x0),
		Significant = static_cast<int32_t>(0x1),
		None = static_cast<int32_t>(0x2),
	};
}

