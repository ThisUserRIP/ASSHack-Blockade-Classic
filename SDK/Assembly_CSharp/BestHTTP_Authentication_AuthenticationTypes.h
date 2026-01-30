#pragma once
namespace Assembly_CSharp::BestHTTP::Authentication
{
	enum struct AuthenticationTypes : int32_t
	{
		Unknown = static_cast<int32_t>(0x0),
		Basic = static_cast<int32_t>(0x1),
		Digest = static_cast<int32_t>(0x2),
	};
}

