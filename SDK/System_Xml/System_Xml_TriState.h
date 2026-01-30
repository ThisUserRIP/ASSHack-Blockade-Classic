#pragma once
namespace System_Xml::System::Xml
{
	enum struct TriState : int32_t
	{
		Unknown = static_cast<int32_t>(0xFFFFFFFF),
		False = static_cast<int32_t>(0x0),
		True = static_cast<int32_t>(0x1),
	};
}

