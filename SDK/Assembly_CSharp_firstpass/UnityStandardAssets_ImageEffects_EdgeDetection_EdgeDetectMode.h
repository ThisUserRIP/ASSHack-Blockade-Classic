#pragma once
namespace Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects
{
	enum struct EdgeDetection_EdgeDetectMode : int32_t
	{
		TriangleDepthNormals = static_cast<int32_t>(0x0),
		RobertsCrossDepthNormals = static_cast<int32_t>(0x1),
		SobelDepth = static_cast<int32_t>(0x2),
		SobelDepthThin = static_cast<int32_t>(0x3),
		TriangleLuminance = static_cast<int32_t>(0x4),
	};
}

