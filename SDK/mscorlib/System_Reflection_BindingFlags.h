#pragma once
namespace mscorlib::System::Reflection
{
	enum struct BindingFlags : int32_t
	{
		Default = static_cast<int32_t>(0x0),
		IgnoreCase = static_cast<int32_t>(0x1),
		DeclaredOnly = static_cast<int32_t>(0x2),
		Instance = static_cast<int32_t>(0x4),
		Static = static_cast<int32_t>(0x8),
		Public = static_cast<int32_t>(0x10),
		NonPublic = static_cast<int32_t>(0x20),
		FlattenHierarchy = static_cast<int32_t>(0x40),
		InvokeMethod = static_cast<int32_t>(0x100),
		CreateInstance = static_cast<int32_t>(0x200),
		GetField = static_cast<int32_t>(0x400),
		SetField = static_cast<int32_t>(0x800),
		GetProperty = static_cast<int32_t>(0x1000),
		SetProperty = static_cast<int32_t>(0x2000),
		PutDispProperty = static_cast<int32_t>(0x4000),
		PutRefDispProperty = static_cast<int32_t>(0x8000),
		ExactBinding = static_cast<int32_t>(0x10000),
		SuppressChangeType = static_cast<int32_t>(0x20000),
		OptionalParamBinding = static_cast<int32_t>(0x40000),
		IgnoreReturn = static_cast<int32_t>(0x1000000),
	};
}

