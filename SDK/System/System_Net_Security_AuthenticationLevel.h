#pragma once
namespace System::System::Net::Security
{
	enum struct AuthenticationLevel : int32_t
	{
		None = static_cast<int32_t>(0x0),
		MutualAuthRequested = static_cast<int32_t>(0x1),
		MutualAuthRequired = static_cast<int32_t>(0x2),
	};
}

