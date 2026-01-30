#pragma once
namespace UnityEngine_AIModule::UnityEngine::AI
{
	enum struct NavMeshPathStatus : int32_t
	{
		PathComplete = static_cast<int32_t>(0x0),
		PathPartial = static_cast<int32_t>(0x1),
		PathInvalid = static_cast<int32_t>(0x2),
	};
}

