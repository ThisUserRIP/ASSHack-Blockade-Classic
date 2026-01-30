#pragma once
namespace mscorlib::System::Security::Permissions
{
	enum struct SecurityPermissionFlag : int32_t
	{
		NoFlags = static_cast<int32_t>(0x0),
		Assertion = static_cast<int32_t>(0x1),
		UnmanagedCode = static_cast<int32_t>(0x2),
		SkipVerification = static_cast<int32_t>(0x4),
		Execution = static_cast<int32_t>(0x8),
		ControlThread = static_cast<int32_t>(0x10),
		ControlEvidence = static_cast<int32_t>(0x20),
		ControlPolicy = static_cast<int32_t>(0x40),
		SerializationFormatter = static_cast<int32_t>(0x80),
		ControlDomainPolicy = static_cast<int32_t>(0x100),
		ControlPrincipal = static_cast<int32_t>(0x200),
		ControlAppDomain = static_cast<int32_t>(0x400),
		RemotingConfiguration = static_cast<int32_t>(0x800),
		Infrastructure = static_cast<int32_t>(0x1000),
		BindingRedirects = static_cast<int32_t>(0x2000),
		AllFlags = static_cast<int32_t>(0x3FFF),
	};
}

