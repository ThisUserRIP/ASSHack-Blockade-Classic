#pragma once
namespace Mono_Security::Mono::Security::Protocol::Ntlm
{
	enum struct NtlmAuthLevel : int32_t
	{
		LM_and_NTLM = static_cast<int32_t>(0x0),
		LM_and_NTLM_and_try_NTLMv2_Session = static_cast<int32_t>(0x1),
		NTLM_only = static_cast<int32_t>(0x2),
		NTLMv2_only = static_cast<int32_t>(0x3),
	};
}

