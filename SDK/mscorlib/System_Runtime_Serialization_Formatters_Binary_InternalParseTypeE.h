#pragma once
namespace mscorlib::System::Runtime::Serialization::Formatters::Binary
{
	enum struct InternalParseTypeE : int32_t
	{
		Empty = static_cast<int32_t>(0x0),
		SerializedStreamHeader = static_cast<int32_t>(0x1),
		Object = static_cast<int32_t>(0x2),
		Member = static_cast<int32_t>(0x3),
		ObjectEnd = static_cast<int32_t>(0x4),
		MemberEnd = static_cast<int32_t>(0x5),
		Headers = static_cast<int32_t>(0x6),
		HeadersEnd = static_cast<int32_t>(0x7),
		SerializedStreamHeaderEnd = static_cast<int32_t>(0x8),
		Envelope = static_cast<int32_t>(0x9),
		EnvelopeEnd = static_cast<int32_t>(0xA),
		Body = static_cast<int32_t>(0xB),
		BodyEnd = static_cast<int32_t>(0xC),
	};
}

