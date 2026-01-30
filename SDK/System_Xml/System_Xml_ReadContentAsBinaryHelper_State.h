#pragma once
namespace System_Xml::System::Xml
{
	enum struct ReadContentAsBinaryHelper_State : int32_t
	{
		None = static_cast<int32_t>(0x0),
		InReadContent = static_cast<int32_t>(0x1),
		InReadElementContent = static_cast<int32_t>(0x2),
	};
}

