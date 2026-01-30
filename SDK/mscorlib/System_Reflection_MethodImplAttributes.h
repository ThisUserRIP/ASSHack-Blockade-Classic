#pragma once
namespace mscorlib::System::Reflection
{
	enum struct MethodImplAttributes : int32_t
	{
		CodeTypeMask = static_cast<int32_t>(0x3),
		IL = static_cast<int32_t>(0x0),
		Native = static_cast<int32_t>(0x1),
		OPTIL = static_cast<int32_t>(0x2),
		Runtime = static_cast<int32_t>(0x3),
		ManagedMask = static_cast<int32_t>(0x4),
		Unmanaged = static_cast<int32_t>(0x4),
		Managed = static_cast<int32_t>(0x0),
		ForwardRef = static_cast<int32_t>(0x10),
		PreserveSig = static_cast<int32_t>(0x80),
		InternalCall = static_cast<int32_t>(0x1000),
		Synchronized = static_cast<int32_t>(0x20),
		NoInlining = static_cast<int32_t>(0x8),
		AggressiveInlining = static_cast<int32_t>(0x100),
		NoOptimization = static_cast<int32_t>(0x40),
		MaxMethodImplVal = static_cast<int32_t>(0xFFFF),
	};
}

