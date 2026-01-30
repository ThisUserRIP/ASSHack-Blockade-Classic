#pragma once
namespace mscorlib::System::Threading::Tasks
{
	enum struct CausalityTraceLevel : int32_t
	{
		Required = static_cast<int32_t>(0x0),
		Important = static_cast<int32_t>(0x1),
		Verbose = static_cast<int32_t>(0x2),
	};
}

