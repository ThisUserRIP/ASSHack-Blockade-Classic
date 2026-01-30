#pragma once
namespace UnityEngine_CoreModule::UnityEngine::SceneManagement
{
	enum struct LocalPhysicsMode : int32_t
	{
		None = static_cast<int32_t>(0x0),
		Physics2D = static_cast<int32_t>(0x1),
		Physics3D = static_cast<int32_t>(0x2),
	};
}

