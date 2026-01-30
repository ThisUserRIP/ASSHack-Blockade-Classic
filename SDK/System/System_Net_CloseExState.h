#pragma once
namespace System::System::Net
{
	enum struct CloseExState : int32_t
	{
		Normal = static_cast<int32_t>(0x0),
		Abort = static_cast<int32_t>(0x1),
		Silent = static_cast<int32_t>(0x2),
	};
}

