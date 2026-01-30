#pragma once
namespace Facepunch_Steamworks::Facepunch::Steamworks
{
	enum struct Architecture : int32_t
	{
		Unset = static_cast<int32_t>(0x0),
		x86 = static_cast<int32_t>(0x1),
		x64 = static_cast<int32_t>(0x2),
	};
}

