#pragma once
namespace Assembly_CSharp::BestHTTP::Decompression::Zlib
{
	enum struct CompressionStrategy : int32_t
	{
		Default = static_cast<int32_t>(0x0),
		Filtered = static_cast<int32_t>(0x1),
		HuffmanOnly = static_cast<int32_t>(0x2),
	};
}

