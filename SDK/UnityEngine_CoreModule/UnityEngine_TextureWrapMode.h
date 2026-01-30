#pragma once
namespace UnityEngine_CoreModule::UnityEngine
{
	enum struct TextureWrapMode : int32_t
	{
		Repeat = static_cast<int32_t>(0x0),
		Clamp = static_cast<int32_t>(0x1),
		Mirror = static_cast<int32_t>(0x2),
		MirrorOnce = static_cast<int32_t>(0x3),
	};
}

