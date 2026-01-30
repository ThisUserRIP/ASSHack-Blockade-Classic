#pragma once
namespace mscorlib::System::Diagnostics
{
	enum struct DebuggableAttribute_DebuggingModes : int32_t
	{
		None = static_cast<int32_t>(0x0),
		Default = static_cast<int32_t>(0x1),
		DisableOptimizations = static_cast<int32_t>(0x100),
		IgnoreSymbolStoreSequencePoints = static_cast<int32_t>(0x2),
		EnableEditAndContinue = static_cast<int32_t>(0x4),
	};
}

