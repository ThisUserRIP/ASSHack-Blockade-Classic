#pragma once
namespace Assembly_CSharp::I2::Loc
{
	enum struct ePluralType : int32_t
	{
		Zero = static_cast<int32_t>(0x0),
		One = static_cast<int32_t>(0x1),
		Two = static_cast<int32_t>(0x2),
		Few = static_cast<int32_t>(0x3),
		Many = static_cast<int32_t>(0x4),
		Plural = static_cast<int32_t>(0x5),
	};
}

