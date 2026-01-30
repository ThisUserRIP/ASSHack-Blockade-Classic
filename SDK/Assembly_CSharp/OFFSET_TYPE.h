#pragma once
namespace Assembly_CSharp
{
	enum struct OFFSET_TYPE : int32_t
	{
		FROM_CENTER = static_cast<int32_t>(0x0),
		IS_CENTER = static_cast<int32_t>(0x1),
		SCREEN_OFFSET = static_cast<int32_t>(0x2),
		FROM_POINT = static_cast<int32_t>(0x3),
	};
}

