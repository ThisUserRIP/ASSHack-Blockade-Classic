#pragma once
namespace mscorlib::System::Reflection
{
	enum struct TypeAttributes : int32_t
	{
		VisibilityMask = static_cast<int32_t>(0x7),
		NotPublic = static_cast<int32_t>(0x0),
		Public = static_cast<int32_t>(0x1),
		NestedPublic = static_cast<int32_t>(0x2),
		NestedPrivate = static_cast<int32_t>(0x3),
		NestedFamily = static_cast<int32_t>(0x4),
		NestedAssembly = static_cast<int32_t>(0x5),
		NestedFamANDAssem = static_cast<int32_t>(0x6),
		NestedFamORAssem = static_cast<int32_t>(0x7),
		LayoutMask = static_cast<int32_t>(0x18),
		AutoLayout = static_cast<int32_t>(0x0),
		SequentialLayout = static_cast<int32_t>(0x8),
		ExplicitLayout = static_cast<int32_t>(0x10),
		ClassSemanticsMask = static_cast<int32_t>(0x20),
		Class = static_cast<int32_t>(0x0),
		Interface = static_cast<int32_t>(0x20),
		Abstract = static_cast<int32_t>(0x80),
		Sealed = static_cast<int32_t>(0x100),
		SpecialName = static_cast<int32_t>(0x400),
		Import = static_cast<int32_t>(0x1000),
		Serializable = static_cast<int32_t>(0x2000),
		WindowsRuntime = static_cast<int32_t>(0x4000),
		StringFormatMask = static_cast<int32_t>(0x30000),
		AnsiClass = static_cast<int32_t>(0x0),
		UnicodeClass = static_cast<int32_t>(0x10000),
		AutoClass = static_cast<int32_t>(0x20000),
		CustomFormatClass = static_cast<int32_t>(0x30000),
		CustomFormatMask = static_cast<int32_t>(0xC00000),
		BeforeFieldInit = static_cast<int32_t>(0x100000),
		ReservedMask = static_cast<int32_t>(0x40800),
		RTSpecialName = static_cast<int32_t>(0x800),
		HasSecurity = static_cast<int32_t>(0x40000),
	};
}

