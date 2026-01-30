#pragma once
namespace UnityEngine_CoreModule::UnityEngine
{
	enum struct CameraType : int32_t
	{
		Game = static_cast<int32_t>(0x1),
		SceneView = static_cast<int32_t>(0x2),
		Preview = static_cast<int32_t>(0x4),
		VR = static_cast<int32_t>(0x8),
		Reflection = static_cast<int32_t>(0x10),
	};
}

