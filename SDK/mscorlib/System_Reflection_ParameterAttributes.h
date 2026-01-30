#pragma once
namespace mscorlib::System::Reflection
{
	enum struct ParameterAttributes : int32_t
	{
		None = static_cast<int32_t>(0x0),
		In = static_cast<int32_t>(0x1),
		Out = static_cast<int32_t>(0x2),
		Lcid = static_cast<int32_t>(0x4),
		Retval = static_cast<int32_t>(0x8),
		Optional = static_cast<int32_t>(0x10),
		ReservedMask = static_cast<int32_t>(0xF000),
		HasDefault = static_cast<int32_t>(0x1000),
		HasFieldMarshal = static_cast<int32_t>(0x2000),
		Reserved3 = static_cast<int32_t>(0x4000),
		Reserved4 = static_cast<int32_t>(0x8000),
	};
}

