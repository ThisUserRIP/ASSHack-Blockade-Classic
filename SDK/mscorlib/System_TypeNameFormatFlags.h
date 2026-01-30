#pragma once
namespace mscorlib::System
{
	enum struct TypeNameFormatFlags : int32_t
	{
		FormatBasic = static_cast<int32_t>(0x0),
		FormatNamespace = static_cast<int32_t>(0x1),
		FormatFullInst = static_cast<int32_t>(0x2),
		FormatAssembly = static_cast<int32_t>(0x4),
		FormatSignature = static_cast<int32_t>(0x8),
		FormatNoVersion = static_cast<int32_t>(0x10),
		FormatAngleBrackets = static_cast<int32_t>(0x40),
		FormatStubInfo = static_cast<int32_t>(0x80),
		FormatGenericParam = static_cast<int32_t>(0x100),
		FormatSerialization = static_cast<int32_t>(0x103),
	};
}

