#pragma once
namespace Assembly_CSharp::I2::Loc
{
	enum struct eLanguageDataFlags : int32_t
	{
		DISABLED = static_cast<int32_t>(0x1),
		KEEP_LOADED = static_cast<int32_t>(0x2),
		NOT_LOADED = static_cast<int32_t>(0x4),
	};
}

