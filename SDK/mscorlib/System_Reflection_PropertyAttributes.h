#pragma once
namespace mscorlib::System::Reflection
{
	enum struct PropertyAttributes : int32_t
	{
		None = static_cast<int32_t>(0x0),
		SpecialName = static_cast<int32_t>(0x200),
		ReservedMask = static_cast<int32_t>(0xF400),
		RTSpecialName = static_cast<int32_t>(0x400),
		HasDefault = static_cast<int32_t>(0x1000),
		Reserved2 = static_cast<int32_t>(0x2000),
		Reserved3 = static_cast<int32_t>(0x4000),
		Reserved4 = static_cast<int32_t>(0x8000),
	};
}

