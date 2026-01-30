#pragma once
namespace mscorlib::System
{
	enum struct Environment_SpecialFolderOption : int32_t
	{
		None = static_cast<int32_t>(0x0),
		DoNotVerify = static_cast<int32_t>(0x4000),
		Create = static_cast<int32_t>(0x8000),
	};
}

