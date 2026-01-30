#pragma once
namespace System_Xml::System::Xml
{
	enum struct DtdProcessing : int32_t
	{
		Prohibit = static_cast<int32_t>(0x0),
		Ignore = static_cast<int32_t>(0x1),
		Parse = static_cast<int32_t>(0x2),
	};
}

