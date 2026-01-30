#pragma once
namespace System::System::Diagnostics
{
	enum struct Process_State : int32_t
	{
		HaveId = static_cast<int32_t>(0x1),
		IsLocal = static_cast<int32_t>(0x2),
		IsNt = static_cast<int32_t>(0x4),
		HaveProcessInfo = static_cast<int32_t>(0x8),
		Exited = static_cast<int32_t>(0x10),
		Associated = static_cast<int32_t>(0x20),
		IsWin2k = static_cast<int32_t>(0x40),
		HaveNtProcessInfo = static_cast<int32_t>(0xC),
	};
}

