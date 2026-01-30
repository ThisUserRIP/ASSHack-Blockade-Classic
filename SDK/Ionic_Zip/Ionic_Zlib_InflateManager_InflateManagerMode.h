#pragma once
namespace Ionic_Zip::Ionic::Zlib
{
	enum struct InflateManager_InflateManagerMode : int32_t
	{
		METHOD = static_cast<int32_t>(0x0),
		FLAG = static_cast<int32_t>(0x1),
		DICT4 = static_cast<int32_t>(0x2),
		DICT3 = static_cast<int32_t>(0x3),
		DICT2 = static_cast<int32_t>(0x4),
		DICT1 = static_cast<int32_t>(0x5),
		DICT0 = static_cast<int32_t>(0x6),
		BLOCKS = static_cast<int32_t>(0x7),
		CHECK4 = static_cast<int32_t>(0x8),
		CHECK3 = static_cast<int32_t>(0x9),
		CHECK2 = static_cast<int32_t>(0xA),
		CHECK1 = static_cast<int32_t>(0xB),
		DONE = static_cast<int32_t>(0xC),
		BAD = static_cast<int32_t>(0xD),
	};
}

