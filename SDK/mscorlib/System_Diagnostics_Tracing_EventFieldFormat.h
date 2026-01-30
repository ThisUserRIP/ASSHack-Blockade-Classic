#pragma once
namespace mscorlib::System::Diagnostics::Tracing
{
	enum struct EventFieldFormat : int32_t
	{
		Default = static_cast<int32_t>(0x0),
		String = static_cast<int32_t>(0x2),
		Boolean = static_cast<int32_t>(0x3),
		Hexadecimal = static_cast<int32_t>(0x4),
		Xml = static_cast<int32_t>(0xB),
		Json = static_cast<int32_t>(0xC),
		HResult = static_cast<int32_t>(0xF),
	};
}

