#pragma once
namespace Assembly_CSharp::Funly::SkyStudio
{
	enum struct BaseSpriteItemData_SpriteState : int32_t
	{
		Unknown = static_cast<int32_t>(0x0),
		NotStarted = static_cast<int32_t>(0x1),
		Animating = static_cast<int32_t>(0x2),
		Complete = static_cast<int32_t>(0x3),
	};
}

