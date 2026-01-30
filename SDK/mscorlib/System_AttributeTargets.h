#pragma once
namespace mscorlib::System
{
	enum struct AttributeTargets : int32_t
	{
		Assembly = static_cast<int32_t>(0x1),
		Module = static_cast<int32_t>(0x2),
		Class = static_cast<int32_t>(0x4),
		Struct = static_cast<int32_t>(0x8),
		Enum = static_cast<int32_t>(0x10),
		Constructor = static_cast<int32_t>(0x20),
		Method = static_cast<int32_t>(0x40),
		Property = static_cast<int32_t>(0x80),
		Field = static_cast<int32_t>(0x100),
		Event = static_cast<int32_t>(0x200),
		Interface = static_cast<int32_t>(0x400),
		Parameter = static_cast<int32_t>(0x800),
		Delegate = static_cast<int32_t>(0x1000),
		ReturnValue = static_cast<int32_t>(0x2000),
		GenericParameter = static_cast<int32_t>(0x4000),
		All = static_cast<int32_t>(0x7FFF),
	};
}

