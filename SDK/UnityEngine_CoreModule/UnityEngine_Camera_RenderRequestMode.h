#pragma once
namespace UnityEngine_CoreModule::UnityEngine
{
	enum struct Camera_RenderRequestMode : int32_t
	{
		None = static_cast<int32_t>(0x0),
		ObjectId = static_cast<int32_t>(0x1),
		Depth = static_cast<int32_t>(0x2),
		VertexNormal = static_cast<int32_t>(0x3),
		WorldPosition = static_cast<int32_t>(0x4),
		EntityId = static_cast<int32_t>(0x5),
		BaseColor = static_cast<int32_t>(0x6),
		SpecularColor = static_cast<int32_t>(0x7),
		Metallic = static_cast<int32_t>(0x8),
		Emission = static_cast<int32_t>(0x9),
		Normal = static_cast<int32_t>(0xA),
		Smoothness = static_cast<int32_t>(0xB),
		Occlusion = static_cast<int32_t>(0xC),
		DiffuseColor = static_cast<int32_t>(0xD),
	};
}

