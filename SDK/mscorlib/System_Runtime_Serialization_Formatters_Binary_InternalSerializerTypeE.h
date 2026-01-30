#pragma once
namespace mscorlib::System::Runtime::Serialization::Formatters::Binary
{
	enum struct InternalSerializerTypeE : int32_t
	{
		Soap = static_cast<int32_t>(0x1),
		Binary = static_cast<int32_t>(0x2),
	};
}

