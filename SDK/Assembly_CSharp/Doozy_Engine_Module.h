#pragma once
namespace Assembly_CSharp::Doozy::Engine
{
	enum struct Module : int32_t
	{
		Unknown = static_cast<int32_t>(0x0),
		Nody = static_cast<int32_t>(0x1),
		Touchy = static_cast<int32_t>(0x2),
		Soundy = static_cast<int32_t>(0x3),
		UI = static_cast<int32_t>(0x4),
	};
}

