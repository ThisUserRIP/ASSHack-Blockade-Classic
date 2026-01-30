#pragma once
namespace Rewired_Core::Rewired::Platforms
{
	enum struct ScriptingBackend : int32_t
	{
		Mono = static_cast<int32_t>(0x0),
		DotNet = static_cast<int32_t>(0x1),
		IL2CPP = static_cast<int32_t>(0x2),
	};
}

