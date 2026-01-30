#pragma once
namespace mscorlib::System::Threading
{
	enum struct SynchronizationContextProperties : int32_t
	{
		None = static_cast<int32_t>(0x0),
		RequireWaitNotification = static_cast<int32_t>(0x1),
	};
}

