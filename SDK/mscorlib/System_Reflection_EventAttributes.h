#pragma once
namespace mscorlib::System::Reflection
{
	enum struct EventAttributes : int32_t
	{
		None = static_cast<int32_t>(0x0),
		SpecialName = static_cast<int32_t>(0x200),
		ReservedMask = static_cast<int32_t>(0x400),
		RTSpecialName = static_cast<int32_t>(0x400),
	};
}

