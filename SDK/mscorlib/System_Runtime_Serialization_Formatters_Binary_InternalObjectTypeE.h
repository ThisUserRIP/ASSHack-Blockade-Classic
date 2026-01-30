#pragma once
namespace mscorlib::System::Runtime::Serialization::Formatters::Binary
{
	enum struct InternalObjectTypeE : int32_t
	{
		Empty = static_cast<int32_t>(0x0),
		Object = static_cast<int32_t>(0x1),
		Array = static_cast<int32_t>(0x2),
	};
}

