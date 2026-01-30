#pragma once
namespace mscorlib::System::Runtime::Serialization::Formatters::Binary
{
	enum struct ValueFixupEnum : int32_t
	{
		Empty = static_cast<int32_t>(0x0),
		Array = static_cast<int32_t>(0x1),
		Header = static_cast<int32_t>(0x2),
		Member = static_cast<int32_t>(0x3),
	};
}

