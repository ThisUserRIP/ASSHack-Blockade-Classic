#pragma once
namespace mscorlib::System::Runtime::InteropServices
{
	enum struct DllImportSearchPath : int32_t
	{
		UseDllDirectoryForDependencies = static_cast<int32_t>(0x100),
		ApplicationDirectory = static_cast<int32_t>(0x200),
		UserDirectories = static_cast<int32_t>(0x400),
		System32 = static_cast<int32_t>(0x800),
		SafeDirectories = static_cast<int32_t>(0x1000),
		AssemblyDirectory = static_cast<int32_t>(0x2),
		LegacyBehavior = static_cast<int32_t>(0x0),
	};
}

