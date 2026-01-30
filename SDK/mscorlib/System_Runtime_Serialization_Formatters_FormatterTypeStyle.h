#pragma once
namespace mscorlib::System::Runtime::Serialization::Formatters
{
	enum struct FormatterTypeStyle : int32_t
	{
		TypesWhenNeeded = static_cast<int32_t>(0x0),
		TypesAlways = static_cast<int32_t>(0x1),
		XsdString = static_cast<int32_t>(0x2),
	};
}

