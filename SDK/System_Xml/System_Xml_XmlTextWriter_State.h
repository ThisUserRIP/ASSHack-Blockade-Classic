#pragma once
namespace System_Xml::System::Xml
{
	enum struct XmlTextWriter_State : int32_t
	{
		Start = static_cast<int32_t>(0x0),
		Prolog = static_cast<int32_t>(0x1),
		PostDTD = static_cast<int32_t>(0x2),
		Element = static_cast<int32_t>(0x3),
		Attribute = static_cast<int32_t>(0x4),
		Content = static_cast<int32_t>(0x5),
		AttrOnly = static_cast<int32_t>(0x6),
		Epilog = static_cast<int32_t>(0x7),
		Error = static_cast<int32_t>(0x8),
		Closed = static_cast<int32_t>(0x9),
	};
}

