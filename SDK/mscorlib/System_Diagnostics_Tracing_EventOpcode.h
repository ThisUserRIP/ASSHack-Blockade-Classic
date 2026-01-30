#pragma once
namespace mscorlib::System::Diagnostics::Tracing
{
	enum struct EventOpcode : int32_t
	{
		Info = static_cast<int32_t>(0x0),
		Start = static_cast<int32_t>(0x1),
		Stop = static_cast<int32_t>(0x2),
		DataCollectionStart = static_cast<int32_t>(0x3),
		DataCollectionStop = static_cast<int32_t>(0x4),
		Extension = static_cast<int32_t>(0x5),
		Reply = static_cast<int32_t>(0x6),
		Resume = static_cast<int32_t>(0x7),
		Suspend = static_cast<int32_t>(0x8),
		Send = static_cast<int32_t>(0x9),
		Receive = static_cast<int32_t>(0xF0),
	};
}

