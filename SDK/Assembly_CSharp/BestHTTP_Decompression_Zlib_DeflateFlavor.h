#pragma once
namespace Assembly_CSharp::BestHTTP::Decompression::Zlib
{
	enum struct DeflateFlavor : int32_t
	{
		Store = static_cast<int32_t>(0x0),
		Fast = static_cast<int32_t>(0x1),
		Slow = static_cast<int32_t>(0x2),
	};
}

