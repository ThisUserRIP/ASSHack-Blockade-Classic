#pragma once
namespace Facebook_Unity::Facebook::Unity
{
	enum struct HttpMethod : int32_t
	{
		GET = static_cast<int32_t>(0x0),
		POST = static_cast<int32_t>(0x1),
		DELETE = static_cast<int32_t>(0x2),
	};
}

