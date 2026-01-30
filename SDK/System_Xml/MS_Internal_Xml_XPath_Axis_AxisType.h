#pragma once
namespace System_Xml::MS::Internal::Xml::XPath
{
	enum struct Axis_AxisType : int32_t
	{
		Ancestor = static_cast<int32_t>(0x0),
		AncestorOrSelf = static_cast<int32_t>(0x1),
		Attribute = static_cast<int32_t>(0x2),
		Child = static_cast<int32_t>(0x3),
		Descendant = static_cast<int32_t>(0x4),
		DescendantOrSelf = static_cast<int32_t>(0x5),
		Following = static_cast<int32_t>(0x6),
		FollowingSibling = static_cast<int32_t>(0x7),
		Namespace = static_cast<int32_t>(0x8),
		Parent = static_cast<int32_t>(0x9),
		Preceding = static_cast<int32_t>(0xA),
		PrecedingSibling = static_cast<int32_t>(0xB),
		Self = static_cast<int32_t>(0xC),
		None = static_cast<int32_t>(0xD),
	};
}

