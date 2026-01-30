#pragma once
namespace mscorlib::System::Threading
{
	enum struct LazyThreadSafetyMode : int32_t
	{
		None = static_cast<int32_t>(0x0),
		PublicationOnly = static_cast<int32_t>(0x1),
		ExecutionAndPublication = static_cast<int32_t>(0x2),
	};
}

