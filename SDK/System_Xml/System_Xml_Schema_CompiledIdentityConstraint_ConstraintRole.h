#pragma once
namespace System_Xml::System::Xml::Schema
{
	enum struct CompiledIdentityConstraint_ConstraintRole : int32_t
	{
		Unique = static_cast<int32_t>(0x0),
		Key = static_cast<int32_t>(0x1),
		Keyref = static_cast<int32_t>(0x2),
	};
}

