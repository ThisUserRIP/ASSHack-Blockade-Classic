#pragma once
namespace mscorlib::System::Runtime::Serialization::Formatters::Binary
{
	enum struct BinaryTypeEnum : int32_t
	{
		Primitive = static_cast<int32_t>(0x0),
		String = static_cast<int32_t>(0x1),
		Object = static_cast<int32_t>(0x2),
		ObjectUrt = static_cast<int32_t>(0x3),
		ObjectUser = static_cast<int32_t>(0x4),
		ObjectArray = static_cast<int32_t>(0x5),
		StringArray = static_cast<int32_t>(0x6),
		PrimitiveArray = static_cast<int32_t>(0x7),
	};
}

