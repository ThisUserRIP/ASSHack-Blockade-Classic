#pragma once
namespace Assembly_CSharp::Tayx::Graphy
{
	enum struct GraphyManager_ModuleState : int32_t
	{
		FULL = static_cast<int32_t>(0x0),
		TEXT = static_cast<int32_t>(0x1),
		BASIC = static_cast<int32_t>(0x2),
		BACKGROUND = static_cast<int32_t>(0x3),
		OFF = static_cast<int32_t>(0x4),
	};
}

