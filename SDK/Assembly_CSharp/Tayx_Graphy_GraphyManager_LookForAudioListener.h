#pragma once
namespace Assembly_CSharp::Tayx::Graphy
{
	enum struct GraphyManager_LookForAudioListener : int32_t
	{
		ALWAYS = static_cast<int32_t>(0x0),
		ON_SCENE_LOAD = static_cast<int32_t>(0x1),
		NEVER = static_cast<int32_t>(0x2),
	};
}

