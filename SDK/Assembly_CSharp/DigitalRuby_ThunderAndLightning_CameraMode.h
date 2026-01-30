#pragma once
namespace Assembly_CSharp::DigitalRuby::ThunderAndLightning
{
	enum struct CameraMode : int32_t
	{
		Auto = static_cast<int32_t>(0x0),
		Perspective = static_cast<int32_t>(0x1),
		OrthographicXY = static_cast<int32_t>(0x2),
		OrthographicXZ = static_cast<int32_t>(0x3),
		Unknown = static_cast<int32_t>(0x4),
	};
}

