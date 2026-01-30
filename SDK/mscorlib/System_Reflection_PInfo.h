#pragma once
namespace mscorlib::System::Reflection
{
	enum struct PInfo : int32_t
	{
		Attributes = static_cast<int32_t>(0x1),
		GetMethod = static_cast<int32_t>(0x2),
		SetMethod = static_cast<int32_t>(0x4),
		ReflectedType = static_cast<int32_t>(0x8),
		DeclaringType = static_cast<int32_t>(0x10),
		Name = static_cast<int32_t>(0x20),
	};
}

