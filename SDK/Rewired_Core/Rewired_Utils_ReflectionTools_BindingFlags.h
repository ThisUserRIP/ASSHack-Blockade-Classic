#pragma once
namespace Rewired_Core::Rewired::Utils
{
	enum struct ReflectionTools_BindingFlags : int32_t
	{
		IgnoreCase = static_cast<int32_t>(0x1),
		DeclaredOnly = static_cast<int32_t>(0x2),
		Instance = static_cast<int32_t>(0x4),
		Static = static_cast<int32_t>(0x8),
		Public = static_cast<int32_t>(0x10),
		NonPublic = static_cast<int32_t>(0x20),
		FlattenHierarchy = static_cast<int32_t>(0x40),
	};
}

