#pragma once
namespace mscorlib::System::Runtime::Serialization::Formatters::Binary
{
	enum struct InternalMemberTypeE : int32_t
	{
		Empty = static_cast<int32_t>(0x0),
		Header = static_cast<int32_t>(0x1),
		Field = static_cast<int32_t>(0x2),
		Item = static_cast<int32_t>(0x3),
	};
}

