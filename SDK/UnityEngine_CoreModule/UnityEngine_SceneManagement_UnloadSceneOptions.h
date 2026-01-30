#pragma once
namespace UnityEngine_CoreModule::UnityEngine::SceneManagement
{
	enum struct UnloadSceneOptions : int32_t
	{
		None = static_cast<int32_t>(0x0),
		UnloadAllEmbeddedSceneObjects = static_cast<int32_t>(0x1),
	};
}

