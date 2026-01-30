#pragma once
namespace mscorlib::System::Threading
{
	enum struct EventResetMode : int32_t
	{
		AutoReset = static_cast<int32_t>(0x0),
		ManualReset = static_cast<int32_t>(0x1),
	};
}

