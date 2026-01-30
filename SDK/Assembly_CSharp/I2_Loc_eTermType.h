#pragma once
namespace Assembly_CSharp::I2::Loc
{
	enum struct eTermType : int32_t
	{
		Text = static_cast<int32_t>(0x0),
		Font = static_cast<int32_t>(0x1),
		Texture = static_cast<int32_t>(0x2),
		AudioClip = static_cast<int32_t>(0x3),
		GameObject = static_cast<int32_t>(0x4),
		Sprite = static_cast<int32_t>(0x5),
		Material = static_cast<int32_t>(0x6),
		Child = static_cast<int32_t>(0x7),
		Mesh = static_cast<int32_t>(0x8),
		TextMeshPFont = static_cast<int32_t>(0x9),
		Object = static_cast<int32_t>(0xA),
	};
}

