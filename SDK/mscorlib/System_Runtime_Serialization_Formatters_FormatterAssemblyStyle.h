#pragma once
namespace mscorlib::System::Runtime::Serialization::Formatters
{
	enum struct FormatterAssemblyStyle : int32_t
	{
		Simple = static_cast<int32_t>(0x0),
		Full = static_cast<int32_t>(0x1),
	};
}

