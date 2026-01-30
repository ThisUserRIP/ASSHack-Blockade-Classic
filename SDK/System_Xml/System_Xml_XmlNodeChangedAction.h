#pragma once
namespace System_Xml::System::Xml
{
	enum struct XmlNodeChangedAction : int32_t
	{
		Insert = static_cast<int32_t>(0x0),
		Remove = static_cast<int32_t>(0x1),
		Change = static_cast<int32_t>(0x2),
	};
}

