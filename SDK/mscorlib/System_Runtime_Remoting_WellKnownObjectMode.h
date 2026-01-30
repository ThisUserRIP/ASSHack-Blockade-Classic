#pragma once
namespace mscorlib::System::Runtime::Remoting
{
	enum struct WellKnownObjectMode : int32_t
	{
		Singleton = static_cast<int32_t>(0x1),
		SingleCall = static_cast<int32_t>(0x2),
	};
}

