#pragma once
namespace System::System::Diagnostics
{
	enum struct Process_StreamReadMode : int32_t
	{
		undefined = static_cast<int32_t>(0x0),
		syncMode = static_cast<int32_t>(0x1),
		asyncMode = static_cast<int32_t>(0x2),
	};
}

