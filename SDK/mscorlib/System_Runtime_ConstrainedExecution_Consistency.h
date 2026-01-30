#pragma once
namespace mscorlib::System::Runtime::ConstrainedExecution
{
	enum struct Consistency : int32_t
	{
		MayCorruptProcess = static_cast<int32_t>(0x0),
		MayCorruptAppDomain = static_cast<int32_t>(0x1),
		MayCorruptInstance = static_cast<int32_t>(0x2),
		WillNotCorruptState = static_cast<int32_t>(0x3),
	};
}

