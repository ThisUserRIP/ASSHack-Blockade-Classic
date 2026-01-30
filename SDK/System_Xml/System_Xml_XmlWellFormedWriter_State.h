#pragma once
namespace System_Xml::System::Xml
{
	enum struct XmlWellFormedWriter_State : int32_t
	{
		Start = static_cast<int32_t>(0x0),
		TopLevel = static_cast<int32_t>(0x1),
		Document = static_cast<int32_t>(0x2),
		Element = static_cast<int32_t>(0x3),
		Content = static_cast<int32_t>(0x4),
		B64Content = static_cast<int32_t>(0x5),
		B64Attribute = static_cast<int32_t>(0x6),
		AfterRootEle = static_cast<int32_t>(0x7),
		Attribute = static_cast<int32_t>(0x8),
		SpecialAttr = static_cast<int32_t>(0x9),
		EndDocument = static_cast<int32_t>(0xA),
		RootLevelAttr = static_cast<int32_t>(0xB),
		RootLevelSpecAttr = static_cast<int32_t>(0xC),
		RootLevelB64Attr = static_cast<int32_t>(0xD),
		AfterRootLevelAttr = static_cast<int32_t>(0xE),
		Closed = static_cast<int32_t>(0xF),
		Error = static_cast<int32_t>(0x10),
		StartContent = static_cast<int32_t>(0x65),
		StartContentEle = static_cast<int32_t>(0x66),
		StartContentB64 = static_cast<int32_t>(0x67),
		StartDoc = static_cast<int32_t>(0x68),
		StartDocEle = static_cast<int32_t>(0x6A),
		EndAttrSEle = static_cast<int32_t>(0x6B),
		EndAttrEEle = static_cast<int32_t>(0x6C),
		EndAttrSCont = static_cast<int32_t>(0x6D),
		EndAttrSAttr = static_cast<int32_t>(0x6F),
		PostB64Cont = static_cast<int32_t>(0x70),
		PostB64Attr = static_cast<int32_t>(0x71),
		PostB64RootAttr = static_cast<int32_t>(0x72),
		StartFragEle = static_cast<int32_t>(0x73),
		StartFragCont = static_cast<int32_t>(0x74),
		StartFragB64 = static_cast<int32_t>(0x75),
		StartRootLevelAttr = static_cast<int32_t>(0x76),
	};
}

