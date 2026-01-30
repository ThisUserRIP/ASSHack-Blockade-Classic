#pragma once
namespace Mono_Security::Mono::Security::Protocol::Ntlm
{
	enum struct NtlmFlags : int32_t
	{
		NegotiateUnicode = static_cast<int32_t>(0x1),
		NegotiateOem = static_cast<int32_t>(0x2),
		RequestTarget = static_cast<int32_t>(0x4),
		NegotiateNtlm = static_cast<int32_t>(0x200),
		NegotiateDomainSupplied = static_cast<int32_t>(0x1000),
		NegotiateWorkstationSupplied = static_cast<int32_t>(0x2000),
		NegotiateAlwaysSign = static_cast<int32_t>(0x8000),
		NegotiateNtlm2Key = static_cast<int32_t>(0x80000),
		Negotiate128 = static_cast<int32_t>(0x20000000),
		Negotiate56 = static_cast<int32_t>(0x80000000),
	};
}

