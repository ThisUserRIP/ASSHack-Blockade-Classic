#pragma once
namespace System::System::Net
{
	enum struct WebExceptionInternalStatus : int32_t
	{
		RequestFatal = static_cast<int32_t>(0x0),
		ServicePointFatal = static_cast<int32_t>(0x1),
		Recoverable = static_cast<int32_t>(0x2),
		Isolated = static_cast<int32_t>(0x3),
	};
}

