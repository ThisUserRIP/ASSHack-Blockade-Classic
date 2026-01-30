#pragma once
namespace System_Xml::System::Xml
{
	enum struct DtdParser_ScanningFunction : int32_t
	{
		SubsetContent = static_cast<int32_t>(0x0),
		Name = static_cast<int32_t>(0x1),
		QName = static_cast<int32_t>(0x2),
		Nmtoken = static_cast<int32_t>(0x3),
		Doctype1 = static_cast<int32_t>(0x4),
		Doctype2 = static_cast<int32_t>(0x5),
		Element1 = static_cast<int32_t>(0x6),
		Element2 = static_cast<int32_t>(0x7),
		Element3 = static_cast<int32_t>(0x8),
		Element4 = static_cast<int32_t>(0x9),
		Element5 = static_cast<int32_t>(0xA),
		Element6 = static_cast<int32_t>(0xB),
		Element7 = static_cast<int32_t>(0xC),
		Attlist1 = static_cast<int32_t>(0xD),
		Attlist2 = static_cast<int32_t>(0xE),
		Attlist3 = static_cast<int32_t>(0xF),
		Attlist4 = static_cast<int32_t>(0x10),
		Attlist5 = static_cast<int32_t>(0x11),
		Attlist6 = static_cast<int32_t>(0x12),
		Attlist7 = static_cast<int32_t>(0x13),
		Entity1 = static_cast<int32_t>(0x14),
		Entity2 = static_cast<int32_t>(0x15),
		Entity3 = static_cast<int32_t>(0x16),
		Notation1 = static_cast<int32_t>(0x17),
		CondSection1 = static_cast<int32_t>(0x18),
		CondSection2 = static_cast<int32_t>(0x19),
		CondSection3 = static_cast<int32_t>(0x1A),
		Literal = static_cast<int32_t>(0x1B),
		SystemId = static_cast<int32_t>(0x1C),
		PublicId1 = static_cast<int32_t>(0x1D),
		PublicId2 = static_cast<int32_t>(0x1E),
		ClosingTag = static_cast<int32_t>(0x1F),
		ParamEntitySpace = static_cast<int32_t>(0x20),
		None = static_cast<int32_t>(0x21),
	};
}

