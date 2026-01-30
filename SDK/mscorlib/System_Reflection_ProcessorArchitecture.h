#pragma once
namespace mscorlib::System::Reflection
{
	enum struct ProcessorArchitecture : int32_t
	{
		None = static_cast<int32_t>(0x0),
		MSIL = static_cast<int32_t>(0x1),
		X86 = static_cast<int32_t>(0x2),
		IA64 = static_cast<int32_t>(0x3),
		Amd64 = static_cast<int32_t>(0x4),
		Arm = static_cast<int32_t>(0x5),
	};
}

