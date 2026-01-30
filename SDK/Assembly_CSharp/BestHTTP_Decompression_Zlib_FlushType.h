#pragma once
namespace Assembly_CSharp::BestHTTP::Decompression::Zlib
{
	enum struct FlushType : int32_t
	{
		None = static_cast<int32_t>(0x0),
		Partial = static_cast<int32_t>(0x1),
		Sync = static_cast<int32_t>(0x2),
		Full = static_cast<int32_t>(0x3),
		Finish = static_cast<int32_t>(0x4),
	};
}

