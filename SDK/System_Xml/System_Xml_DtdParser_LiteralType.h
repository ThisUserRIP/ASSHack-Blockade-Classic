#pragma once
namespace System_Xml::System::Xml
{
	enum struct DtdParser_LiteralType : int32_t
	{
		AttributeValue = static_cast<int32_t>(0x0),
		EntityReplText = static_cast<int32_t>(0x1),
		SystemOrPublicID = static_cast<int32_t>(0x2),
	};
}

