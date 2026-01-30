#pragma once
namespace mscorlib::System::Security::Principal
{
	enum struct TokenImpersonationLevel : int32_t
	{
		Anonymous = static_cast<int32_t>(0x1),
		Delegation = static_cast<int32_t>(0x4),
		Identification = static_cast<int32_t>(0x2),
		Impersonation = static_cast<int32_t>(0x3),
		None = static_cast<int32_t>(0x0),
	};
}

