#pragma once
namespace mscorlib::System::Reflection
{
	enum struct ExceptionHandlingClauseOptions : int32_t
	{
		Clause = static_cast<int32_t>(0x0),
		Filter = static_cast<int32_t>(0x1),
		Finally = static_cast<int32_t>(0x2),
		Fault = static_cast<int32_t>(0x4),
	};
}

