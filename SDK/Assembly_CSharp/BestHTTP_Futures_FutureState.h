#pragma once
namespace Assembly_CSharp::BestHTTP::Futures
{
	enum struct FutureState : int32_t
	{
		Pending = static_cast<int32_t>(0x0),
		Processing = static_cast<int32_t>(0x1),
		Success = static_cast<int32_t>(0x2),
		Error = static_cast<int32_t>(0x3),
	};
}

