#pragma once
namespace Unity_TextMeshPro::TMPro
{
	enum struct TMP_VertexDataUpdateFlags : int32_t
	{
		None = static_cast<int32_t>(0x0),
		Vertices = static_cast<int32_t>(0x1),
		Uv0 = static_cast<int32_t>(0x2),
		Uv2 = static_cast<int32_t>(0x4),
		Uv4 = static_cast<int32_t>(0x8),
		Colors32 = static_cast<int32_t>(0x10),
		All = static_cast<int32_t>(0xFF),
	};
}

