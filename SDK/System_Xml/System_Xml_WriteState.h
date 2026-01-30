#pragma once
namespace System_Xml::System::Xml
{
	enum struct WriteState : int32_t
	{
		Start = static_cast<int32_t>(0x0),
		Prolog = static_cast<int32_t>(0x1),
		Element = static_cast<int32_t>(0x2),
		Attribute = static_cast<int32_t>(0x3),
		Content = static_cast<int32_t>(0x4),
		Closed = static_cast<int32_t>(0x5),
		Error = static_cast<int32_t>(0x6),
	};
}

