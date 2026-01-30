#pragma once
namespace UnityEngine_CoreModule::UnityEngine
{
	enum struct MeshTopology : int32_t
	{
		Triangles = static_cast<int32_t>(0x0),
		Quads = static_cast<int32_t>(0x2),
		Lines = static_cast<int32_t>(0x3),
		LineStrip = static_cast<int32_t>(0x4),
		Points = static_cast<int32_t>(0x5),
	};
}

