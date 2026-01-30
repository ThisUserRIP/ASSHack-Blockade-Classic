#pragma once
namespace mscorlib::System::Runtime::Serialization::Formatters
{
	enum struct TypeFilterLevel : int32_t
	{
		Low = static_cast<int32_t>(0x2),
		Full = static_cast<int32_t>(0x3),
	};
}

