#pragma once
namespace Assembly_CSharp::BestHTTP::Decompression::Zlib
{
	enum struct InflateBlocks_InflateBlockMode : int32_t
	{
		TYPE = static_cast<int32_t>(0x0),
		LENS = static_cast<int32_t>(0x1),
		STORED = static_cast<int32_t>(0x2),
		TABLE = static_cast<int32_t>(0x3),
		BTREE = static_cast<int32_t>(0x4),
		DTREE = static_cast<int32_t>(0x5),
		CODES = static_cast<int32_t>(0x6),
		DRY = static_cast<int32_t>(0x7),
		DONE = static_cast<int32_t>(0x8),
		BAD = static_cast<int32_t>(0x9),
	};
}

