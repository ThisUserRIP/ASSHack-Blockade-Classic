#pragma once
namespace mscorlib::System
{
	enum struct TypeNameKind : int32_t
	{
		Name = static_cast<int32_t>(0x0),
		ToString = static_cast<int32_t>(0x1),
		SerializationName = static_cast<int32_t>(0x2),
		FullName = static_cast<int32_t>(0x3),
	};
}

