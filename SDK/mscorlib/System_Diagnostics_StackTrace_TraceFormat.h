#pragma once
namespace mscorlib::System::Diagnostics
{
	enum struct StackTrace_TraceFormat : int32_t
	{
		Normal = static_cast<int32_t>(0x0),
		TrailingNewLine = static_cast<int32_t>(0x1),
		NoResourceLookup = static_cast<int32_t>(0x2),
	};
}

