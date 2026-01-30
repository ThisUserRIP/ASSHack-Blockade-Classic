#pragma once
namespace mscorlib::Microsoft::Win32
{
	enum struct RegistryValueOptions : int32_t
	{
		None = static_cast<int32_t>(0x0),
		DoNotExpandEnvironmentNames = static_cast<int32_t>(0x1),
	};
}

