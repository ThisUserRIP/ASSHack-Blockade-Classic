#pragma once
namespace Assembly_CSharp::Tayx::Graphy
{
	enum struct GraphyDebugger_ConditionEvaluation : int32_t
	{
		All_conditions_must_be_met = static_cast<int32_t>(0x0),
		Only_one_condition_has_to_be_met = static_cast<int32_t>(0x1),
	};
}

