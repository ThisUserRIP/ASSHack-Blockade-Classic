#pragma once
namespace System_Xml::System::Xml::Schema
{
	enum struct Compositor : int32_t
	{
		Root = static_cast<int32_t>(0x0),
		Include = static_cast<int32_t>(0x1),
		Import = static_cast<int32_t>(0x2),
		Redefine = static_cast<int32_t>(0x3),
	};
}

