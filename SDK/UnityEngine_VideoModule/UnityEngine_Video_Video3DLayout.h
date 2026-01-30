#pragma once
namespace UnityEngine_VideoModule::UnityEngine::Video
{
	enum struct Video3DLayout : int32_t
	{
		No3D = static_cast<int32_t>(0x0),
		SideBySide3D = static_cast<int32_t>(0x1),
		OverUnder3D = static_cast<int32_t>(0x2),
	};
}

