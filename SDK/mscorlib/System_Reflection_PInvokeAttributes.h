#pragma once
namespace mscorlib::System::Reflection
{
	enum struct PInvokeAttributes : int32_t
	{
		NoMangle = static_cast<int32_t>(0x1),
		CharSetMask = static_cast<int32_t>(0x6),
		CharSetNotSpec = static_cast<int32_t>(0x0),
		CharSetAnsi = static_cast<int32_t>(0x2),
		CharSetUnicode = static_cast<int32_t>(0x4),
		CharSetAuto = static_cast<int32_t>(0x6),
		BestFitUseAssem = static_cast<int32_t>(0x0),
		BestFitEnabled = static_cast<int32_t>(0x10),
		BestFitDisabled = static_cast<int32_t>(0x20),
		BestFitMask = static_cast<int32_t>(0x30),
		ThrowOnUnmappableCharUseAssem = static_cast<int32_t>(0x0),
		ThrowOnUnmappableCharEnabled = static_cast<int32_t>(0x1000),
		ThrowOnUnmappableCharDisabled = static_cast<int32_t>(0x2000),
		ThrowOnUnmappableCharMask = static_cast<int32_t>(0x3000),
		SupportsLastError = static_cast<int32_t>(0x40),
		CallConvMask = static_cast<int32_t>(0x700),
		CallConvWinapi = static_cast<int32_t>(0x100),
		CallConvCdecl = static_cast<int32_t>(0x200),
		CallConvStdcall = static_cast<int32_t>(0x300),
		CallConvThiscall = static_cast<int32_t>(0x400),
		CallConvFastcall = static_cast<int32_t>(0x500),
		MaxValue = static_cast<int32_t>(0xFFFF),
	};
}

