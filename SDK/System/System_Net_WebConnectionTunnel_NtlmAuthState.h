#pragma once
namespace System::System::Net
{
	enum struct WebConnectionTunnel_NtlmAuthState : int32_t
	{
		None = static_cast<int32_t>(0x0),
		Challenge = static_cast<int32_t>(0x1),
		Response = static_cast<int32_t>(0x2),
	};
}

