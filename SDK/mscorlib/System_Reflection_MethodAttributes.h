#pragma once
namespace mscorlib::System::Reflection
{
	enum struct MethodAttributes : int32_t
	{
		MemberAccessMask = static_cast<int32_t>(0x7),
		PrivateScope = static_cast<int32_t>(0x0),
		Private = static_cast<int32_t>(0x1),
		FamANDAssem = static_cast<int32_t>(0x2),
		Assembly = static_cast<int32_t>(0x3),
		Family = static_cast<int32_t>(0x4),
		FamORAssem = static_cast<int32_t>(0x5),
		Public = static_cast<int32_t>(0x6),
		Static = static_cast<int32_t>(0x10),
		Final = static_cast<int32_t>(0x20),
		Virtual = static_cast<int32_t>(0x40),
		HideBySig = static_cast<int32_t>(0x80),
		CheckAccessOnOverride = static_cast<int32_t>(0x200),
		VtableLayoutMask = static_cast<int32_t>(0x100),
		ReuseSlot = static_cast<int32_t>(0x0),
		NewSlot = static_cast<int32_t>(0x100),
		Abstract = static_cast<int32_t>(0x400),
		SpecialName = static_cast<int32_t>(0x800),
		PinvokeImpl = static_cast<int32_t>(0x2000),
		UnmanagedExport = static_cast<int32_t>(0x8),
		RTSpecialName = static_cast<int32_t>(0x1000),
		ReservedMask = static_cast<int32_t>(0xD000),
		HasSecurity = static_cast<int32_t>(0x4000),
		RequireSecObject = static_cast<int32_t>(0x8000),
	};
}

