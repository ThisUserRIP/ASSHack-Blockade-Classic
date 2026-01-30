#pragma once
namespace System_Xml::System::Xml
{
	enum struct XmlDateTimeSerializationMode : int32_t
	{
		Local = static_cast<int32_t>(0x0),
		Utc = static_cast<int32_t>(0x1),
		Unspecified = static_cast<int32_t>(0x2),
		RoundtripKind = static_cast<int32_t>(0x3),
	};
}

