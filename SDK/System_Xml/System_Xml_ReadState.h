#pragma once
namespace System_Xml::System::Xml
{
	enum struct ReadState : int32_t
	{
		Initial = static_cast<int32_t>(0x0),
		Interactive = static_cast<int32_t>(0x1),
		Error = static_cast<int32_t>(0x2),
		EndOfFile = static_cast<int32_t>(0x3),
		Closed = static_cast<int32_t>(0x4),
	};
}

