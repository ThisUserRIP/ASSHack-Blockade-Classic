#pragma once
namespace System_Xml::System::Xml
{
	enum struct XmlEventCache_XmlEventType : int32_t
	{
		Unknown = static_cast<int32_t>(0x0),
		DocType = static_cast<int32_t>(0x1),
		StartElem = static_cast<int32_t>(0x2),
		StartAttr = static_cast<int32_t>(0x3),
		EndAttr = static_cast<int32_t>(0x4),
		CData = static_cast<int32_t>(0x5),
		Comment = static_cast<int32_t>(0x6),
		PI = static_cast<int32_t>(0x7),
		Whitespace = static_cast<int32_t>(0x8),
		String = static_cast<int32_t>(0x9),
		Raw = static_cast<int32_t>(0xA),
		EntRef = static_cast<int32_t>(0xB),
		CharEnt = static_cast<int32_t>(0xC),
		SurrCharEnt = static_cast<int32_t>(0xD),
		Base64 = static_cast<int32_t>(0xE),
		BinHex = static_cast<int32_t>(0xF),
		XmlDecl1 = static_cast<int32_t>(0x10),
		XmlDecl2 = static_cast<int32_t>(0x11),
		StartContent = static_cast<int32_t>(0x12),
		EndElem = static_cast<int32_t>(0x13),
		FullEndElem = static_cast<int32_t>(0x14),
		Nmsp = static_cast<int32_t>(0x15),
		EndBase64 = static_cast<int32_t>(0x16),
		Close = static_cast<int32_t>(0x17),
		Flush = static_cast<int32_t>(0x18),
		Dispose = static_cast<int32_t>(0x19),
	};
}

