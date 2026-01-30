#pragma once
namespace UnityEngine_CoreModule::UnityEngine
{
	enum struct PrimitiveType : int32_t
	{
		Sphere = static_cast<int32_t>(0x0),
		Capsule = static_cast<int32_t>(0x1),
		Cylinder = static_cast<int32_t>(0x2),
		Cube = static_cast<int32_t>(0x3),
		Plane = static_cast<int32_t>(0x4),
		Quad = static_cast<int32_t>(0x5),
	};
}

