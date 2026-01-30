#pragma once
namespace mscorlib::System::Resources
{
	enum struct UltimateResourceFallbackLocation : int32_t
	{
		MainAssembly = static_cast<int32_t>(0x0),
		Satellite = static_cast<int32_t>(0x1),
	};
}

