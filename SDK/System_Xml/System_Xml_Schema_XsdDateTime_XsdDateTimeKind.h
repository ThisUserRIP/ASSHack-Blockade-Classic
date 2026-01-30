#pragma once
namespace System_Xml::System::Xml::Schema
{
	enum struct XsdDateTime_XsdDateTimeKind : int32_t
	{
		Unspecified = static_cast<int32_t>(0x0),
		Zulu = static_cast<int32_t>(0x1),
		LocalWestOfZulu = static_cast<int32_t>(0x2),
		LocalEastOfZulu = static_cast<int32_t>(0x3),
	};
}

