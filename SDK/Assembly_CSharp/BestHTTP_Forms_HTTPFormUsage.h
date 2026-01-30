#pragma once
namespace Assembly_CSharp::BestHTTP::Forms
{
	enum struct HTTPFormUsage : int32_t
	{
		Automatic = static_cast<int32_t>(0x0),
		UrlEncoded = static_cast<int32_t>(0x1),
		Multipart = static_cast<int32_t>(0x2),
		RawJSon = static_cast<int32_t>(0x3),
	};
}

