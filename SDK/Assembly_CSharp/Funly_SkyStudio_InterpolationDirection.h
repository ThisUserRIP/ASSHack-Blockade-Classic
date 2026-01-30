#pragma once
namespace Assembly_CSharp::Funly::SkyStudio
{
	enum struct InterpolationDirection : int32_t
	{
		Auto = static_cast<int32_t>(0x0),
		Foward = static_cast<int32_t>(0x1),
		Reverse = static_cast<int32_t>(0x2),
		ShortestPath = static_cast<int32_t>(0x3),
	};
}

