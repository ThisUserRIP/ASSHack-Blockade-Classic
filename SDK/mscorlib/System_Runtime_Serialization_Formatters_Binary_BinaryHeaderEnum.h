#pragma once
namespace mscorlib::System::Runtime::Serialization::Formatters::Binary
{
	enum struct BinaryHeaderEnum : int32_t
	{
		SerializedStreamHeader = static_cast<int32_t>(0x0),
		Object = static_cast<int32_t>(0x1),
		ObjectWithMap = static_cast<int32_t>(0x2),
		ObjectWithMapAssemId = static_cast<int32_t>(0x3),
		ObjectWithMapTyped = static_cast<int32_t>(0x4),
		ObjectWithMapTypedAssemId = static_cast<int32_t>(0x5),
		ObjectString = static_cast<int32_t>(0x6),
		Array = static_cast<int32_t>(0x7),
		MemberPrimitiveTyped = static_cast<int32_t>(0x8),
		MemberReference = static_cast<int32_t>(0x9),
		ObjectNull = static_cast<int32_t>(0xA),
		MessageEnd = static_cast<int32_t>(0xB),
		Assembly = static_cast<int32_t>(0xC),
		ObjectNullMultiple256 = static_cast<int32_t>(0xD),
		ObjectNullMultiple = static_cast<int32_t>(0xE),
		ArraySinglePrimitive = static_cast<int32_t>(0xF),
		ArraySingleObject = static_cast<int32_t>(0x10),
		ArraySingleString = static_cast<int32_t>(0x11),
		CrossAppDomainMap = static_cast<int32_t>(0x12),
		CrossAppDomainString = static_cast<int32_t>(0x13),
		CrossAppDomainAssembly = static_cast<int32_t>(0x14),
		MethodCall = static_cast<int32_t>(0x15),
		MethodReturn = static_cast<int32_t>(0x16),
	};
}

