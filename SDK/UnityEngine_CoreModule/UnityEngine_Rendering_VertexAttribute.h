#pragma once
namespace UnityEngine_CoreModule::UnityEngine::Rendering
{
	enum struct VertexAttribute : int32_t
	{
		Position = static_cast<int32_t>(0x0),
		Normal = static_cast<int32_t>(0x1),
		Tangent = static_cast<int32_t>(0x2),
		Color = static_cast<int32_t>(0x3),
		TexCoord0 = static_cast<int32_t>(0x4),
		TexCoord1 = static_cast<int32_t>(0x5),
		TexCoord2 = static_cast<int32_t>(0x6),
		TexCoord3 = static_cast<int32_t>(0x7),
		TexCoord4 = static_cast<int32_t>(0x8),
		TexCoord5 = static_cast<int32_t>(0x9),
		TexCoord6 = static_cast<int32_t>(0xA),
		TexCoord7 = static_cast<int32_t>(0xB),
		BlendWeight = static_cast<int32_t>(0xC),
		BlendIndices = static_cast<int32_t>(0xD),
	};
}

