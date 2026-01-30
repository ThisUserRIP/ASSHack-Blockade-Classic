#pragma once
namespace System::System::Diagnostics
{
	enum struct ProcessPriorityClass : int32_t
	{
		AboveNormal = static_cast<int32_t>(0x8000),
		BelowNormal = static_cast<int32_t>(0x4000),
		High = static_cast<int32_t>(0x80),
		Idle = static_cast<int32_t>(0x40),
		Normal = static_cast<int32_t>(0x20),
		RealTime = static_cast<int32_t>(0x100),
	};
}

