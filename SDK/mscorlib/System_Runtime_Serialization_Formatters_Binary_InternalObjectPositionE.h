#pragma once
namespace mscorlib::System::Runtime::Serialization::Formatters::Binary
{
	enum struct InternalObjectPositionE : int32_t
	{
		Empty = static_cast<int32_t>(0x0),
		Top = static_cast<int32_t>(0x1),
		Child = static_cast<int32_t>(0x2),
		Headers = static_cast<int32_t>(0x3),
	};
}

