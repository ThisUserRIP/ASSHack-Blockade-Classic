#pragma once
namespace Facebook_Unity::Facebook::Unity
{
	enum struct OGActionType : int32_t
	{
		SEND = static_cast<int32_t>(0x0),
		ASKFOR = static_cast<int32_t>(0x1),
		TURN = static_cast<int32_t>(0x2),
	};
}

