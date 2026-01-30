#pragma once
namespace Assembly_CSharp::Rewired::Demos
{
	enum struct ControlRemappingDemo1_ElementAssignmentChangeType : int32_t
	{
		Add = static_cast<int32_t>(0x0),
		Replace = static_cast<int32_t>(0x1),
		Remove = static_cast<int32_t>(0x2),
		ReassignOrRemove = static_cast<int32_t>(0x3),
		ConflictCheck = static_cast<int32_t>(0x4),
	};
}

