#pragma once
namespace Assembly_CSharp::BestHTTP::Decompression::Zlib
{
	enum struct ZlibStreamFlavor : int32_t
	{
		ZLIB = static_cast<int32_t>(0x79E),
		DEFLATE = static_cast<int32_t>(0x79F),
		GZIP = static_cast<int32_t>(0x7A0),
	};
}

