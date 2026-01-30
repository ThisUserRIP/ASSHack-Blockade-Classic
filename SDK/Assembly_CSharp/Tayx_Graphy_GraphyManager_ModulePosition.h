#pragma once
namespace Assembly_CSharp::Tayx::Graphy
{
	enum struct GraphyManager_ModulePosition : int32_t
	{
		TOP_RIGHT = static_cast<int32_t>(0x0),
		TOP_LEFT = static_cast<int32_t>(0x1),
		BOTTOM_RIGHT = static_cast<int32_t>(0x2),
		BOTTOM_LEFT = static_cast<int32_t>(0x3),
		FREE = static_cast<int32_t>(0x4),
	};
}

