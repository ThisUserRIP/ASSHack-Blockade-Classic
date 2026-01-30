#pragma once
namespace System::Mono::Net::Security
{
	enum struct MobileAuthenticatedStream_OperationType : int32_t
	{
		Read = static_cast<int32_t>(0x0),
		Write = static_cast<int32_t>(0x1),
		Shutdown = static_cast<int32_t>(0x2),
	};
}

