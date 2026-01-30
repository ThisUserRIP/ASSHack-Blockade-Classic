#pragma once
namespace mscorlib::System::Runtime::ConstrainedExecution
{
	enum struct Cer : int32_t
	{
		None = static_cast<int32_t>(0x0),
		MayFail = static_cast<int32_t>(0x1),
		Success = static_cast<int32_t>(0x2),
	};
}

