#pragma once
namespace mscorlib::System::Threading
{
	enum struct StackCrawlMark : int32_t
	{
		LookForMe = static_cast<int32_t>(0x0),
		LookForMyCaller = static_cast<int32_t>(0x1),
		LookForMyCallersCaller = static_cast<int32_t>(0x2),
		LookForThread = static_cast<int32_t>(0x3),
	};
}

