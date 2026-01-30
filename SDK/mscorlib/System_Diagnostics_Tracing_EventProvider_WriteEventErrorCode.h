#pragma once
namespace mscorlib::System::Diagnostics::Tracing
{
	enum struct EventProvider_WriteEventErrorCode : int32_t
	{
		NoError = static_cast<int32_t>(0x0),
		NoFreeBuffers = static_cast<int32_t>(0x1),
		EventTooBig = static_cast<int32_t>(0x2),
		NullInput = static_cast<int32_t>(0x3),
		TooManyArgs = static_cast<int32_t>(0x4),
		Other = static_cast<int32_t>(0x5),
	};
}

