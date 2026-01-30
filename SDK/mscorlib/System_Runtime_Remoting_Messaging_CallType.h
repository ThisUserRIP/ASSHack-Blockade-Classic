#pragma once
namespace mscorlib::System::Runtime::Remoting::Messaging
{
	enum struct CallType : int32_t
	{
		Sync = static_cast<int32_t>(0x0),
		BeginInvoke = static_cast<int32_t>(0x1),
		EndInvoke = static_cast<int32_t>(0x2),
		OneWay = static_cast<int32_t>(0x3),
	};
}

