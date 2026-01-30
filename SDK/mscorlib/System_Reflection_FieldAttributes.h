#pragma once
namespace mscorlib::System::Reflection
{
	enum struct FieldAttributes : int32_t
	{
		FieldAccessMask = static_cast<int32_t>(0x7),
		PrivateScope = static_cast<int32_t>(0x0),
		Private = static_cast<int32_t>(0x1),
		FamANDAssem = static_cast<int32_t>(0x2),
		Assembly = static_cast<int32_t>(0x3),
		Family = static_cast<int32_t>(0x4),
		FamORAssem = static_cast<int32_t>(0x5),
		Public = static_cast<int32_t>(0x6),
		Static = static_cast<int32_t>(0x10),
		InitOnly = static_cast<int32_t>(0x20),
		Literal = static_cast<int32_t>(0x40),
		NotSerialized = static_cast<int32_t>(0x80),
		SpecialName = static_cast<int32_t>(0x200),
		PinvokeImpl = static_cast<int32_t>(0x2000),
		ReservedMask = static_cast<int32_t>(0x9500),
		RTSpecialName = static_cast<int32_t>(0x400),
		HasFieldMarshal = static_cast<int32_t>(0x1000),
		HasDefault = static_cast<int32_t>(0x8000),
		HasFieldRVA = static_cast<int32_t>(0x100),
	};
}

