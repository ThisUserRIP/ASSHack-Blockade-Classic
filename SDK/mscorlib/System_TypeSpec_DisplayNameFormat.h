#pragma once
namespace mscorlib::System
{
	enum struct TypeSpec_DisplayNameFormat : int32_t
	{
		Default = static_cast<int32_t>(0x0),
		WANT_ASSEMBLY = static_cast<int32_t>(0x1),
		NO_MODIFIERS = static_cast<int32_t>(0x2),
	};
}

