#pragma once
namespace mscorlib::System::Runtime::Serialization::Formatters::Binary
{
	enum struct InternalMemberValueE : int32_t
	{
		Empty = static_cast<int32_t>(0x0),
		InlineValue = static_cast<int32_t>(0x1),
		Nested = static_cast<int32_t>(0x2),
		Reference = static_cast<int32_t>(0x3),
		Null = static_cast<int32_t>(0x4),
	};
}

