#pragma once
namespace mscorlib::System::Runtime::Serialization
{
	enum struct StreamingContextStates : int32_t
	{
		CrossProcess = static_cast<int32_t>(0x1),
		CrossMachine = static_cast<int32_t>(0x2),
		File = static_cast<int32_t>(0x4),
		Persistence = static_cast<int32_t>(0x8),
		Remoting = static_cast<int32_t>(0x10),
		Other = static_cast<int32_t>(0x20),
		Clone = static_cast<int32_t>(0x40),
		CrossAppDomain = static_cast<int32_t>(0x80),
		All = static_cast<int32_t>(0xFF),
	};
}

