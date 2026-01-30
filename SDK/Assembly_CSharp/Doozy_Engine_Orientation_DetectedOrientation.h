#pragma once
namespace Assembly_CSharp::Doozy::Engine::Orientation
{
	enum struct DetectedOrientation : int32_t
	{
		Unknown = static_cast<int32_t>(0x0),
		Portrait = static_cast<int32_t>(0x1),
		Landscape = static_cast<int32_t>(0x2),
	};
}

