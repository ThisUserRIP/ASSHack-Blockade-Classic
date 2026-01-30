#pragma once
namespace UnityEngine_VRModule::UnityEngine::XR
{
	enum struct XRSettings_StereoRenderingMode : int32_t
	{
		MultiPass = static_cast<int32_t>(0x0),
		SinglePass = static_cast<int32_t>(0x1),
		SinglePassInstanced = static_cast<int32_t>(0x2),
		SinglePassMultiview = static_cast<int32_t>(0x3),
	};
}

