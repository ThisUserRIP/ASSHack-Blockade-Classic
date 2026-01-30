#pragma once
namespace System::System::Diagnostics
{
	enum struct ProcessWindowStyle : int32_t
	{
		Hidden = static_cast<int32_t>(0x1),
		Maximized = static_cast<int32_t>(0x3),
		Minimized = static_cast<int32_t>(0x2),
		Normal = static_cast<int32_t>(0x0),
	};
}

