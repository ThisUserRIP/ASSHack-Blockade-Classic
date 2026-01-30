#pragma once
namespace UnityEngine_UIModule::UnityEngine
{
	enum struct AdditionalCanvasShaderChannels : int32_t
	{
		None = static_cast<int32_t>(0x0),
		TexCoord1 = static_cast<int32_t>(0x1),
		TexCoord2 = static_cast<int32_t>(0x2),
		TexCoord3 = static_cast<int32_t>(0x4),
		Normal = static_cast<int32_t>(0x8),
		Tangent = static_cast<int32_t>(0x10),
	};
}

