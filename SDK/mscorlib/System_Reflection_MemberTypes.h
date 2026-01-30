#pragma once
namespace mscorlib::System::Reflection
{
	enum struct MemberTypes : int32_t
	{
		Constructor = static_cast<int32_t>(0x1),
		Event = static_cast<int32_t>(0x2),
		Field = static_cast<int32_t>(0x4),
		Method = static_cast<int32_t>(0x8),
		Property = static_cast<int32_t>(0x10),
		TypeInfo = static_cast<int32_t>(0x20),
		Custom = static_cast<int32_t>(0x40),
		NestedType = static_cast<int32_t>(0x80),
		All = static_cast<int32_t>(0xBF),
	};
}

