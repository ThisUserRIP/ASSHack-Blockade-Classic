#pragma once
namespace mscorlib::System::Threading::Tasks
{
	enum struct CausalityRelation : int32_t
	{
		AssignDelegate = static_cast<int32_t>(0x0),
		Join = static_cast<int32_t>(0x1),
		Choice = static_cast<int32_t>(0x2),
		Cancel = static_cast<int32_t>(0x3),
		Error = static_cast<int32_t>(0x4),
	};
}

