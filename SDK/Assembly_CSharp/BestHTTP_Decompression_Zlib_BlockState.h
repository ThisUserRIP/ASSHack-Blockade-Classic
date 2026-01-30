#pragma once
namespace Assembly_CSharp::BestHTTP::Decompression::Zlib
{
	enum struct BlockState : int32_t
	{
		NeedMore = static_cast<int32_t>(0x0),
		BlockDone = static_cast<int32_t>(0x1),
		FinishStarted = static_cast<int32_t>(0x2),
		FinishDone = static_cast<int32_t>(0x3),
	};
}

