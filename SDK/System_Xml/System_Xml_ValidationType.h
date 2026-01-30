#pragma once
namespace System_Xml::System::Xml
{
	enum struct ValidationType : int32_t
	{
		None = static_cast<int32_t>(0x0),
		Auto = static_cast<int32_t>(0x1),
		DTD = static_cast<int32_t>(0x2),
		XDR = static_cast<int32_t>(0x3),
		Schema = static_cast<int32_t>(0x4),
	};
}

