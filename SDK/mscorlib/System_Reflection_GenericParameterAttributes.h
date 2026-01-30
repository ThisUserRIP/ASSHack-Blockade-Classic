#pragma once
namespace mscorlib::System::Reflection
{
	enum struct GenericParameterAttributes : int32_t
	{
		None = static_cast<int32_t>(0x0),
		VarianceMask = static_cast<int32_t>(0x3),
		Covariant = static_cast<int32_t>(0x1),
		Contravariant = static_cast<int32_t>(0x2),
		SpecialConstraintMask = static_cast<int32_t>(0x1C),
		ReferenceTypeConstraint = static_cast<int32_t>(0x4),
		NotNullableValueTypeConstraint = static_cast<int32_t>(0x8),
		DefaultConstructorConstraint = static_cast<int32_t>(0x10),
	};
}

