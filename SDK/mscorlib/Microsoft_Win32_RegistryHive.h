#pragma once
namespace mscorlib::Microsoft::Win32
{
	enum struct RegistryHive : int32_t
	{
		ClassesRoot = static_cast<int32_t>(0x80000000),
		CurrentConfig = static_cast<int32_t>(0x80000005),
		CurrentUser = static_cast<int32_t>(0x80000001),
		DynData = static_cast<int32_t>(0x80000006),
		LocalMachine = static_cast<int32_t>(0x80000002),
		PerformanceData = static_cast<int32_t>(0x80000004),
		Users = static_cast<int32_t>(0x80000003),
	};
}

