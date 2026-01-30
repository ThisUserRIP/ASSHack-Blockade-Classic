#pragma once
namespace mscorlib::System::Runtime::Serialization::Formatters::Binary
{
	enum struct MessageEnum : int32_t
	{
		NoArgs = static_cast<int32_t>(0x1),
		ArgsInline = static_cast<int32_t>(0x2),
		ArgsIsArray = static_cast<int32_t>(0x4),
		ArgsInArray = static_cast<int32_t>(0x8),
		NoContext = static_cast<int32_t>(0x10),
		ContextInline = static_cast<int32_t>(0x20),
		ContextInArray = static_cast<int32_t>(0x40),
		MethodSignatureInArray = static_cast<int32_t>(0x80),
		PropertyInArray = static_cast<int32_t>(0x100),
		NoReturnValue = static_cast<int32_t>(0x200),
		ReturnValueVoid = static_cast<int32_t>(0x400),
		ReturnValueInline = static_cast<int32_t>(0x800),
		ReturnValueInArray = static_cast<int32_t>(0x1000),
		ExceptionInArray = static_cast<int32_t>(0x2000),
		GenericMethod = static_cast<int32_t>(0x8000),
	};
}

