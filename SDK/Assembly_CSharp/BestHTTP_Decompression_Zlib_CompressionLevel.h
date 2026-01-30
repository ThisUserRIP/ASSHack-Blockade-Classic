#pragma once
namespace Assembly_CSharp::BestHTTP::Decompression::Zlib
{
	enum struct CompressionLevel : int32_t
	{
		None = static_cast<int32_t>(0x0),
		Level0 = static_cast<int32_t>(0x0),
		BestSpeed = static_cast<int32_t>(0x1),
		Level1 = static_cast<int32_t>(0x1),
		Level2 = static_cast<int32_t>(0x2),
		Level3 = static_cast<int32_t>(0x3),
		Level4 = static_cast<int32_t>(0x4),
		Level5 = static_cast<int32_t>(0x5),
		Default = static_cast<int32_t>(0x6),
		Level6 = static_cast<int32_t>(0x6),
		Level7 = static_cast<int32_t>(0x7),
		Level8 = static_cast<int32_t>(0x8),
		BestCompression = static_cast<int32_t>(0x9),
		Level9 = static_cast<int32_t>(0x9),
	};
}

