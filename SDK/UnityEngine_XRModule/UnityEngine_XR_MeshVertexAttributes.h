#pragma once
namespace UnityEngine_XRModule::UnityEngine::XR
{
	enum struct MeshVertexAttributes : int32_t
	{
		None = static_cast<int32_t>(0x0),
		Normals = static_cast<int32_t>(0x1),
		Tangents = static_cast<int32_t>(0x2),
		UVs = static_cast<int32_t>(0x4),
		Colors = static_cast<int32_t>(0x8),
	};
}

