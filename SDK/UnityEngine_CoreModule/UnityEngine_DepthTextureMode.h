#pragma once
namespace UnityEngine_CoreModule::UnityEngine
{
	enum struct DepthTextureMode : int32_t
	{
		None = static_cast<int32_t>(0x0),
		Depth = static_cast<int32_t>(0x1),
		DepthNormals = static_cast<int32_t>(0x2),
		MotionVectors = static_cast<int32_t>(0x4),
	};
}

