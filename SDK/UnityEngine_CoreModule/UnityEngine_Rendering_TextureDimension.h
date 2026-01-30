#pragma once
namespace UnityEngine_CoreModule::UnityEngine::Rendering
{
	enum struct TextureDimension : int32_t
	{
		Unknown = static_cast<int32_t>(0xFFFFFFFF),
		None = static_cast<int32_t>(0x0),
		Any = static_cast<int32_t>(0x1),
		Tex2D = static_cast<int32_t>(0x2),
		Tex3D = static_cast<int32_t>(0x3),
		Cube = static_cast<int32_t>(0x4),
		Tex2DArray = static_cast<int32_t>(0x5),
		CubeArray = static_cast<int32_t>(0x6),
	};
}

