#pragma once
namespace Assembly_CSharp::BestHTTP::PlatformSupport::FileSystem
{
	enum struct FileStreamModes : int32_t
	{
		Create = static_cast<int32_t>(0x0),
		Open = static_cast<int32_t>(0x1),
		Append = static_cast<int32_t>(0x2),
	};
}

