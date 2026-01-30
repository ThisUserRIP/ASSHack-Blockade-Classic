#pragma once
namespace Assembly_CSharp::Tayx::Graphy
{
	enum struct GraphyManager_ModuleType : int32_t
	{
		FPS = static_cast<int32_t>(0x0),
		RAM = static_cast<int32_t>(0x1),
		AUDIO = static_cast<int32_t>(0x2),
		ADVANCED = static_cast<int32_t>(0x3),
	};
}

