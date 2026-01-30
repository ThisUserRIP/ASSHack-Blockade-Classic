#pragma once
namespace UnityEngine_XRModule::UnityEngine::XR
{
	enum struct InputFeatureType : uint32_t
	{
		Custom = static_cast<uint32_t>(0x0),
		Binary = static_cast<uint32_t>(0x1),
		DiscreteStates = static_cast<uint32_t>(0x2),
		Axis1D = static_cast<uint32_t>(0x3),
		Axis2D = static_cast<uint32_t>(0x4),
		Axis3D = static_cast<uint32_t>(0x5),
		Rotation = static_cast<uint32_t>(0x6),
		Hand = static_cast<uint32_t>(0x7),
		Bone = static_cast<uint32_t>(0x8),
		Eyes = static_cast<uint32_t>(0x9),
		kUnityXRInputFeatureTypeInvalid = static_cast<uint32_t>(0xFFFFFFFF),
	};
}

