#pragma once
namespace System::System::Net
{
	enum struct ReadState : int32_t
	{
		None = static_cast<int32_t>(0x0),
		Status = static_cast<int32_t>(0x1),
		Headers = static_cast<int32_t>(0x2),
		Content = static_cast<int32_t>(0x3),
		Aborted = static_cast<int32_t>(0x4),
	};
}

