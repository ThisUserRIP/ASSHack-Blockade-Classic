#pragma once
namespace System::System::ComponentModel
{
	enum struct RefreshProperties : int32_t
	{
		None = static_cast<int32_t>(0x0),
		All = static_cast<int32_t>(0x1),
		Repaint = static_cast<int32_t>(0x2),
	};
}

