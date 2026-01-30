#pragma once
namespace System::System::ComponentModel
{
	enum struct ToolboxItemFilterType : int32_t
	{
		Allow = static_cast<int32_t>(0x0),
		Custom = static_cast<int32_t>(0x1),
		Prevent = static_cast<int32_t>(0x2),
		Require = static_cast<int32_t>(0x3),
	};
}

