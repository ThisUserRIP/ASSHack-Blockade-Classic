#pragma once
namespace Assembly_CSharp::Funly::SkyStudio
{
	enum struct ProfileGroupDefinition_GroupType : int32_t
	{
		None = static_cast<int32_t>(0x0),
		Color = static_cast<int32_t>(0x1),
		Number = static_cast<int32_t>(0x2),
		Texture = static_cast<int32_t>(0x3),
		SpherePoint = static_cast<int32_t>(0x4),
		Boolean = static_cast<int32_t>(0x5),
	};
}

