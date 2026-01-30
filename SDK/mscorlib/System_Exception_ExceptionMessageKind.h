#pragma once
namespace mscorlib::System
{
	enum struct Exception_ExceptionMessageKind : int32_t
	{
		ThreadAbort = static_cast<int32_t>(0x1),
		ThreadInterrupted = static_cast<int32_t>(0x2),
		OutOfMemory = static_cast<int32_t>(0x3),
	};
}

