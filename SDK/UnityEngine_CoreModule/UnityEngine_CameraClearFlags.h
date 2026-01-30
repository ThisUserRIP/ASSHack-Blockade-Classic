#pragma once
namespace UnityEngine_CoreModule::UnityEngine
{
	enum struct CameraClearFlags : int32_t
	{
		Skybox = static_cast<int32_t>(0x1),
		Color = static_cast<int32_t>(0x2),
		SolidColor = static_cast<int32_t>(0x2),
		Depth = static_cast<int32_t>(0x3),
		Nothing = static_cast<int32_t>(0x4),
	};
}

