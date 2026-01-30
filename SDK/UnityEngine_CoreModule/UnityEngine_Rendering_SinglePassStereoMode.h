#pragma once
namespace UnityEngine_CoreModule::UnityEngine::Rendering
{
	enum struct SinglePassStereoMode : int32_t
	{
		None = static_cast<int32_t>(0x0),
		SideBySide = static_cast<int32_t>(0x1),
		Instancing = static_cast<int32_t>(0x2),
		Multiview = static_cast<int32_t>(0x3),
	};
}

