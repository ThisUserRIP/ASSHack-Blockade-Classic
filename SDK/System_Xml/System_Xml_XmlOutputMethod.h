#pragma once
namespace System_Xml::System::Xml
{
	enum struct XmlOutputMethod : int32_t
	{
		Xml = static_cast<int32_t>(0x0),
		Html = static_cast<int32_t>(0x1),
		Text = static_cast<int32_t>(0x2),
		AutoDetect = static_cast<int32_t>(0x3),
	};
}

