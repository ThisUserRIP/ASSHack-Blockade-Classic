#pragma once
namespace System_Xml::System::Xml
{
	enum struct XmlTextWriter_NamespaceState : int32_t
	{
		Uninitialized = static_cast<int32_t>(0x0),
		NotDeclaredButInScope = static_cast<int32_t>(0x1),
		DeclaredButNotWrittenOut = static_cast<int32_t>(0x2),
		DeclaredAndWrittenOut = static_cast<int32_t>(0x3),
	};
}

