#pragma once
namespace mscorlib::System::Reflection
{
	enum struct AssemblyNameFlags : int32_t
	{
		None = static_cast<int32_t>(0x0),
		PublicKey = static_cast<int32_t>(0x1),
		EnableJITcompileOptimizer = static_cast<int32_t>(0x4000),
		EnableJITcompileTracking = static_cast<int32_t>(0x8000),
		Retargetable = static_cast<int32_t>(0x100),
	};
}

